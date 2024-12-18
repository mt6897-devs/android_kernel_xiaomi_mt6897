/* SPDX-License-Identifier: BSD-2-Clause */
/*
 * Copyright (c) 2021 MediaTek Inc.
 */

/*! \file   "version.h"
 *    \brief  Driver's version definition
 *
 */


#ifndef _VERSION_H
#define _VERSION_H
/*******************************************************************************
 *                         C O M P I L E R   F L A G S
 *******************************************************************************
 */

/*******************************************************************************
 *                    E X T E R N A L   R E F E R E N C E S
 *******************************************************************************
 */

/*******************************************************************************
 *                              C O N S T A N T S
 *******************************************************************************
 */

#ifndef NIC_AUTHOR
#define NIC_AUTHOR      "NIC_AUTHOR"
#endif
#ifndef NIC_DESC
#define NIC_DESC        "NIC_DESC"
#endif

#ifndef NIC_NAME
#define NIC_NAME            "MT6632"
#define NIC_DEVICE_ID       "MT6632"
#define NIC_DEVICE_ID_LOW   "mt6632"
#endif

/* NIC driver information */
#define NIC_VENDOR                      "MediaTek Inc."
#define NIC_VENDOR_OUI                  {0x00, 0x0C, 0xE7}

#define NIC_PRODUCT_NAME	"MediaTek Inc. Wireless LAN Adapter"
#define NIC_DRIVER_NAME		"MediaTek Inc. Wireless LAN Adapter Driver"

/* Define our driver version */
#define NIC_DRIVER_MAJOR_VERSION        1
#define NIC_DRIVER_MINOR_VERSION        0
#define NIC_DRIVER_SERIAL_VERSION       1
#define NIC_DRIVER_VERSION              (NIC_DRIVER_MAJOR_VERSION, \
					 NIC_DRIVER_MINOR_VERSION, \
					 NIC_DRIVER_SERIAL_VERSION)
#define NIC_DRIVER_VERSION_STRING       "1.0.1"

/*******************************************************************************
 *                             D A T A   T Y P E S
 *******************************************************************************
 */

/*******************************************************************************
 *                            P U B L I C   D A T A
 *******************************************************************************
 */

/*******************************************************************************
 *                           P R I V A T E   D A T A
 *******************************************************************************
 */

/*******************************************************************************
 *                                 M A C R O S
 *******************************************************************************
 */

/*******************************************************************************
 *                   F U N C T I O N   D E C L A R A T I O N S
 *******************************************************************************
 */

/*******************************************************************************
 *                              F U N C T I O N S
 *******************************************************************************
 */

#endif /* _VERSION_H */
