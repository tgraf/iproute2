/*
 * xdp.h        API for XDP back-end
 *
 *              This program is free software; you can redistribute it and/or
 *              modify it under the terms of the GNU General Public License
 *              as published by the Free Software Foundation; either version
 *              2 of the License, or (at your option) any later version.
 *
 * Authors:     Daniel Borkmann <daniel@iogearbox.net>
 */

#ifndef __XDP__
#define __XDP__

#include "utils.h"

int xdp_parse(int *argc, char ***argv, struct iplink_req *req);
void xdp_dump(FILE *fp, struct rtattr *tb);

#endif /* __XDP__ */
