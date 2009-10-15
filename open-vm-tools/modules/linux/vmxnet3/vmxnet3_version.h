/*********************************************************
 * Copyright (C) 2007 VMware, Inc. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation version 2 and no later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA
 *
 *********************************************************/

/*
 * vmxnet3_version.h --
 *
 * Version definitions for the Linux vmxnet3 driver.
 */

#ifndef _VMXNET3_VERSION_H_
#define _VMXNET3_VERSION_H_

#define VMXNET3_DRIVER_VERSION          1.0.4.0
#define VMXNET3_DRIVER_VERSION_COMMAS   1,0,4,0
#define VMXNET3_DRIVER_VERSION_STRING   "1.0.4.0"

/* a 32-bit int, each byte encode a verion number in VMXNET3_DRIVER_VERSION */
#define VMXNET3_DRIVER_VERSION_NUM      0x01000400

#endif /* _VMXNET3_VERSION_H_ */
