/* SPDX-License-Identifier: BSD-2-Clause */
/*
 * Copyright (c) 2021 MediaTek Inc.
 */

//[File]            : wf_umib_top.h
//[Revision time]   : Thu Nov 11 16:11:55 2021
//[Description]     : This file is auto generated by CODA
//[Copyright]       : Copyright (C) 2021 Mediatek Incorportion. All rights reserved.

#ifndef __WF_UMIB_TOP_REGS_H__
#define __WF_UMIB_TOP_REGS_H__

#include "hal_common.h"

#ifdef __cplusplus
extern "C" {
#endif


//****************************************************************************
//
//                     WF_UMIB_TOP CR Definitions                     
//
//****************************************************************************

#define WF_UMIB_TOP_BASE                                       0x820cd000

#define WF_UMIB_TOP_MCR_ADDR                                   (WF_UMIB_TOP_BASE + 0x01C) // D01C
#define WF_UMIB_TOP_MMCR_ADDR                                  (WF_UMIB_TOP_BASE + 0x0F0) // D0F0
#define WF_UMIB_TOP_MVCR_ADDR                                  (WF_UMIB_TOP_BASE + 0x3FC) // D3FC
#define WF_UMIB_TOP_ANCR_ADDR                                  (WF_UMIB_TOP_BASE + 0x400) // D400
#define WF_UMIB_TOP_B0BROCR_ADDR                               (WF_UMIB_TOP_BASE + 0x480) // D480
#define WF_UMIB_TOP_B0BRBCR_ADDR                               (WF_UMIB_TOP_BASE + 0x4D0) // D4D0
#define WF_UMIB_TOP_B0BRDCR_ADDR                               (WF_UMIB_TOP_BASE + 0x520) // D520
#define WF_UMIB_TOP_B0BARMCR_ADDR                              (WF_UMIB_TOP_BASE + 0x530) // D530
#define WF_UMIB_TOP_B0BRPDCR_ADDR                              (WF_UMIB_TOP_BASE + 0x570) // D570
#define WF_UMIB_TOP_B0ARCR_ADDR                                (WF_UMIB_TOP_BASE + 0x580) // D580
#define WF_UMIB_TOP_B0RPDCR_ADDR                               (WF_UMIB_TOP_BASE + 0x590) // D590
#define WF_UMIB_TOP_B0BRIPCR0_ADDR                             (WF_UMIB_TOP_BASE + 0x594) // D594
#define WF_UMIB_TOP_B0BRIPCR1_ADDR                             (WF_UMIB_TOP_BASE + 0x5A4) // D5A4
#define WF_UMIB_TOP_B0BRIPCR2_ADDR                             (WF_UMIB_TOP_BASE + 0x5B4) // D5B4
#define WF_UMIB_TOP_B0BRIPCR3_ADDR                             (WF_UMIB_TOP_BASE + 0x5C4) // D5C4
#define WF_UMIB_TOP_B0BRIPCR4_ADDR                             (WF_UMIB_TOP_BASE + 0x5D4) // D5D4
#define WF_UMIB_TOP_B1BROCR_ADDR                               (WF_UMIB_TOP_BASE + 0x5E4) // D5E4
#define WF_UMIB_TOP_B1BRBCR_ADDR                               (WF_UMIB_TOP_BASE + 0x634) // D634
#define WF_UMIB_TOP_B1BRDCR_ADDR                               (WF_UMIB_TOP_BASE + 0x684) // D684
#define WF_UMIB_TOP_B1BARMCR_ADDR                              (WF_UMIB_TOP_BASE + 0x694) // D694
#define WF_UMIB_TOP_B1BRPDCR_ADDR                              (WF_UMIB_TOP_BASE + 0x6D4) // D6D4
#define WF_UMIB_TOP_B1ARCR_ADDR                                (WF_UMIB_TOP_BASE + 0x6E4) // D6E4
#define WF_UMIB_TOP_B1RPDCR_ADDR                               (WF_UMIB_TOP_BASE + 0x6F4) // D6F4
#define WF_UMIB_TOP_B1BRIPCR0_ADDR                             (WF_UMIB_TOP_BASE + 0x6F8) // D6F8
#define WF_UMIB_TOP_B1BRIPCR1_ADDR                             (WF_UMIB_TOP_BASE + 0x708) // D708
#define WF_UMIB_TOP_B1BRIPCR2_ADDR                             (WF_UMIB_TOP_BASE + 0x718) // D718
#define WF_UMIB_TOP_B1BRIPCR3_ADDR                             (WF_UMIB_TOP_BASE + 0x728) // D728
#define WF_UMIB_TOP_B1BRIPCR4_ADDR                             (WF_UMIB_TOP_BASE + 0x738) // D738
#define WF_UMIB_TOP_B2BROCR_ADDR                               (WF_UMIB_TOP_BASE + 0x748) // D748
#define WF_UMIB_TOP_B2BRBCR_ADDR                               (WF_UMIB_TOP_BASE + 0x798) // D798
#define WF_UMIB_TOP_B2BRDCR_ADDR                               (WF_UMIB_TOP_BASE + 0x7E8) // D7E8
#define WF_UMIB_TOP_B2BARMCR_ADDR                              (WF_UMIB_TOP_BASE + 0x7F8) // D7F8
#define WF_UMIB_TOP_B2BRPDCR_ADDR                              (WF_UMIB_TOP_BASE + 0x838) // D838
#define WF_UMIB_TOP_B2ARCR_ADDR                                (WF_UMIB_TOP_BASE + 0x848) // D848
#define WF_UMIB_TOP_B2RPDCR_ADDR                               (WF_UMIB_TOP_BASE + 0x858) // D858
#define WF_UMIB_TOP_B2BRIPCR0_ADDR                             (WF_UMIB_TOP_BASE + 0x85C) // D85C
#define WF_UMIB_TOP_B2BRIPCR1_ADDR                             (WF_UMIB_TOP_BASE + 0x86C) // D86C
#define WF_UMIB_TOP_B2BRIPCR2_ADDR                             (WF_UMIB_TOP_BASE + 0x87C) // D87C
#define WF_UMIB_TOP_B2BRIPCR3_ADDR                             (WF_UMIB_TOP_BASE + 0x88C) // D88C
#define WF_UMIB_TOP_B2BRIPCR4_ADDR                             (WF_UMIB_TOP_BASE + 0x89C) // D89C




/* =====================================================================================

  ---MCR (0x820cd000 + 0x01C)---

    MBSS_2_BSS0[0]               - (RW) recognize MBSS(bssid = 0x11-0x1F) as BSS0(bssid0) and sums its counter to BSS0 (BSS-only counters get affected)
                                     *If This counters have MBSS part, this function is not applied
    RESERVED1[31..1]             - (RO) Reserved bits

 =====================================================================================*/
#define WF_UMIB_TOP_MCR_MBSS_2_BSS0_ADDR                       WF_UMIB_TOP_MCR_ADDR
#define WF_UMIB_TOP_MCR_MBSS_2_BSS0_MASK                       0x00000001                // MBSS_2_BSS0[0]
#define WF_UMIB_TOP_MCR_MBSS_2_BSS0_SHFT                       0

/* =====================================================================================

  ---MMCR (0x820cd000 + 0x0F0)---

    RESET[0]                     - (WC) Reset all counter in memory, MIB clears this bit when it is finished
    RESERVED1[30..1]             - (RO) Reserved bits
    MODE[31]                     - (RW) Control the read clear function for memory based MIB counter (starting from offset 0x400)

 =====================================================================================*/
#define WF_UMIB_TOP_MMCR_MODE_ADDR                             WF_UMIB_TOP_MMCR_ADDR
#define WF_UMIB_TOP_MMCR_MODE_MASK                             0x80000000                // MODE[31]
#define WF_UMIB_TOP_MMCR_MODE_SHFT                             31
#define WF_UMIB_TOP_MMCR_RESET_ADDR                            WF_UMIB_TOP_MMCR_ADDR
#define WF_UMIB_TOP_MMCR_RESET_MASK                            0x00000001                // RESET[0]
#define WF_UMIB_TOP_MMCR_RESET_SHFT                            0

/* =====================================================================================

  ---MVCR (0x820cd000 + 0x3FC)---

    VERSION_CODE[31..0]          - (RO) YYYYMMDD

 =====================================================================================*/
#define WF_UMIB_TOP_MVCR_VERSION_CODE_ADDR                     WF_UMIB_TOP_MVCR_ADDR
#define WF_UMIB_TOP_MVCR_VERSION_CODE_MASK                     0xFFFFFFFF                // VERSION_CODE[31..0]
#define WF_UMIB_TOP_MVCR_VERSION_CODE_SHFT                     0

/* =====================================================================================

  ---ANCR (0x820cd000 + 0x400)---

    AMSDU_COUNTn[31..0]          - (RW) This counter is increased when an A-MSDU is transmitted with MSDU # = n
                                     (unit : MPDU)

 =====================================================================================*/
#define WF_UMIB_TOP_ANCR_AMSDU_COUNTn_ADDR                     WF_UMIB_TOP_ANCR_ADDR
#define WF_UMIB_TOP_ANCR_AMSDU_COUNTn_MASK                     0xFFFFFFFF                // AMSDU_COUNTn[31..0]
#define WF_UMIB_TOP_ANCR_AMSDU_COUNTn_SHFT                     0

/* =====================================================================================

  ---B0BROCR (0x820cd000 + 0x480)---

    RX_OK_COUNTn[31..0]          - (RW) This counter is increased when a MPDU is received (FCS pass+RX filter pass+security pass).
                                     Total set = # of BSSID+MBSSID
                                     (unit : MPDU)

 =====================================================================================*/
#define WF_UMIB_TOP_B0BROCR_RX_OK_COUNTn_ADDR                  WF_UMIB_TOP_B0BROCR_ADDR
#define WF_UMIB_TOP_B0BROCR_RX_OK_COUNTn_MASK                  0xFFFFFFFF                // RX_OK_COUNTn[31..0]
#define WF_UMIB_TOP_B0BROCR_RX_OK_COUNTn_SHFT                  0

/* =====================================================================================

  ---B0BRBCR (0x820cd000 + 0x4D0)---

    RX_BYTE_COUNTn[31..0]        - (RW) This counter is increased when a MPDU is received (payload) (FCS pass+RX filter pass+security pass).
                                     Total set = # of BSSID+MBSSID
                                     (unit : byte)

 =====================================================================================*/
#define WF_UMIB_TOP_B0BRBCR_RX_BYTE_COUNTn_ADDR                WF_UMIB_TOP_B0BRBCR_ADDR
#define WF_UMIB_TOP_B0BRBCR_RX_BYTE_COUNTn_MASK                0xFFFFFFFF                // RX_BYTE_COUNTn[31..0]
#define WF_UMIB_TOP_B0BRBCR_RX_BYTE_COUNTn_SHFT                0

/* =====================================================================================

  ---B0BRDCR (0x820cd000 + 0x520)---

    RX_DATA_COUNTn[31..0]        - (RW) This counter is increased when a MPDU is received (not including MMPDU/NULL frame).
                                     Total set = # of BSSID
                                     (unit : MPDU)

 =====================================================================================*/
#define WF_UMIB_TOP_B0BRDCR_RX_DATA_COUNTn_ADDR                WF_UMIB_TOP_B0BRDCR_ADDR
#define WF_UMIB_TOP_B0BRDCR_RX_DATA_COUNTn_MASK                0xFFFFFFFF                // RX_DATA_COUNTn[31..0]
#define WF_UMIB_TOP_B0BRDCR_RX_DATA_COUNTn_SHFT                0

/* =====================================================================================

  ---B0BARMCR (0x820cd000 + 0x530)---

    RX_MSDU_COUNTn[31..0]        - (RW) This counter is increased when a MSDU is received
                                     Total set = # of BSSID * # of AC
                                     n = [bss][ac]
                                     (unit : MSDU)

 =====================================================================================*/
#define WF_UMIB_TOP_B0BARMCR_RX_MSDU_COUNTn_ADDR               WF_UMIB_TOP_B0BARMCR_ADDR
#define WF_UMIB_TOP_B0BARMCR_RX_MSDU_COUNTn_MASK               0xFFFFFFFF                // RX_MSDU_COUNTn[31..0]
#define WF_UMIB_TOP_B0BARMCR_RX_MSDU_COUNTn_SHFT               0

/* =====================================================================================

  ---B0BRPDCR (0x820cd000 + 0x570)---

    PF_DROP_COUNTn[31..0]        - (RW) This counter is increased when a packet was dropped by pattern filter condition.
                                     Total set = # of BSSID
                                     (unit : MSDU)

 =====================================================================================*/
#define WF_UMIB_TOP_B0BRPDCR_PF_DROP_COUNTn_ADDR               WF_UMIB_TOP_B0BRPDCR_ADDR
#define WF_UMIB_TOP_B0BRPDCR_PF_DROP_COUNTn_MASK               0xFFFFFFFF                // PF_DROP_COUNTn[31..0]
#define WF_UMIB_TOP_B0BRPDCR_PF_DROP_COUNTn_SHFT               0

/* =====================================================================================

  ---B0ARCR (0x820cd000 + 0x580)---

    RX_COUNT_ACn[31..0]          - (RW) This counter is increased when a MPDU is received (FCS pass+RX filter pass+security pass).
                                     Total set = # of AC
                                     (unit : MPDU)

 =====================================================================================*/
#define WF_UMIB_TOP_B0ARCR_RX_COUNT_ACn_ADDR                   WF_UMIB_TOP_B0ARCR_ADDR
#define WF_UMIB_TOP_B0ARCR_RX_COUNT_ACn_MASK                   0xFFFFFFFF                // RX_COUNT_ACn[31..0]
#define WF_UMIB_TOP_B0ARCR_RX_COUNT_ACn_SHFT                   0

/* =====================================================================================

  ---B0RPDCR (0x820cd000 + 0x590)---

    PF_DROP_COUNT[31..0]         - (RW) This counter is increased when a packet was dropped by pattern filter condition.
                                     (unit : MSDU)

 =====================================================================================*/
#define WF_UMIB_TOP_B0RPDCR_PF_DROP_COUNT_ADDR                 WF_UMIB_TOP_B0RPDCR_ADDR
#define WF_UMIB_TOP_B0RPDCR_PF_DROP_COUNT_MASK                 0xFFFFFFFF                // PF_DROP_COUNT[31..0]
#define WF_UMIB_TOP_B0RPDCR_PF_DROP_COUNT_SHFT                 0

/* =====================================================================================

  ---B0BRIPCR0 (0x820cd000 + 0x594)---

    RX_IPV4_COUNTn[31..0]        - (RW) This counter is increased when a MSDU is received with IPv4 header
                                     (unit : MSDU)

 =====================================================================================*/
#define WF_UMIB_TOP_B0BRIPCR0_RX_IPV4_COUNTn_ADDR              WF_UMIB_TOP_B0BRIPCR0_ADDR
#define WF_UMIB_TOP_B0BRIPCR0_RX_IPV4_COUNTn_MASK              0xFFFFFFFF                // RX_IPV4_COUNTn[31..0]
#define WF_UMIB_TOP_B0BRIPCR0_RX_IPV4_COUNTn_SHFT              0

/* =====================================================================================

  ---B0BRIPCR1 (0x820cd000 + 0x5A4)---

    RX_IPV4_DROP_COUNTn[31..0]   - (RW) This counter is increased when a MSDU is received with IPv4 header and is dropped by PF
                                     (unit : MSDU)

 =====================================================================================*/
#define WF_UMIB_TOP_B0BRIPCR1_RX_IPV4_DROP_COUNTn_ADDR         WF_UMIB_TOP_B0BRIPCR1_ADDR
#define WF_UMIB_TOP_B0BRIPCR1_RX_IPV4_DROP_COUNTn_MASK         0xFFFFFFFF                // RX_IPV4_DROP_COUNTn[31..0]
#define WF_UMIB_TOP_B0BRIPCR1_RX_IPV4_DROP_COUNTn_SHFT         0

/* =====================================================================================

  ---B0BRIPCR2 (0x820cd000 + 0x5B4)---

    RX_ICMP4_COUNTn[31..0]       - (RW) This counter is increased when a MSDU is received with ICMPv4 header
                                     (unit : MSDU)

 =====================================================================================*/
#define WF_UMIB_TOP_B0BRIPCR2_RX_ICMP4_COUNTn_ADDR             WF_UMIB_TOP_B0BRIPCR2_ADDR
#define WF_UMIB_TOP_B0BRIPCR2_RX_ICMP4_COUNTn_MASK             0xFFFFFFFF                // RX_ICMP4_COUNTn[31..0]
#define WF_UMIB_TOP_B0BRIPCR2_RX_ICMP4_COUNTn_SHFT             0

/* =====================================================================================

  ---B0BRIPCR3 (0x820cd000 + 0x5C4)---

    RX_IPV6_COUNTn[31..0]        - (RW) This counter is increased when a MSDU is received with IPv6 header
                                     (unit : MSDU)

 =====================================================================================*/
#define WF_UMIB_TOP_B0BRIPCR3_RX_IPV6_COUNTn_ADDR              WF_UMIB_TOP_B0BRIPCR3_ADDR
#define WF_UMIB_TOP_B0BRIPCR3_RX_IPV6_COUNTn_MASK              0xFFFFFFFF                // RX_IPV6_COUNTn[31..0]
#define WF_UMIB_TOP_B0BRIPCR3_RX_IPV6_COUNTn_SHFT              0

/* =====================================================================================

  ---B0BRIPCR4 (0x820cd000 + 0x5D4)---

    RX_IPV6_DROP_COUNTn[31..0]   - (RW) This counter is increased when a MSDU is received with IPv6 header and is dropped by PF
                                     (unit : MSDU)

 =====================================================================================*/
#define WF_UMIB_TOP_B0BRIPCR4_RX_IPV6_DROP_COUNTn_ADDR         WF_UMIB_TOP_B0BRIPCR4_ADDR
#define WF_UMIB_TOP_B0BRIPCR4_RX_IPV6_DROP_COUNTn_MASK         0xFFFFFFFF                // RX_IPV6_DROP_COUNTn[31..0]
#define WF_UMIB_TOP_B0BRIPCR4_RX_IPV6_DROP_COUNTn_SHFT         0

/* =====================================================================================

  ---B1BROCR (0x820cd000 + 0x5E4)---

    RX_OK_COUNTn[31..0]          - (RW) This counter is increased when a MPDU is received (FCS pass+RX filter pass+security pass).
                                     Total set = # of BSSID+MBSSID
                                     (unit : MPDU)

 =====================================================================================*/
#define WF_UMIB_TOP_B1BROCR_RX_OK_COUNTn_ADDR                  WF_UMIB_TOP_B1BROCR_ADDR
#define WF_UMIB_TOP_B1BROCR_RX_OK_COUNTn_MASK                  0xFFFFFFFF                // RX_OK_COUNTn[31..0]
#define WF_UMIB_TOP_B1BROCR_RX_OK_COUNTn_SHFT                  0

/* =====================================================================================

  ---B1BRBCR (0x820cd000 + 0x634)---

    RX_BYTE_COUNTn[31..0]        - (RW) This counter is increased when a MPDU is received (payload) (FCS pass+RX filter pass+security pass).
                                     Total set = # of BSSID+MBSSID
                                     (unit : byte)

 =====================================================================================*/
#define WF_UMIB_TOP_B1BRBCR_RX_BYTE_COUNTn_ADDR                WF_UMIB_TOP_B1BRBCR_ADDR
#define WF_UMIB_TOP_B1BRBCR_RX_BYTE_COUNTn_MASK                0xFFFFFFFF                // RX_BYTE_COUNTn[31..0]
#define WF_UMIB_TOP_B1BRBCR_RX_BYTE_COUNTn_SHFT                0

/* =====================================================================================

  ---B1BRDCR (0x820cd000 + 0x684)---

    RX_DATA_COUNTn[31..0]        - (RW) This counter is increased when a MPDU is received (not including MMPDU/NULL frame).
                                     Total set = # of BSSID
                                     (unit : MPDU)

 =====================================================================================*/
#define WF_UMIB_TOP_B1BRDCR_RX_DATA_COUNTn_ADDR                WF_UMIB_TOP_B1BRDCR_ADDR
#define WF_UMIB_TOP_B1BRDCR_RX_DATA_COUNTn_MASK                0xFFFFFFFF                // RX_DATA_COUNTn[31..0]
#define WF_UMIB_TOP_B1BRDCR_RX_DATA_COUNTn_SHFT                0

/* =====================================================================================

  ---B1BARMCR (0x820cd000 + 0x694)---

    RX_MSDU_COUNTn[31..0]        - (RW) This counter is increased when a MSDU is received
                                     Total set = # of BSSID * # of AC
                                     n = [bss][ac]
                                     (unit : MSDU)

 =====================================================================================*/
#define WF_UMIB_TOP_B1BARMCR_RX_MSDU_COUNTn_ADDR               WF_UMIB_TOP_B1BARMCR_ADDR
#define WF_UMIB_TOP_B1BARMCR_RX_MSDU_COUNTn_MASK               0xFFFFFFFF                // RX_MSDU_COUNTn[31..0]
#define WF_UMIB_TOP_B1BARMCR_RX_MSDU_COUNTn_SHFT               0

/* =====================================================================================

  ---B1BRPDCR (0x820cd000 + 0x6D4)---

    PF_DROP_COUNTn[31..0]        - (RW) This counter is increased when a packet was dropped by pattern filter condition.
                                     Total set = # of BSSID
                                     (unit : MSDU)

 =====================================================================================*/
#define WF_UMIB_TOP_B1BRPDCR_PF_DROP_COUNTn_ADDR               WF_UMIB_TOP_B1BRPDCR_ADDR
#define WF_UMIB_TOP_B1BRPDCR_PF_DROP_COUNTn_MASK               0xFFFFFFFF                // PF_DROP_COUNTn[31..0]
#define WF_UMIB_TOP_B1BRPDCR_PF_DROP_COUNTn_SHFT               0

/* =====================================================================================

  ---B1ARCR (0x820cd000 + 0x6E4)---

    RX_COUNT_ACn[31..0]          - (RW) This counter is increased when a MPDU is received (FCS pass+RX filter pass+security pass).
                                     Total set = # of AC
                                     (unit : MPDU)

 =====================================================================================*/
#define WF_UMIB_TOP_B1ARCR_RX_COUNT_ACn_ADDR                   WF_UMIB_TOP_B1ARCR_ADDR
#define WF_UMIB_TOP_B1ARCR_RX_COUNT_ACn_MASK                   0xFFFFFFFF                // RX_COUNT_ACn[31..0]
#define WF_UMIB_TOP_B1ARCR_RX_COUNT_ACn_SHFT                   0

/* =====================================================================================

  ---B1RPDCR (0x820cd000 + 0x6F4)---

    PF_DROP_COUNT[31..0]         - (RW) This counter is increased when a packet was dropped by pattern filter condition.
                                     (unit : MSDU)

 =====================================================================================*/
#define WF_UMIB_TOP_B1RPDCR_PF_DROP_COUNT_ADDR                 WF_UMIB_TOP_B1RPDCR_ADDR
#define WF_UMIB_TOP_B1RPDCR_PF_DROP_COUNT_MASK                 0xFFFFFFFF                // PF_DROP_COUNT[31..0]
#define WF_UMIB_TOP_B1RPDCR_PF_DROP_COUNT_SHFT                 0

/* =====================================================================================

  ---B1BRIPCR0 (0x820cd000 + 0x6F8)---

    RX_IPV4_COUNTn[31..0]        - (RW) This counter is increased when a MSDU is received with IPv4 header
                                     (unit : MSDU)

 =====================================================================================*/
#define WF_UMIB_TOP_B1BRIPCR0_RX_IPV4_COUNTn_ADDR              WF_UMIB_TOP_B1BRIPCR0_ADDR
#define WF_UMIB_TOP_B1BRIPCR0_RX_IPV4_COUNTn_MASK              0xFFFFFFFF                // RX_IPV4_COUNTn[31..0]
#define WF_UMIB_TOP_B1BRIPCR0_RX_IPV4_COUNTn_SHFT              0

/* =====================================================================================

  ---B1BRIPCR1 (0x820cd000 + 0x708)---

    RX_IPV4_DROP_COUNTn[31..0]   - (RW) This counter is increased when a MSDU is received with IPv4 header and is dropped by PF
                                     (unit : MSDU)

 =====================================================================================*/
#define WF_UMIB_TOP_B1BRIPCR1_RX_IPV4_DROP_COUNTn_ADDR         WF_UMIB_TOP_B1BRIPCR1_ADDR
#define WF_UMIB_TOP_B1BRIPCR1_RX_IPV4_DROP_COUNTn_MASK         0xFFFFFFFF                // RX_IPV4_DROP_COUNTn[31..0]
#define WF_UMIB_TOP_B1BRIPCR1_RX_IPV4_DROP_COUNTn_SHFT         0

/* =====================================================================================

  ---B1BRIPCR2 (0x820cd000 + 0x718)---

    RX_ICMP4_COUNTn[31..0]       - (RW) This counter is increased when a MSDU is received with ICMPv4 header
                                     (unit : MSDU)

 =====================================================================================*/
#define WF_UMIB_TOP_B1BRIPCR2_RX_ICMP4_COUNTn_ADDR             WF_UMIB_TOP_B1BRIPCR2_ADDR
#define WF_UMIB_TOP_B1BRIPCR2_RX_ICMP4_COUNTn_MASK             0xFFFFFFFF                // RX_ICMP4_COUNTn[31..0]
#define WF_UMIB_TOP_B1BRIPCR2_RX_ICMP4_COUNTn_SHFT             0

/* =====================================================================================

  ---B1BRIPCR3 (0x820cd000 + 0x728)---

    RX_IPV6_COUNTn[31..0]        - (RW) This counter is increased when a MSDU is received with IPv6 header
                                     (unit : MSDU)

 =====================================================================================*/
#define WF_UMIB_TOP_B1BRIPCR3_RX_IPV6_COUNTn_ADDR              WF_UMIB_TOP_B1BRIPCR3_ADDR
#define WF_UMIB_TOP_B1BRIPCR3_RX_IPV6_COUNTn_MASK              0xFFFFFFFF                // RX_IPV6_COUNTn[31..0]
#define WF_UMIB_TOP_B1BRIPCR3_RX_IPV6_COUNTn_SHFT              0

/* =====================================================================================

  ---B1BRIPCR4 (0x820cd000 + 0x738)---

    RX_IPV6_DROP_COUNTn[31..0]   - (RW) This counter is increased when a MSDU is received with IPv6 header and is dropped by PF
                                     (unit : MSDU)

 =====================================================================================*/
#define WF_UMIB_TOP_B1BRIPCR4_RX_IPV6_DROP_COUNTn_ADDR         WF_UMIB_TOP_B1BRIPCR4_ADDR
#define WF_UMIB_TOP_B1BRIPCR4_RX_IPV6_DROP_COUNTn_MASK         0xFFFFFFFF                // RX_IPV6_DROP_COUNTn[31..0]
#define WF_UMIB_TOP_B1BRIPCR4_RX_IPV6_DROP_COUNTn_SHFT         0

/* =====================================================================================

  ---B2BROCR (0x820cd000 + 0x748)---

    RX_OK_COUNTn[31..0]          - (RW) This counter is increased when a MPDU is received (FCS pass+RX filter pass+security pass).
                                     Total set = # of BSSID+MBSSID
                                     (unit : MPDU)

 =====================================================================================*/
#define WF_UMIB_TOP_B2BROCR_RX_OK_COUNTn_ADDR                  WF_UMIB_TOP_B2BROCR_ADDR
#define WF_UMIB_TOP_B2BROCR_RX_OK_COUNTn_MASK                  0xFFFFFFFF                // RX_OK_COUNTn[31..0]
#define WF_UMIB_TOP_B2BROCR_RX_OK_COUNTn_SHFT                  0

/* =====================================================================================

  ---B2BRBCR (0x820cd000 + 0x798)---

    RX_BYTE_COUNTn[31..0]        - (RW) This counter is increased when a MPDU is received (payload) (FCS pass+RX filter pass+security pass).
                                     Total set = # of BSSID+MBSSID
                                     (unit : byte)

 =====================================================================================*/
#define WF_UMIB_TOP_B2BRBCR_RX_BYTE_COUNTn_ADDR                WF_UMIB_TOP_B2BRBCR_ADDR
#define WF_UMIB_TOP_B2BRBCR_RX_BYTE_COUNTn_MASK                0xFFFFFFFF                // RX_BYTE_COUNTn[31..0]
#define WF_UMIB_TOP_B2BRBCR_RX_BYTE_COUNTn_SHFT                0

/* =====================================================================================

  ---B2BRDCR (0x820cd000 + 0x7E8)---

    RX_DATA_COUNTn[31..0]        - (RW) This counter is increased when a MPDU is received (not including MMPDU/NULL frame).
                                     Total set = # of BSSID
                                     (unit : MPDU)

 =====================================================================================*/
#define WF_UMIB_TOP_B2BRDCR_RX_DATA_COUNTn_ADDR                WF_UMIB_TOP_B2BRDCR_ADDR
#define WF_UMIB_TOP_B2BRDCR_RX_DATA_COUNTn_MASK                0xFFFFFFFF                // RX_DATA_COUNTn[31..0]
#define WF_UMIB_TOP_B2BRDCR_RX_DATA_COUNTn_SHFT                0

/* =====================================================================================

  ---B2BARMCR (0x820cd000 + 0x7F8)---

    RX_MSDU_COUNTn[31..0]        - (RW) This counter is increased when a MSDU is received
                                     Total set = # of BSSID * # of AC
                                     n = [bss][ac]
                                     (unit : MSDU)

 =====================================================================================*/
#define WF_UMIB_TOP_B2BARMCR_RX_MSDU_COUNTn_ADDR               WF_UMIB_TOP_B2BARMCR_ADDR
#define WF_UMIB_TOP_B2BARMCR_RX_MSDU_COUNTn_MASK               0xFFFFFFFF                // RX_MSDU_COUNTn[31..0]
#define WF_UMIB_TOP_B2BARMCR_RX_MSDU_COUNTn_SHFT               0

/* =====================================================================================

  ---B2BRPDCR (0x820cd000 + 0x838)---

    PF_DROP_COUNTn[31..0]        - (RW) This counter is increased when a packet was dropped by pattern filter condition.
                                     Total set = # of BSSID
                                     (unit : MSDU)

 =====================================================================================*/
#define WF_UMIB_TOP_B2BRPDCR_PF_DROP_COUNTn_ADDR               WF_UMIB_TOP_B2BRPDCR_ADDR
#define WF_UMIB_TOP_B2BRPDCR_PF_DROP_COUNTn_MASK               0xFFFFFFFF                // PF_DROP_COUNTn[31..0]
#define WF_UMIB_TOP_B2BRPDCR_PF_DROP_COUNTn_SHFT               0

/* =====================================================================================

  ---B2ARCR (0x820cd000 + 0x848)---

    RX_COUNT_ACn[31..0]          - (RW) This counter is increased when a MPDU is received (FCS pass+RX filter pass+security pass).
                                     Total set = # of AC
                                     (unit : MPDU)

 =====================================================================================*/
#define WF_UMIB_TOP_B2ARCR_RX_COUNT_ACn_ADDR                   WF_UMIB_TOP_B2ARCR_ADDR
#define WF_UMIB_TOP_B2ARCR_RX_COUNT_ACn_MASK                   0xFFFFFFFF                // RX_COUNT_ACn[31..0]
#define WF_UMIB_TOP_B2ARCR_RX_COUNT_ACn_SHFT                   0

/* =====================================================================================

  ---B2RPDCR (0x820cd000 + 0x858)---

    PF_DROP_COUNT[31..0]         - (RW) This counter is increased when a packet was dropped by pattern filter condition.
                                     (unit : MSDU)

 =====================================================================================*/
#define WF_UMIB_TOP_B2RPDCR_PF_DROP_COUNT_ADDR                 WF_UMIB_TOP_B2RPDCR_ADDR
#define WF_UMIB_TOP_B2RPDCR_PF_DROP_COUNT_MASK                 0xFFFFFFFF                // PF_DROP_COUNT[31..0]
#define WF_UMIB_TOP_B2RPDCR_PF_DROP_COUNT_SHFT                 0

/* =====================================================================================

  ---B2BRIPCR0 (0x820cd000 + 0x85C)---

    RX_IPV4_COUNTn[31..0]        - (RW) This counter is increased when a MSDU is received with IPv4 header
                                     (unit : MSDU)

 =====================================================================================*/
#define WF_UMIB_TOP_B2BRIPCR0_RX_IPV4_COUNTn_ADDR              WF_UMIB_TOP_B2BRIPCR0_ADDR
#define WF_UMIB_TOP_B2BRIPCR0_RX_IPV4_COUNTn_MASK              0xFFFFFFFF                // RX_IPV4_COUNTn[31..0]
#define WF_UMIB_TOP_B2BRIPCR0_RX_IPV4_COUNTn_SHFT              0

/* =====================================================================================

  ---B2BRIPCR1 (0x820cd000 + 0x86C)---

    RX_IPV4_DROP_COUNTn[31..0]   - (RW) This counter is increased when a MSDU is received with IPv4 header and is dropped by PF
                                     (unit : MSDU)

 =====================================================================================*/
#define WF_UMIB_TOP_B2BRIPCR1_RX_IPV4_DROP_COUNTn_ADDR         WF_UMIB_TOP_B2BRIPCR1_ADDR
#define WF_UMIB_TOP_B2BRIPCR1_RX_IPV4_DROP_COUNTn_MASK         0xFFFFFFFF                // RX_IPV4_DROP_COUNTn[31..0]
#define WF_UMIB_TOP_B2BRIPCR1_RX_IPV4_DROP_COUNTn_SHFT         0

/* =====================================================================================

  ---B2BRIPCR2 (0x820cd000 + 0x87C)---

    RX_ICMP4_COUNTn[31..0]       - (RW) This counter is increased when a MSDU is received with ICMPv4 header
                                     (unit : MSDU)

 =====================================================================================*/
#define WF_UMIB_TOP_B2BRIPCR2_RX_ICMP4_COUNTn_ADDR             WF_UMIB_TOP_B2BRIPCR2_ADDR
#define WF_UMIB_TOP_B2BRIPCR2_RX_ICMP4_COUNTn_MASK             0xFFFFFFFF                // RX_ICMP4_COUNTn[31..0]
#define WF_UMIB_TOP_B2BRIPCR2_RX_ICMP4_COUNTn_SHFT             0

/* =====================================================================================

  ---B2BRIPCR3 (0x820cd000 + 0x88C)---

    RX_IPV6_COUNTn[31..0]        - (RW) This counter is increased when a MSDU is received with IPv6 header
                                     (unit : MSDU)

 =====================================================================================*/
#define WF_UMIB_TOP_B2BRIPCR3_RX_IPV6_COUNTn_ADDR              WF_UMIB_TOP_B2BRIPCR3_ADDR
#define WF_UMIB_TOP_B2BRIPCR3_RX_IPV6_COUNTn_MASK              0xFFFFFFFF                // RX_IPV6_COUNTn[31..0]
#define WF_UMIB_TOP_B2BRIPCR3_RX_IPV6_COUNTn_SHFT              0

/* =====================================================================================

  ---B2BRIPCR4 (0x820cd000 + 0x89C)---

    RX_IPV6_DROP_COUNTn[31..0]   - (RW) This counter is increased when a MSDU is received with IPv6 header and is dropped by PF
                                     (unit : MSDU)

 =====================================================================================*/
#define WF_UMIB_TOP_B2BRIPCR4_RX_IPV6_DROP_COUNTn_ADDR         WF_UMIB_TOP_B2BRIPCR4_ADDR
#define WF_UMIB_TOP_B2BRIPCR4_RX_IPV6_DROP_COUNTn_MASK         0xFFFFFFFF                // RX_IPV6_DROP_COUNTn[31..0]
#define WF_UMIB_TOP_B2BRIPCR4_RX_IPV6_DROP_COUNTn_SHFT         0

#ifdef __cplusplus
}
#endif

#endif // __WF_UMIB_TOP_REGS_H__
