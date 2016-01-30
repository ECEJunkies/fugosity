/*************************************************************************
 *  TinyFugue - programmable mud client
 *  Copyright (C) 2001-2003, 2004, 2005, 2006-2007 Ken Keys
 *
 *  TinyFugue (aka "tf") is protected under the terms of the GNU
 *  General Public License.  See the file "COPYING" for details.
 ************************************************************************/
/* $Id: tfdefs.h.in,v 35004.8 2007/01/13 23:12:39 kkeys Exp $ */

#define UNAME "Linux #1 SMP Wed Oct 23 16:28:33 CDT 2013 3.10.17"
#define stringify_token(s) #s
#define stringify_value(s) stringify_token(s)
#define DEFAULT_TFLIBD stringify_value(DATADIR) "/tf-lib"
