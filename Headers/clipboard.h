/*
 * BRLTTY - A background process providing access to the console screen (when in
 *          text mode) for a blind person using a refreshable braille display.
 *
 * Copyright (C) 1995-2019 by The BRLTTY Developers.
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

#ifndef BRLTTY_INCLUDED_CLIPBOARD
#define BRLTTY_INCLUDED_CLIPBOARD

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

typedef struct ClipboardObjectStruct ClipboardObject;

extern ClipboardObject *newClipboard (void);
extern void destroyClipboard (ClipboardObject *cpb);

extern int setClipboardContent (ClipboardObject *cpb, const wchar_t *characters, size_t length);
extern int appendClipboardContent (ClipboardObject *cpb, const wchar_t *characters, size_t length);
extern void truncateClipboardContent (ClipboardObject *cpb, size_t length);
extern void clearClipboardContent (ClipboardObject *cpb);

extern const wchar_t *getClipboardContent (ClipboardObject *cpb, size_t *length);
extern size_t getClipboardContentLength (ClipboardObject *cpb);

extern int addClipboardHistory (ClipboardObject *cpb, const wchar_t *characters, size_t length);
extern const wchar_t *getClipboardHistory (ClipboardObject *cpb, unsigned int index, size_t *length);

extern ClipboardObject *getMainClipboard (void);
extern void lockMainClipboard (void);
extern void unlockMainClipboard (void);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* BRLTTY_INCLUDED_CLIPBOARD */