/*

Copyright (C) 2002 Eelco Visser <visser@acm.org>

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
02111-1307, USA.

*/

ATerm SSL_readdir(ATerm t);
// ATerm SSL_stat(ATerm file);
ATerm SSL_modification_time(ATerm file);
ATerm SSL_getenv(ATerm t);
ATerm SSL_setenv(ATerm name, ATerm value, ATerm overwrite);

