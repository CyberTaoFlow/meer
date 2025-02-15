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

#include <stdbool.h>

typedef struct _DnsCache _DnsCache;
struct _DnsCache
{
    char ipaddress[48];
    char reverse[256];
    uint64_t lookup_time;

};

void Drop_Priv(void);
bool Check_Endian(void);
char *Hexify(char *xdata, int length);
void DNS_Lookup( char *host, char *str, size_t size );
bool Validate_JSON_String( char *buf );
bool IP2Bit(char *ipaddr, unsigned char *out);
void Remove_Spaces(char *s);
void Remove_Return(char *s);
uint64_t Epoch_Lookup( void );
bool Is_IPv6 (char *ipaddr);
double CalcPct(uint64_t cnt, uint64_t total);
bool Is_IP (char *ipaddr, int ver );
int File_Check (char *filename);
