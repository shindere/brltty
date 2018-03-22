/*
 * BRLTTY - A background process providing access to the console screen (when in
 *          text mode) for a blind person using a refreshable braille display.
 *
 * Copyright (C) 1995-2018 by The BRLTTY Developers.
 *
 * BRLTTY comes with ABSOLUTELY NO WARRANTY.
 *
 * This is free software, placed under the terms of the
 * GNU Lesser General Public License, as published by the Free Software
 * Foundation; either version 2.1 of the License, or (at your option) any
 * later version. Please see the file LICENSE-LGPL for details.
 *
 * Web Page: http://brltty.com/
 *
 * This software is maintained by Dave Mielke <dave@mielke.cc>.
 */

package org.a11y.brltty.android;
import org.a11y.brltty.core.*;

import android.util.Log;
import android.os.Build;

import android.view.KeyEvent;
import android.view.ViewConfiguration;

import android.inputmethodservice.InputMethodService;
import android.view.inputmethod.InputMethodInfo;
import android.view.inputmethod.InputConnection;
import android.view.inputmethod.EditorInfo;

public class InputService extends InputMethodService {
  private static final String LOG_TAG = InputService.class.getName();

  private static volatile InputService inputService = null;

  public static InputService getInputService () {
    return inputService;
  }

  @Override
  public void onCreate () {
    super.onCreate();
    ApplicationContext.set(this);
    inputService = this;
    Log.d(LOG_TAG, "input service started");
  }

  @Override
  public void onDestroy () {
    try {
      inputService = null;
      Log.d(LOG_TAG, "input service stopped");
    } finally {
      super.onDestroy();
    }
  }

  @Override
  public void onBindInput () {
    Log.d(LOG_TAG, "input service bound");
  }

  @Override
  public void onUnbindInput () {
    Log.d(LOG_TAG, "input service unbound");
  }

  @Override
  public void onStartInput (EditorInfo info, boolean restarting) {
    Log.d(LOG_TAG, "input service " + (restarting? "reconnected": "connected"));
    if (info.actionLabel != null) Log.d(LOG_TAG, "action label: " + info.actionLabel);
    Log.d(LOG_TAG, "action id: " + info.actionId);
  }

  @Override
  public void onFinishInput () {
    Log.d(LOG_TAG, "input service disconnected");
  }

  public static void logKeyEvent (int code, boolean press, String description) {
    if (ApplicationSettings.LOG_KEYBOARD_EVENTS) {
      StringBuilder sb = new StringBuilder();

      sb.append("key ");
      sb.append((press? "press": "release"));
      sb.append(' ');
      sb.append(description);

      sb.append(": ");
      sb.append(code);

      if (ApplicationUtilities.haveSdkVersion(Build.VERSION_CODES.HONEYCOMB_MR1)) {
        sb.append(" (");
        sb.append(KeyEvent.keyCodeToString(code));
        sb.append(")");
      }

      Log.d(LOG_TAG, sb.toString());
    }
  }

  public static void logKeyEventReceived (int code, boolean press) {
    logKeyEvent(code, press, "received");
  }

  public static void logKeyEventSent (int code, boolean press) {
    logKeyEvent(code, press, "sent");
  }

  public native boolean handleKeyEvent (int code, boolean press);

  public void forwardKeyEvent (int code, boolean press) {
    InputConnection connection = getCurrentInputConnection();

    if (connection != null) {
      int action = press? KeyEvent.ACTION_DOWN: KeyEvent.ACTION_UP;
      KeyEvent event = new KeyEvent(action, code);
      event = KeyEvent.changeFlags(event, KeyEvent.FLAG_SOFT_KEYBOARD);

      if (connection.sendKeyEvent(event)) {
        logKeyEvent(code, press, "forwarded");
      } else {
        logKeyEvent(code, press, "not forwarded");
      }
    } else {
      logKeyEvent(code, press, "unforwardable");
    }
  }

  public boolean acceptKeyEvent (final int code, final boolean press) {
    switch (code) {
      case KeyEvent.KEYCODE_POWER:
      case KeyEvent.KEYCODE_HOME:
      case KeyEvent.KEYCODE_BACK:
      case KeyEvent.KEYCODE_MENU:
        logKeyEvent(code, press, "rejected");
        return false;

      default:
        logKeyEvent(code, press, "accepted");
        break;
    }

    if (BrailleService.getBrailleService() == null) {
      Log.w(LOG_TAG, "braille service not started");
      return false;
    }

    CoreWrapper.runOnCoreThread(
      new Runnable() {
        @Override
        public void run () {
          logKeyEvent(code, press, "delivered");

          if (handleKeyEvent(code, press)) {
            logKeyEvent(code, press, "handled");
          } else {
            forwardKeyEvent(code, press);
          }
        }
      }
    );

    return true;
  }

