/*
** Copyright (C) 2018-2019 Quadrant Information Security <quadrantsec.com>
** Copyright (C) 2018-2019 Champ Clark III <cclark@quadrantsec.com>
**
** This program is free software; you can redistribute it and/or modify
** it under the terms of the GNU General Public License Version 2 as
** published by the Free Software Foundation.  You may not use, modify or
** distribute this program under any other version of the GNU General
** Public License.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program; if not, write to the Free Software
** Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
*/

#ifdef HAVE_CONFIG_H
#include "config.h"             /* From autoconf */
#endif

#define DEFAULT_CONFIG "/usr/local/etc/meer.yaml"
#define BUFFER_SIZE 10240
#define MEER_LOG	"/var/log/meer.log"

#define NORMAL		0
#define ERROR		1
#define WARN 	        2
#define DEBUG           3

#define	TCP		6
#define	UDP		17
#define ICMP		1

#define SSH_SERVER	0
#define SSH_CLIENT	1

#define MAXIP           64              /* Max IP length */

#define IPv4		4
#define IPv6		6

#define DNS_CACHE_DEFAULT	900
#define PACKET_BUFFER_SIZE_DEFAULT 131072

#define SQL_RECONNECT_TIME 10

#define MAX_SQL_QUERY	10240 + PACKET_BUFFER_SIZE_DEFAULT

#define		EXTRA_ORIGNAL_CLIENT_IPV4		1
#define         EXTRA_ORIGNAL_CLIENT_IPV6               2
#define 	EXTRA_UNUSED				3
#define		EXTRA_GZIP_DECOMPRESSED_DATA		4
#define		EXTRA_SMTP_FILENAME			5
#define		EXTRA_SMTP_MAIL_FROM			6
#define		EXTRA_SMTP_RCPT_TO			7
#define		EXTRA_SMTP_EMAIL_HEADERS		8
#define		EXTRA_HTTP_URI				9
#define		EXTRA_HTTP_HOSTNAME			10
#define		EXTRA_IPV6_SOURCE_ADDRESS		11
#define		EXTRA_IPV6_DESTINATION_ADDRESS		12
#define		EXTRA_NORMALIZED_JAVASCRIPT		13

#define 	DEFAULT_PIPE_SIZE			1048576
