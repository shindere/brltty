/*
 * BRLTTY - A background process providing access to the console screen (when in
 *          text mode) for a blind person using a refreshable braille display.
 *
 * Copyright (C) 1995-2013 by The BRLTTY Developers.
 *
 * BRLTTY comes with ABSOLUTELY NO WARRANTY.
 *
 * This is free software, placed under the terms of the
 * GNU General Public License, as published by the Free Software
 * Foundation; either version 2 of the License, or (at your option) any
 * later version. Please see the file LICENSE-GPL for details.
 *
 * Web Page: http://mielke.cc/brltty/
 *
 * This software is maintained by Dave Mielke <dave@mielke.cc>.
 */

package org.a11y.brltty.android;

import android.os.Build;
import android.os.Bundle;

import android.view.accessibility.AccessibilityNodeInfo;
import android.graphics.Rect;
import android.view.KeyEvent;

public class RealScreenElement extends ScreenElement {
  private final AccessibilityNodeInfo accessibilityNode;

  @Override
  public Rect getVisualLocation () {
    synchronized (this) {
      if (visualLocation == null) {
        visualLocation = new Rect();
        accessibilityNode.getBoundsInScreen(visualLocation);
      }
    }

    return visualLocation;
  }

  @Override
  public AccessibilityNodeInfo getAccessibilityNode () {
    return AccessibilityNodeInfo.obtain(accessibilityNode);
  }

  @Override
  public boolean isCheckable () {
    return accessibilityNode.isCheckable();
  }

  @Override
  public boolean isChecked () {
    return accessibilityNode.isChecked();
  }

  @Override
  public boolean isEditable () {
    return ReflectionHelper.canAssign(android.widget.EditText.class, accessibilityNode.getClassName().toString());
  }

  @Override
  public boolean performAction (int offset) {
    if (ApplicationUtilities.haveSdkVersion(Build.VERSION_CODES.JELLY_BEAN)) {
      ScreenTextEditor editor = ScreenTextEditor.getIfFocused(accessibilityNode);

      if (editor != null) {
        if (!onBringCursor()) {
          return false;
        }

        if ((offset -= editor.getCursorOffset()) != 0) {
          Bundle bundle = new Bundle();
          int action;

          bundle.putInt(
            AccessibilityNodeInfo.ACTION_ARGUMENT_MOVEMENT_GRANULARITY_INT,
            AccessibilityNodeInfo.MOVEMENT_GRANULARITY_CHARACTER
          );

          if (offset > 0) {
            action = AccessibilityNodeInfo.ACTION_NEXT_AT_MOVEMENT_GRANULARITY;
          } else {
            action = AccessibilityNodeInfo.ACTION_PREVIOUS_AT_MOVEMENT_GRANULARITY;
            offset = -offset;
          }

          while (offset > 0) {
            if (!accessibilityNode.performAction(action, bundle)) {
              return false;
            }

            offset -= 1;
          }
        }

        return true;
      }
    }

    return super.performAction(offset);
  }

  @Override
  protected String makeBrailleText (String text) {
    text = super.makeBrailleText(text);

    if (ScreenTextEditor.getIfFocused(accessibilityNode) != null) {
      text += ' ';
    }

    return text;
  }

  private boolean doAction (int action) {
    boolean done = false;
    AccessibilityNodeInfo node = getAccessibilityNode();
    Rect inner = getVisualLocation();

    while (((node.getActions() & action) == 0) || !node.isEnabled()) {
      AccessibilityNodeInfo parent = node.getParent();
      if (parent == null) break;

      Rect outer = new Rect();
      parent.getBoundsInScreen(outer);

      if (!outer.contains(inner)) {
        parent.recycle();
        parent = null;
        break;
      }

      inner = outer;
      node.recycle();
      node = parent;
    }

    if (node.performAction(action)) done = true;
    node.recycle();
    return done;
  }

  public boolean doKey (int keyCode, boolean longPress) {
    if (doAction(AccessibilityNodeInfo.ACTION_FOCUS)) {
      if (ScreenDriver.inputKey(keyCode)) {
        return true;
      }
    }

    return false;
  }

  @Override
  public boolean onBringCursor () {
    if (ApplicationUtilities.haveSdkVersion(Build.VERSION_CODES.JELLY_BEAN)) {
      {
        AccessibilityNodeInfo focusedNode = accessibilityNode.findFocus(AccessibilityNodeInfo.FOCUS_ACCESSIBILITY);

        if (focusedNode != null) {
          boolean done = focusedNode.equals(accessibilityNode);
          focusedNode.recycle();
          focusedNode = null;
          if (done) return true;
        }
      }

      return doAction(AccessibilityNodeInfo.ACTION_ACCESSIBILITY_FOCUS);
    }

    return super.onBringCursor();
  }

  @Override
  public boolean onClick () {
    if (ApplicationUtilities.haveSdkVersion(Build.VERSION_CODES.ICE_CREAM_SANDWICH)) {
      if (isEditable()) {
        return doAction(AccessibilityNodeInfo.ACTION_FOCUS);
      }
    }

    if (ApplicationUtilities.haveSdkVersion(Build.VERSION_CODES.JELLY_BEAN)) {
      return doAction(AccessibilityNodeInfo.ACTION_CLICK);
    }

    if (ApplicationUtilities.haveSdkVersion(Build.VERSION_CODES.ICE_CREAM_SANDWICH)) {
      return doKey(KeyEvent.KEYCODE_ENTER, false);
    }

    return super.onClick();
  }

  @Override
  public boolean onLongClick () {
    if (ApplicationUtilities.haveSdkVersion(Build.VERSION_CODES.JELLY_BEAN)) {
      return doAction(AccessibilityNodeInfo.ACTION_LONG_CLICK);
    }

    return super.onLongClick();
  }

  @Override
  public boolean onScrollBackward () {
    if (ApplicationUtilities.haveSdkVersion(Build.VERSION_CODES.JELLY_BEAN)) {
      return doAction(AccessibilityNodeInfo.ACTION_SCROLL_BACKWARD);
    }

    return super.onScrollBackward();
  }

  @Override
  public boolean onScrollForward () {
    if (ApplicationUtilities.haveSdkVersion(Build.VERSION_CODES.JELLY_BEAN)) {
      return doAction(AccessibilityNodeInfo.ACTION_SCROLL_FORWARD);
    }

    return super.onScrollForward();
  }

  public RealScreenElement (String text, AccessibilityNodeInfo node) {
    super(text);
    accessibilityNode = AccessibilityNodeInfo.obtain(node);

    if (isEditable()) {
      ScreenTextEditor.get(accessibilityNode, true);
    }
  }
}
