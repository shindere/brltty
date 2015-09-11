/*
 * BRLTTY - A background process providing access to the console screen (when in
 *          text mode) for a blind person using a refreshable braille display.
 *
 * Copyright (C) 1995-2015 by The BRLTTY Developers.
 *
 * BRLTTY comes with ABSOLUTELY NO WARRANTY.
 *
 * This is free software, placed under the terms of the
 * GNU General Public License, as published by the Free Software
 * Foundation; either version 2 of the License, or (at your option) any
 * later version. Please see the file LICENSE-GPL for details.
 *
 * Web Page: http://brltty.com/
 *
 * This software is maintained by Dave Mielke <dave@mielke.cc>.
 */

#ifndef BRLTTY_INCLUDED_GET_SOCKETS
#define BRLTTY_INCLUDED_GET_SOCKETS

#include "prologue.h"
#undef GOT_SOCKETS

#if defined(HAVE_SYS_SOCKET_H)
#define GOT_SOCKETS
#include <sys/socket.h>

#elif defined(__MINGW32__)
#define GOT_SOCKETS

typedef int socklen_t;

#ifndef EINPROGRESS
#ifdef WSAEINPROGRESS
#define EINPROGRESS WSAEINPROGRESS
#endif /* WSAEINPROGRESS */
#endif /* EINPROGRESS */

#endif /* have sockets */

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* BRLTTY_INCLUDED_GET_SOCKETS */
