/*
 * BRLTTY - A background process providing access to the console screen (when in
 *          text mode) for a blind person using a refreshable braille display.
 *
 * Copyright (C) 1995-2020 by The BRLTTY Developers.
 *
 * BRLTTY comes with ABSOLUTELY NO WARRANTY.
 *
 * This is free software, placed under the terms of the
 * GNU Lesser General Public License, as published by the Free Software
 * Foundation; either version 2.1 of the License, or (at your option) any
 * later version. Please see the file LICENSE-LGPL for details.
 *
 * Web Page: http://brltty.app/
 *
 * This software is maintained by Dave Mielke <dave@mielke.cc>.
 */

package org.a11y.brltty.android.settings;
import org.a11y.brltty.android.*;

public final class DeviceDescriptor {
  private final String deviceIdentifier;
  private final String brailleDriver;

  public DeviceDescriptor (String identifier, String driver) {
    deviceIdentifier = identifier;
    brailleDriver = driver;
  }

  public final String getIdentifier () {
    return deviceIdentifier;
  }

  public final String getDriver () {
    return brailleDriver;
  }
}