  public static boolean isSystemKeyCode (int code) {
    switch (code) {
      case KeyEvent.KEYCODE_HOME:
      case KeyEvent.KEYCODE_BACK:
        return true;

      default:
        return false;
    }
  }

  @Override
  public boolean onKeyDown (int code, KeyEvent event) {
    logKeyEventReceived(code, true);

    if (!isSystemKeyCode(code)) {
      if (acceptKeyEvent(code, true)) {
        return true;
      }
    }

    return super.onKeyDown(code, event);
  }

  @Override
  public boolean onKeyUp (int code, KeyEvent event) {
    logKeyEventReceived(code, false);

    if (!isSystemKeyCode(code)) {
      if (acceptKeyEvent(code, false)) {
        return true;
      }
    }

    return super.onKeyUp(code, event);
  }

  public static InputMethodInfo getInputMethodInfo (Class classObject) {
    String className = classObject.getName();

    for (InputMethodInfo info : ApplicationUtilities.getInputMethodManager().getEnabledInputMethodList()) {
      if (info.getComponent().getClassName().equals(className)) {
        return info;
      }
    }

    return null;
  }

  public static InputMethodInfo getInputMethodInfo () {
    return getInputMethodInfo(InputService.class);
  }

  public static boolean isInputServiceEnabled () {
    return getInputMethodInfo() != null;
  }

  public static boolean isInputServiceSelected () {
    InputMethodInfo info = getInputMethodInfo();

    if (info != null) {
      if (info.getId().equals(ApplicationUtilities.getSelectedInputMethodIdentifier())) {
        return true;
      }
    }

    return false;
  }

  public static InputConnection getInputConnection () {
    InputService service = InputService.getInputService();
    if (service != null) {
      InputConnection connection = service.getCurrentInputConnection();

      if (connection != null) {
        return connection;
      } else {
        Log.w(LOG_TAG, "input service not connected");
      }
    } else if (!isInputServiceEnabled()) {
      Log.w(LOG_TAG, "input service not enabled");
    } else if (!isInputServiceSelected()) {
      Log.w(LOG_TAG, "input service not selected");
    } else {
      Log.w(LOG_TAG, "input service not started");
    }

    if (!isInputServiceSelected()) {
      Log.w(LOG_TAG, "showing input method picker");
      ApplicationUtilities.getInputMethodManager().showInputMethodPicker();
    }

    return null;
  }

  public static boolean placeCursor (int position) {
    InputConnection connection = getInputConnection();

    if (connection != null) {
      if (connection.setSelection(position, position)) {
        return true;
      }
    }

    return false;
  }

  public static boolean insertCharacter (char character) {
    InputConnection connection = getInputConnection();

    if (connection != null) {
      if (connection.commitText(Character.toString(character), 1)) {
        return true;
      }
    }

    return false;
  }

  public static boolean deletePreviousCharacter () {
    InputConnection connection = getInputConnection();

    if (connection != null) {
      if (connection.deleteSurroundingText(1, 0)) {
        return true;
      }
    }

    return false;
  }

  public static boolean deleteNextCharacter () {
    InputConnection connection = getInputConnection();

    if (connection != null) {
      if (connection.deleteSurroundingText(0, 1)) {
        return true;
      }
    }

    return false;
  }

  public static boolean injectKey (int keyCode, boolean longPress) {
    InputConnection connection = getInputConnection();

    if (connection != null) {
      if (connection.sendKeyEvent(new KeyEvent(KeyEvent.ACTION_DOWN, keyCode))) {
        logKeyEventSent(keyCode, true);

        if (longPress) {
          try {
            Thread.sleep(ViewConfiguration.getLongPressTimeout() + ApplicationParameters.LONG_PRESS_DELAY);
          } catch (InterruptedException exception) {
          }
        }

        if (connection.sendKeyEvent(new KeyEvent(KeyEvent.ACTION_UP, keyCode))) {
          logKeyEventSent(keyCode, false);
          return true;
        }
      }
    }

    return false;
  }

  public static boolean injectKey (int keyCode) {
    return injectKey(keyCode, false);
  }
}
