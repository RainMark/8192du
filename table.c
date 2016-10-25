/******************************************************************************
 *
 * Copyright(c) 2007 - 2011 Realtek Corporation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 *
 ******************************************************************************/
/*Created on  2011/11/11,  8: 8*/

#include "table.h"

const u32 rtl8192du_phy_reg_2tarray[PHY_REG_2T_ARRAYLENGTH] = {
	0x800, 0x80040002,
	0x804, 0x00000003,
	0x808, 0x0000fc00,
	0x80c, 0x0000000a,
	0x810, 0x10001331,
	0x814, 0x020c3d10,
	0x818, 0x02200385,
	0x81c, 0x00000000,
	0x820, 0x01000100,
	0x824, 0x00390004,
	0x828, 0x01000100,
	0x82c, 0x00390004,
	0x830, 0x27272727,
	0x834, 0x27272727,
	0x838, 0x27272727,
	0x83c, 0x27272727,
	0x840, 0x00010000,
	0x844, 0x00010000,
	0x848, 0x27272727,
	0x84c, 0x27272727,
	0x850, 0x00000000,
	0x854, 0x00000000,
	0x858, 0x569a569a,
	0x85c, 0x0c1b25a4,
	0x860, 0x66e60250,
	0x864, 0x061f0150,
	0x868, 0x27272727,
	0x86c, 0x272b2b2b,
	0x870, 0x07000700,
	0x874, 0x22188000,
	0x878, 0x08080808,
	0x87c, 0x0001fff8,
	0x880, 0xc0083070,
	0x884, 0x00000cd5,
	0x888, 0x00000000,
	0x88c, 0xcc0000c0,
	0x890, 0x00000800,
	0x894, 0xfffffffe,
	0x898, 0x40302010,
	0x89c, 0x00706050,
	0x900, 0x00000000,
	0x904, 0x00000023,
	0x908, 0x00000000,
	0x90c, 0x81121313,
	0xa00, 0x00d047c8,
	0xa04, 0x80ff000c,
	0xa08, 0x8c8a8300,
	0xa0c, 0x2e68120f,
	0xa10, 0x9500bb78,
	0xa14, 0x11144028,
	0xa18, 0x00881117,
	0xa1c, 0x89140f00,
	0xa20, 0x1a1b0000,
	0xa24, 0x090e1317,
	0xa28, 0x00000204,
	0xa2c, 0x00d30000,
	0xa70, 0x101fff00,
	0xa74, 0x00000007,
	0xc00, 0x40071d40,
	0xc04, 0x03a05633,
	0xc08, 0x001000e4,
	0xc0c, 0x6c6c6c6c,
	0xc10, 0x08800000,
	0xc14, 0x40000100,
	0xc18, 0x08800000,
	0xc1c, 0x40000100,
	0xc20, 0x00000000,
	0xc24, 0x00000000,
	0xc28, 0x00000000,
	0xc2c, 0x00000000,
	0xc30, 0x69e9ac44,
	0xc34, 0x469652af,
	0xc38, 0x49795994,
	0xc3c, 0x0a979718,
	0xc40, 0x1f7c403f,
	0xc44, 0x000100b7,
	0xc48, 0xec020107,
	0xc4c, 0x007f037f,
	0xc50, 0x69543420,
	0xc54, 0x43bc009e,
	0xc58, 0x69543420,
	0xc5c, 0x433c00a8,
	0xc60, 0x00000000,
	0xc64, 0x7112848b,
	0xc68, 0x47c00bff,
	0xc6c, 0x00000036,
	0xc70, 0x2c7f000d,
	0xc74, 0x258610db,
	0xc78, 0x0000001f,
	0xc7c, 0x40b95612,
	0xc80, 0x40000100,
	0xc84, 0x20f60000,
	0xc88, 0x40000100,
	0xc8c, 0xa0e40000,
	0xc90, 0x00121820,
	0xc94, 0x00000007,
	0xc98, 0x00121820,
	0xc9c, 0x00007f7f,
	0xca0, 0x00000000,
	0xca4, 0x00000080,
	0xca8, 0x00000000,
	0xcac, 0x00000000,
	0xcb0, 0x00000000,
	0xcb4, 0x00000000,
	0xcb8, 0x00000000,
	0xcbc, 0x28000000,
	0xcc0, 0x00000000,
	0xcc4, 0x00000000,
	0xcc8, 0x00000000,
	0xccc, 0x00000000,
	0xcd0, 0x00000000,
	0xcd4, 0x00000000,
	0xcd8, 0x64b11e20,
	0xcdc, 0xe0767533,
	0xce0, 0x00222222,
	0xce4, 0x00000000,
	0xce8, 0x37644302,
	0xcec, 0x2f97d40c,
	0xd00, 0x00080740,
	0xd04, 0x00020403,
	0xd08, 0x0000907f,
	0xd0c, 0x20010201,
	0xd10, 0xa0633333,
	0xd14, 0x3333bc43,
	0xd18, 0x7a8f5b6b,
	0xd2c, 0xcc979975,
	0xd30, 0x00000000,
	0xd34, 0x80608404,
	0xd38, 0x00000000,
	0xd3c, 0x00027353,
	0xd40, 0x00000000,
	0xd44, 0x00000000,
	0xd48, 0x00000000,
	0xd4c, 0x00000000,
	0xd50, 0x6437140a,
	0xd54, 0x00000000,
	0xd58, 0x00000000,
	0xd5c, 0x30032064,
	0xd60, 0x4653de68,
	0xd64, 0x04518a3c,
	0xd68, 0x00002101,
	0xd6c, 0x2a201c16,
	0xd70, 0x1812362e,
	0xd74, 0x322c2220,
	0xd78, 0x000e3c24,
	0xe00, 0x2a2a2a2a,
	0xe04, 0x2a2a2a2a,
	0xe08, 0x03902a2a,
	0xe10, 0x2a2a2a2a,
	0xe14, 0x2a2a2a2a,
	0xe18, 0x2a2a2a2a,
	0xe1c, 0x2a2a2a2a,
	0xe28, 0x00000000,
	0xe30, 0x1000dc1f,
	0xe34, 0x10008c1f,
	0xe38, 0x02140102,
	0xe3c, 0x681604c2,
	0xe40, 0x01007c00,
	0xe44, 0x01004800,
	0xe48, 0xfb000000,
	0xe4c, 0x000028d1,
	0xe50, 0x1000dc1f,
	0xe54, 0x10008c1f,
	0xe58, 0x02140102,
	0xe5c, 0x28160d05,
	0xe60, 0x00000010,
	0xe68, 0x001b25a4,
	0xe6c, 0x63db25a4,
	0xe70, 0x63db25a4,
	0xe74, 0x0c126da4,
	0xe78, 0x0c126da4,
	0xe7c, 0x0c126da4,
	0xe80, 0x0c126da4,
	0xe84, 0x63db25a4,
	0xe88, 0x0c126da4,
	0xe8c, 0x63db25a4,
	0xed0, 0x63db25a4,
	0xed4, 0x63db25a4,
	0xed8, 0x63db25a4,
	0xedc, 0x001b25a4,
	0xee0, 0x001b25a4,
	0xeec, 0x6fdb25a4,
	0xf14, 0x00000003,
	0xf1c, 0x00000064,
	0xf4c, 0x00000004,
	0xf00, 0x00000300,
};

const u32 rtl8192du_phy_reg_array_pg[PHY_REG_ARRAY_PG_LENGTH] = {
	0xe00, 0xffffffff, 0x07090c0c,
	0xe04, 0xffffffff, 0x01020405,
	0xe08, 0x0000ff00, 0x00000000,
	0x86c, 0xffffff00, 0x00000000,
	0xe10, 0xffffffff, 0x0b0c0c0e,
	0xe14, 0xffffffff, 0x01030506,
	0xe18, 0xffffffff, 0x0b0c0d0e,
	0xe1c, 0xffffffff, 0x01030509,
	0x830, 0xffffffff, 0x07090c0c,
	0x834, 0xffffffff, 0x01020405,
	0x838, 0xffffff00, 0x00000000,
	0x86c, 0x000000ff, 0x00000000,
	0x83c, 0xffffffff, 0x0b0c0c0e,
	0x848, 0xffffffff, 0x01030506,
	0x84c, 0xffffffff, 0x0b0c0d0e,
	0x868, 0xffffffff, 0x01030509,
	0xe00, 0xffffffff, 0x00000000,
	0xe04, 0xffffffff, 0x00000000,
	0xe08, 0x0000ff00, 0x00000000,
	0x86c, 0xffffff00, 0x00000000,
	0xe10, 0xffffffff, 0x00000000,
	0xe14, 0xffffffff, 0x00000000,
	0xe18, 0xffffffff, 0x00000000,
	0xe1c, 0xffffffff, 0x00000000,
	0x830, 0xffffffff, 0x00000000,
	0x834, 0xffffffff, 0x00000000,
	0x838, 0xffffff00, 0x00000000,
	0x86c, 0x000000ff, 0x00000000,
	0x83c, 0xffffffff, 0x00000000,
	0x848, 0xffffffff, 0x00000000,
	0x84c, 0xffffffff, 0x00000000,
	0x868, 0xffffffff, 0x00000000,
	0xe00, 0xffffffff, 0x04040404,
	0xe04, 0xffffffff, 0x00020204,
	0xe08, 0x0000ff00, 0x00000000,
	0x86c, 0xffffff00, 0x00000000,
	0xe10, 0xffffffff, 0x06060606,
	0xe14, 0xffffffff, 0x00020406,
	0xe18, 0xffffffff, 0x00000000,
	0xe1c, 0xffffffff, 0x00000000,
	0x830, 0xffffffff, 0x04040404,
	0x834, 0xffffffff, 0x00020204,
	0x838, 0xffffff00, 0x00000000,
	0x86c, 0x000000ff, 0x00000000,
	0x83c, 0xffffffff, 0x06060606,
	0x848, 0xffffffff, 0x00020406,
	0x84c, 0xffffffff, 0x00000000,
	0x868, 0xffffffff, 0x00000000,
	0xe00, 0xffffffff, 0x00000000,
	0xe04, 0xffffffff, 0x00000000,
	0xe08, 0x0000ff00, 0x00000000,
	0x86c, 0xffffff00, 0x00000000,
	0xe10, 0xffffffff, 0x00000000,
	0xe14, 0xffffffff, 0x00000000,
	0xe18, 0xffffffff, 0x00000000,
	0xe1c, 0xffffffff, 0x00000000,
	0x830, 0xffffffff, 0x00000000,
	0x834, 0xffffffff, 0x00000000,
	0x838, 0xffffff00, 0x00000000,
	0x86c, 0x000000ff, 0x00000000,
	0x83c, 0xffffffff, 0x00000000,
	0x848, 0xffffffff, 0x00000000,
	0x84c, 0xffffffff, 0x00000000,
	0x868, 0xffffffff, 0x00000000,
	0xe00, 0xffffffff, 0x00000000,
	0xe04, 0xffffffff, 0x00000000,
	0xe08, 0x0000ff00, 0x00000000,
	0x86c, 0xffffff00, 0x00000000,
	0xe10, 0xffffffff, 0x00000000,
	0xe14, 0xffffffff, 0x00000000,
	0xe18, 0xffffffff, 0x00000000,
	0xe1c, 0xffffffff, 0x00000000,
	0x830, 0xffffffff, 0x00000000,
	0x834, 0xffffffff, 0x00000000,
	0x838, 0xffffff00, 0x00000000,
	0x86c, 0x000000ff, 0x00000000,
	0x83c, 0xffffffff, 0x00000000,
	0x848, 0xffffffff, 0x00000000,
	0x84c, 0xffffffff, 0x00000000,
	0x868, 0xffffffff, 0x00000000,
	0xe00, 0xffffffff, 0x04040404,
	0xe04, 0xffffffff, 0x00020204,
	0xe08, 0x0000ff00, 0x00000000,
	0x86c, 0xffffff00, 0x00000000,
	0xe10, 0xffffffff, 0x00000000,
	0xe14, 0xffffffff, 0x00000000,
	0xe18, 0xffffffff, 0x00000000,
	0xe1c, 0xffffffff, 0x00000000,
	0x830, 0xffffffff, 0x04040404,
	0x834, 0xffffffff, 0x00020204,
	0x838, 0xffffff00, 0x00000000,
	0x86c, 0x000000ff, 0x00000000,
	0x83c, 0xffffffff, 0x00000000,
	0x848, 0xffffffff, 0x00000000,
	0x84c, 0xffffffff, 0x00000000,
	0x868, 0xffffffff, 0x00000000,
	0xe00, 0xffffffff, 0x00000000,
	0xe04, 0xffffffff, 0x00000000,
	0xe08, 0x0000ff00, 0x00000000,
	0x86c, 0xffffff00, 0x00000000,
	0xe10, 0xffffffff, 0x00000000,
	0xe14, 0xffffffff, 0x00000000,
	0xe18, 0xffffffff, 0x00000000,
	0xe1c, 0xffffffff, 0x00000000,
	0x830, 0xffffffff, 0x00000000,
	0x834, 0xffffffff, 0x00000000,
	0x838, 0xffffff00, 0x00000000,
	0x86c, 0x000000ff, 0x00000000,
	0x83c, 0xffffffff, 0x00000000,
	0x848, 0xffffffff, 0x00000000,
	0x84c, 0xffffffff, 0x00000000,
	0x868, 0xffffffff, 0x00000000,
	0xe00, 0xffffffff, 0x04040404,
	0xe04, 0xffffffff, 0x00020204,
	0xe08, 0x0000ff00, 0x00000000,
	0x86c, 0xffffff00, 0x00000000,
	0xe10, 0xffffffff, 0x08080808,
	0xe14, 0xffffffff, 0x00040408,
	0xe18, 0xffffffff, 0x00000000,
	0xe1c, 0xffffffff, 0x00000000,
	0x830, 0xffffffff, 0x04040404,
	0x834, 0xffffffff, 0x00020204,
	0x838, 0xffffff00, 0x00000000,
	0x86c, 0x000000ff, 0x00000000,
	0x83c, 0xffffffff, 0x08080808,
	0x848, 0xffffffff, 0x00040408,
	0x84c, 0xffffffff, 0x00000000,
	0x868, 0xffffffff, 0x00000000,
	0xe00, 0xffffffff, 0x04040404,
	0xe04, 0xffffffff, 0x00020204,
	0xe08, 0x0000ff00, 0x00000000,
	0x86c, 0xffffff00, 0x00000000,
	0xe10, 0xffffffff, 0x08080808,
	0xe14, 0xffffffff, 0x00040408,
	0xe18, 0xffffffff, 0x00000000,
	0xe1c, 0xffffffff, 0x00000000,
	0x830, 0xffffffff, 0x04040404,
	0x834, 0xffffffff, 0x00020204,
	0x838, 0xffffff00, 0x00000000,
	0x86c, 0x000000ff, 0x00000000,
	0x83c, 0xffffffff, 0x08080808,
	0x848, 0xffffffff, 0x00040408,
	0x84c, 0xffffffff, 0x00000000,
	0x868, 0xffffffff, 0x00000000,
	0xe00, 0xffffffff, 0x04040404,
	0xe04, 0xffffffff, 0x00020204,
	0xe08, 0x0000ff00, 0x00000000,
	0x86c, 0xffffff00, 0x00000000,
	0xe10, 0xffffffff, 0x08080808,
	0xe14, 0xffffffff, 0x00040408,
	0xe18, 0xffffffff, 0x00000000,
	0xe1c, 0xffffffff, 0x00000000,
	0x830, 0xffffffff, 0x04040404,
	0x834, 0xffffffff, 0x00020204,
	0x838, 0xffffff00, 0x00000000,
	0x86c, 0x000000ff, 0x00000000,
	0x83c, 0xffffffff, 0x08080808,
	0x848, 0xffffffff, 0x00040408,
	0x84c, 0xffffffff, 0x00000000,
	0x868, 0xffffffff, 0x00000000,
	0xe00, 0xffffffff, 0x04040404,
	0xe04, 0xffffffff, 0x00020204,
	0xe08, 0x0000ff00, 0x00000000,
	0x86c, 0xffffff00, 0x00000000,
	0xe10, 0xffffffff, 0x08080808,
	0xe14, 0xffffffff, 0x00040408,
	0xe18, 0xffffffff, 0x00000000,
	0xe1c, 0xffffffff, 0x00000000,
	0x830, 0xffffffff, 0x04040404,
	0x834, 0xffffffff, 0x00020204,
	0x838, 0xffffff00, 0x00000000,
	0x86c, 0x000000ff, 0x00000000,
	0x83c, 0xffffffff, 0x08080808,
	0x848, 0xffffffff, 0x00040408,
	0x84c, 0xffffffff, 0x00000000,
	0x868, 0xffffffff, 0x00000000,
	0xe00, 0xffffffff, 0x04040404,
	0xe04, 0xffffffff, 0x00020204,
	0xe08, 0x0000ff00, 0x00000000,
	0x86c, 0xffffff00, 0x00000000,
	0xe10, 0xffffffff, 0x08080808,
	0xe14, 0xffffffff, 0x00040408,
	0xe18, 0xffffffff, 0x00000000,
	0xe1c, 0xffffffff, 0x00000000,
	0x830, 0xffffffff, 0x04040404,
	0x834, 0xffffffff, 0x00020204,
	0x838, 0xffffff00, 0x00000000,
	0x86c, 0x000000ff, 0x00000000,
	0x83c, 0xffffffff, 0x08080808,
	0x848, 0xffffffff, 0x00040408,
	0x84c, 0xffffffff, 0x00000000,
	0x868, 0xffffffff, 0x00000000,
	0xe00, 0xffffffff, 0x04040404,
	0xe04, 0xffffffff, 0x00020204,
	0xe08, 0x0000ff00, 0x00000000,
	0x86c, 0xffffff00, 0x00000000,
	0xe10, 0xffffffff, 0x08080808,
	0xe14, 0xffffffff, 0x00040408,
	0xe18, 0xffffffff, 0x00000000,
	0xe1c, 0xffffffff, 0x00000000,
	0x830, 0xffffffff, 0x04040404,
	0x834, 0xffffffff, 0x00020204,
	0x838, 0xffffff00, 0x00000000,
	0x86c, 0x000000ff, 0x00000000,
	0x83c, 0xffffffff, 0x08080808,
	0x848, 0xffffffff, 0x00040408,
	0x84c, 0xffffffff, 0x00000000,
	0x868, 0xffffffff, 0x00000000,
};

const u32 rtl8192du_radioa_2tarray[RADIOA_2T_ARRAYLENGTH] = {
	0x000, 0x00030000,
	0x001, 0x00030000,
	0x002, 0x00000000,
	0x003, 0x00018c63,
	0x004, 0x00018c63,
	0x008, 0x00084000,
	0x00b, 0x0001c000,
	0x00e, 0x00018c67,
	0x00f, 0x00000851,
	0x014, 0x00021440,
	0x018, 0x00017524,
	0x019, 0x00000000,
	0x01d, 0x000a1290,
	0x023, 0x00001558,
	0x01a, 0x00030a99,
	0x01b, 0x00040b00,
	0x01c, 0x000fc339,
	0x03a, 0x000a57eb,
	0x03b, 0x00020000,
	0x03c, 0x000ff454,
	0x020, 0x0000aa52,
	0x021, 0x00054000,
	0x040, 0x0000aa52,
	0x041, 0x00014000,
	0x025, 0x000803be,
	0x026, 0x000fc638,
	0x027, 0x00077c18,
	0x028, 0x000de471,
	0x029, 0x000d7110,
	0x02a, 0x0008cb04,
	0x02b, 0x0004128b,
	0x02c, 0x00001840,
	0x043, 0x0002444f,
	0x044, 0x0001adb0,
	0x045, 0x00056467,
	0x046, 0x0008992c,
	0x047, 0x0000452c,
	0x048, 0x000f9c43,
	0x049, 0x00002e0c,
	0x04a, 0x000546eb,
	0x04b, 0x0008966c,
	0x04c, 0x0000dde9,
	0x018, 0x00007401,
	0x000, 0x00070000,
	0x012, 0x000dc000,
	0x012, 0x00090000,
	0x012, 0x00051000,
	0x012, 0x00012000,
	0x013, 0x000287b7,
	0x013, 0x000247ab,
	0x013, 0x0002079f,
	0x013, 0x0001c793,
	0x013, 0x0001839b,
	0x013, 0x00014392,
	0x013, 0x0001019a,
	0x013, 0x0000c191,
	0x013, 0x00008194,
	0x013, 0x000040a0,
	0x013, 0x00000018,
	0x015, 0x0000f424,
	0x015, 0x0004f424,
	0x015, 0x0008f424,
	0x016, 0x000e1330,
	0x016, 0x000a1330,
	0x016, 0x00061330,
	0x016, 0x00021330,
	0x018, 0x00017524,
	0x000, 0x00070000,
	0x012, 0x000cf000,
	0x012, 0x000bc000,
	0x012, 0x00078000,
	0x012, 0x00000000,
	0x013, 0x000287bc,
	0x013, 0x000247b0,
	0x013, 0x000203b4,
	0x013, 0x0001c3a8,
	0x013, 0x000181b4,
	0x013, 0x000141a8,
	0x013, 0x000100b4,
	0x013, 0x0000c0a8,
	0x013, 0x0000b030,
	0x013, 0x00004024,
	0x013, 0x00000018,
	0x015, 0x0000f4c3,
	0x015, 0x0004f4c3,
	0x015, 0x0008f4c3,
	0x016, 0x000e085f,
	0x016, 0x000a085f,
	0x016, 0x0006085f,
	0x016, 0x0002085f,
	0x018, 0x00037524,
	0x000, 0x00070000,
	0x012, 0x000cf000,
	0x012, 0x000bc000,
	0x012, 0x00078000,
	0x012, 0x00000000,
	0x013, 0x000287bc,
	0x013, 0x000247b0,
	0x013, 0x000203b4,
	0x013, 0x0001c3a8,
	0x013, 0x000181b4,
	0x013, 0x000141a8,
	0x013, 0x000100b4,
	0x013, 0x0000c0a8,
	0x013, 0x0000b030,
	0x013, 0x00004024,
	0x013, 0x00000018,
	0x015, 0x0000f4c3,
	0x015, 0x0004f4c3,
	0x015, 0x0008f4c3,
	0x016, 0x000e085f,
	0x016, 0x000a085f,
	0x016, 0x0006085f,
	0x016, 0x0002085f,
	0x018, 0x00057568,
	0x000, 0x00070000,
	0x012, 0x000cf000,
	0x012, 0x000bc000,
	0x012, 0x00078000,
	0x012, 0x00000000,
	0x013, 0x000287bc,
	0x013, 0x000247b0,
	0x013, 0x000203b4,
	0x013, 0x0001c3a8,
	0x013, 0x000181b4,
	0x013, 0x000141a8,
	0x013, 0x000100b4,
	0x013, 0x0000c0a8,
	0x013, 0x0000b030,
	0x013, 0x00004024,
	0x013, 0x00000018,
	0x015, 0x0000f4c3,
	0x015, 0x0004f4c3,
	0x015, 0x0008f4c3,
	0x016, 0x000e085f,
	0x016, 0x000a085f,
	0x016, 0x0006085f,
	0x016, 0x0002085f,
	0x030, 0x0004470f,
	0x031, 0x00044ff0,
	0x032, 0x00000070,
	0x033, 0x000dd480,
	0x034, 0x000ffac0,
	0x035, 0x000b80c0,
	0x036, 0x00077000,
	0x037, 0x00064ff2,
	0x038, 0x000e7661,
	0x039, 0x00000e90,
	0x000, 0x00030000,
	0x018, 0x0000f401,
	0x0fe, 0x00000000,
	0x0fe, 0x00000000,
	0x01e, 0x00088009,
	0x01f, 0x00080003,
	0x0fe, 0x00000000,
	0x01e, 0x00088001,
	0x01f, 0x00080000,
	0x0fe, 0x00000000,
	0x018, 0x00097524,
	0x0fe, 0x00000000,
	0x0fe, 0x00000000,
	0x0fe, 0x00000000,
	0x0fe, 0x00000000,
	0x02b, 0x00041289,
	0x0fe, 0x00000000,
	0x02d, 0x0006aaaa,
	0x02e, 0x000b4d01,
	0x02d, 0x00080000,
	0x02e, 0x00004d02,
	0x02d, 0x00095555,
	0x02e, 0x00054d03,
	0x02d, 0x000aaaaa,
	0x02e, 0x000b4d04,
	0x02d, 0x000c0000,
	0x02e, 0x00004d05,
	0x02d, 0x000d5555,
	0x02e, 0x00054d06,
	0x02d, 0x000eaaaa,
	0x02e, 0x000b4d07,
	0x02d, 0x00000000,
	0x02e, 0x00005108,
	0x02d, 0x00015555,
	0x02e, 0x00055109,
	0x02d, 0x0002aaaa,
	0x02e, 0x000b510a,
	0x02d, 0x00040000,
	0x02e, 0x0000510b,
	0x02d, 0x00055555,
	0x02e, 0x0005510c,
};

const u32 rtl8192du_radiob_2tarray[RADIOB_2T_ARRAYLENGTH] = {
	0x000, 0x00030000,
	0x001, 0x00030000,
	0x002, 0x00000000,
	0x003, 0x00018c63,
	0x004, 0x00018c63,
	0x008, 0x00084000,
	0x00b, 0x0001c000,
	0x00e, 0x00018c67,
	0x00f, 0x00000851,
	0x014, 0x00021440,
	0x018, 0x00007401,
	0x019, 0x00000060,
	0x01d, 0x000a1290,
	0x023, 0x00001558,
	0x01a, 0x00030a99,
	0x01b, 0x00040b00,
	0x01c, 0x000fc339,
	0x03a, 0x000a57eb,
	0x03b, 0x00020000,
	0x03c, 0x000ff454,
	0x020, 0x0000aa52,
	0x021, 0x00054000,
	0x040, 0x0000aa52,
	0x041, 0x00014000,
	0x025, 0x000803be,
	0x026, 0x000fc638,
	0x027, 0x00077c18,
	0x028, 0x000d1c31,
	0x029, 0x000d7110,
	0x02a, 0x000aeb04,
	0x02b, 0x0004128b,
	0x02c, 0x00001840,
	0x043, 0x0002444f,
	0x044, 0x0001adb0,
	0x045, 0x00056467,
	0x046, 0x0008992c,
	0x047, 0x0000452c,
	0x048, 0x000f9c43,
	0x049, 0x00002e0c,
	0x04a, 0x000546eb,
	0x04b, 0x0008966c,
	0x04c, 0x0000dde9,
	0x018, 0x00007401,
	0x000, 0x00070000,
	0x012, 0x000dc000,
	0x012, 0x00090000,
	0x012, 0x00051000,
	0x012, 0x00012000,
	0x013, 0x000287b7,
	0x013, 0x000247ab,
	0x013, 0x0002079f,
	0x013, 0x0001c793,
	0x013, 0x0001839b,
	0x013, 0x00014392,
	0x013, 0x0001019a,
	0x013, 0x0000c191,
	0x013, 0x00008194,
	0x013, 0x000040a0,
	0x013, 0x00000018,
	0x015, 0x0000f424,
	0x015, 0x0004f424,
	0x015, 0x0008f424,
	0x016, 0x000e1330,
	0x016, 0x000a1330,
	0x016, 0x00061330,
	0x016, 0x00021330,
	0x018, 0x00017524,
	0x000, 0x00070000,
	0x012, 0x000cf000,
	0x012, 0x000bc000,
	0x012, 0x00078000,
	0x012, 0x00000000,
	0x013, 0x000287bc,
	0x013, 0x000247b0,
	0x013, 0x000203b4,
	0x013, 0x0001c3a8,
	0x013, 0x000181b4,
	0x013, 0x000141a8,
	0x013, 0x000100b4,
	0x013, 0x0000c0a8,
	0x013, 0x0000b030,
	0x013, 0x00004024,
	0x013, 0x00000018,
	0x015, 0x0000f4c3,
	0x015, 0x0004f4c3,
	0x015, 0x0008f4c3,
	0x016, 0x000e085f,
	0x016, 0x000a085f,
	0x016, 0x0006085f,
	0x016, 0x0002085f,
	0x018, 0x00037524,
	0x000, 0x00070000,
	0x012, 0x000cf000,
	0x012, 0x000bc000,
	0x012, 0x00078000,
	0x012, 0x00000000,
	0x013, 0x000287bc,
	0x013, 0x000247b0,
	0x013, 0x000203b4,
	0x013, 0x0001c3a8,
	0x013, 0x000181b4,
	0x013, 0x000141a8,
	0x013, 0x000100b4,
	0x013, 0x0000c0a8,
	0x013, 0x0000b030,
	0x013, 0x00004024,
	0x013, 0x00000018,
	0x015, 0x0000f4c3,
	0x015, 0x0004f4c3,
	0x015, 0x0008f4c3,
	0x016, 0x000e085f,
	0x016, 0x000a085f,
	0x016, 0x0006085f,
	0x016, 0x0002085f,
	0x018, 0x00057524,
	0x000, 0x00070000,
	0x012, 0x000cf000,
	0x012, 0x000bc000,
	0x012, 0x00078000,
	0x012, 0x00000000,
	0x013, 0x000287bc,
	0x013, 0x000247b0,
	0x013, 0x000203b4,
	0x013, 0x0001c3a8,
	0x013, 0x000181b4,
	0x013, 0x000141a8,
	0x013, 0x000100b4,
	0x013, 0x0000c0a8,
	0x013, 0x0000b030,
	0x013, 0x00004024,
	0x013, 0x00000018,
	0x015, 0x0000f4c3,
	0x015, 0x0004f4c3,
	0x015, 0x0008f4c3,
	0x016, 0x000e085f,
	0x016, 0x000a085f,
	0x016, 0x0006085f,
	0x016, 0x0002085f,
	0x030, 0x0004470f,
	0x031, 0x00044ff0,
	0x032, 0x00000070,
	0x033, 0x000dd480,
	0x034, 0x000ffac0,
	0x035, 0x000b80c0,
	0x036, 0x00077000,
	0x037, 0x00064ff2,
	0x038, 0x000e7661,
	0x039, 0x00000e90,
	0x000, 0x00030000,
	0x018, 0x0000f401,
	0x0fe, 0x00000000,
	0x0fe, 0x00000000,
	0x01e, 0x00088009,
	0x01f, 0x00080003,
	0x0fe, 0x00000000,
	0x01e, 0x00088001,
	0x01f, 0x00080000,
	0x0fe, 0x00000000,
	0x018, 0x00087401,
	0x0fe, 0x00000000,
	0x0fe, 0x00000000,
	0x0fe, 0x00000000,
	0x02b, 0x00041289,
	0x0fe, 0x00000000,
	0x02d, 0x00066666,
	0x02e, 0x00064001,
	0x02d, 0x00091111,
	0x02e, 0x00014002,
	0x02d, 0x000bbbbb,
	0x02e, 0x000b4003,
	0x02d, 0x000e6666,
	0x02e, 0x00064004,
	0x02d, 0x00088888,
	0x02e, 0x00084005,
	0x02d, 0x0009dddd,
	0x02e, 0x000d4006,
	0x02d, 0x000b3333,
	0x02e, 0x00034007,
	0x02d, 0x00048888,
	0x02e, 0x00084408,
	0x02d, 0x000bbbbb,
	0x02e, 0x000b4409,
	0x02d, 0x000e6666,
	0x02e, 0x0006440a,
	0x02d, 0x00011111,
	0x02e, 0x0001480b,
	0x02d, 0x0003bbbb,
	0x02e, 0x000b480c,
	0x02d, 0x00066666,
	0x02e, 0x0006480d,
	0x02d, 0x000ccccc,
	0x02e, 0x000c480e,
};

const u32 rtl8192du_radioa_2t_int_paarray[RADIOA_2T_INT_PA_ARRAYLENGTH] = {
	0x000, 0x00030000,
	0x001, 0x00030000,
	0x002, 0x00000000,
	0x003, 0x00018c63,
	0x004, 0x00018c63,
	0x008, 0x00084000,
	0x00b, 0x0001c000,
	0x00e, 0x00018c67,
	0x00f, 0x00000851,
	0x014, 0x00021440,
	0x018, 0x00017524,
	0x019, 0x00000000,
	0x01d, 0x000a1290,
	0x023, 0x00001558,
	0x01a, 0x00030a99,
	0x01b, 0x00040b00,
	0x01c, 0x000fc339,
	0x03a, 0x000a57eb,
	0x03b, 0x00020000,
	0x03c, 0x000ff455,
	0x020, 0x0000aa52,
	0x021, 0x00054000,
	0x040, 0x0000aa52,
	0x041, 0x00014000,
	0x025, 0x000803be,
	0x026, 0x000fc638,
	0x027, 0x00077c18,
	0x028, 0x000de471,
	0x029, 0x000d7110,
	0x02a, 0x0008eb04,
	0x02b, 0x0004128b,
	0x02c, 0x00001840,
	0x043, 0x0002444f,
	0x044, 0x0001adb0,
	0x045, 0x00056467,
	0x046, 0x0008992c,
	0x047, 0x0000452c,
	0x048, 0x000c0443,
	0x049, 0x00000730,
	0x04a, 0x00050f0f,
	0x04b, 0x000896ef,
	0x04c, 0x0000ddee,
	0x018, 0x00007401,
	0x000, 0x00070000,
	0x012, 0x000dc000,
	0x012, 0x00090000,
	0x012, 0x00051000,
	0x012, 0x00012000,
	0x013, 0x000287b7,
	0x013, 0x000247ab,
	0x013, 0x0002079f,
	0x013, 0x0001c793,
	0x013, 0x0001839b,
	0x013, 0x00014392,
	0x013, 0x0001019a,
	0x013, 0x0000c191,
	0x013, 0x00008194,
	0x013, 0x000040a0,
	0x013, 0x00000018,
	0x015, 0x0000f424,
	0x015, 0x0004f424,
	0x015, 0x0008f424,
	0x016, 0x000e1330,
	0x016, 0x000a1330,
	0x016, 0x00061330,
	0x016, 0x00021330,
	0x018, 0x00017524,
	0x000, 0x00070000,
	0x012, 0x000cf000,
	0x012, 0x000bc000,
	0x012, 0x00078000,
	0x012, 0x00000000,
	0x013, 0x000287bf,
	0x013, 0x000247b3,
	0x013, 0x000207a7,
	0x013, 0x0001c79b,
	0x013, 0x0001839f,
	0x013, 0x00014393,
	0x013, 0x00010399,
	0x013, 0x0000c38d,
	0x013, 0x00008199,
	0x013, 0x0000418d,
	0x013, 0x00000099,
	0x015, 0x0000f495,
	0x015, 0x0004f495,
	0x015, 0x0008f495,
	0x016, 0x000e1874,
	0x016, 0x000a1874,
	0x016, 0x00061874,
	0x016, 0x00021874,
	0x018, 0x00037564,
	0x000, 0x00070000,
	0x012, 0x000cf000,
	0x012, 0x000bc000,
	0x012, 0x00078000,
	0x012, 0x00000000,
	0x013, 0x000287bf,
	0x013, 0x000247b3,
	0x013, 0x000207a7,
	0x013, 0x0001c79b,
	0x013, 0x0001839f,
	0x013, 0x00014393,
	0x013, 0x00010399,
	0x013, 0x0000c38d,
	0x013, 0x00008199,
	0x013, 0x0000418d,
	0x013, 0x00000099,
	0x015, 0x0000f495,
	0x015, 0x0004f495,
	0x015, 0x0008f495,
	0x016, 0x000e1874,
	0x016, 0x000a1874,
	0x016, 0x00061874,
	0x016, 0x00021874,
	0x018, 0x00057595,
	0x000, 0x00070000,
	0x012, 0x000cf000,
	0x012, 0x000bc000,
	0x012, 0x00078000,
	0x012, 0x00000000,
	0x013, 0x000287bf,
	0x013, 0x000247b3,
	0x013, 0x000207a7,
	0x013, 0x0001c79b,
	0x013, 0x0001839f,
	0x013, 0x00014393,
	0x013, 0x00010399,
	0x013, 0x0000c38d,
	0x013, 0x00008199,
	0x013, 0x0000418d,
	0x013, 0x00000099,
	0x015, 0x0000f495,
	0x015, 0x0004f495,
	0x015, 0x0008f495,
	0x016, 0x000e1874,
	0x016, 0x000a1874,
	0x016, 0x00061874,
	0x016, 0x00021874,
	0x030, 0x0004470f,
	0x031, 0x00044ff0,
	0x032, 0x00000070,
	0x033, 0x000dd480,
	0x034, 0x000ffac0,
	0x035, 0x000b80c0,
	0x036, 0x00077000,
	0x037, 0x00064ff2,
	0x038, 0x000e7661,
	0x039, 0x00000e90,
	0x000, 0x00030000,
	0x018, 0x0000f401,
	0x0fe, 0x00000000,
	0x0fe, 0x00000000,
	0x01e, 0x00088009,
	0x01f, 0x00080003,
	0x0fe, 0x00000000,
	0x01e, 0x00088001,
	0x01f, 0x00080000,
	0x0fe, 0x00000000,
	0x018, 0x00097524,
	0x0fe, 0x00000000,
	0x0fe, 0x00000000,
	0x0fe, 0x00000000,
	0x0fe, 0x00000000,
	0x02b, 0x00041289,
	0x0fe, 0x00000000,
	0x02d, 0x0006aaaa,
	0x02e, 0x000b4d01,
	0x02d, 0x00080000,
	0x02e, 0x00004d02,
	0x02d, 0x00095555,
	0x02e, 0x00054d03,
	0x02d, 0x000aaaaa,
	0x02e, 0x000b4d04,
	0x02d, 0x000c0000,
	0x02e, 0x00004d05,
	0x02d, 0x000d5555,
	0x02e, 0x00054d06,
	0x02d, 0x000eaaaa,
	0x02e, 0x000b4d07,
	0x02d, 0x00000000,
	0x02e, 0x00005108,
	0x02d, 0x00015555,
	0x02e, 0x00055109,
	0x02d, 0x0002aaaa,
	0x02e, 0x000b510a,
	0x02d, 0x00040000,
	0x02e, 0x0000510b,
	0x02d, 0x00055555,
	0x02e, 0x0005510c,
};

const u32 rtl8192du_radiob_2t_int_paarray[RADIOB_2T_INT_PA_ARRAYLENGTH] = {
	0x000, 0x00030000,
	0x001, 0x00030000,
	0x002, 0x00000000,
	0x003, 0x00018c63,
	0x004, 0x00018c63,
	0x008, 0x00084000,
	0x00b, 0x0001c000,
	0x00e, 0x00018c67,
	0x00f, 0x00000851,
	0x014, 0x00021440,
	0x018, 0x00007401,
	0x019, 0x00000060,
	0x01d, 0x000a1290,
	0x023, 0x00001558,
	0x01a, 0x00030a99,
	0x01b, 0x00040b00,
	0x01c, 0x000fc339,
	0x03a, 0x000a57eb,
	0x03b, 0x00020000,
	0x03c, 0x000ff455,
	0x020, 0x0000aa52,
	0x021, 0x00054000,
	0x040, 0x0000aa52,
	0x041, 0x00014000,
	0x025, 0x000803be,
	0x026, 0x000fc638,
	0x027, 0x00077c18,
	0x028, 0x000d1c31,
	0x029, 0x000d7110,
	0x02a, 0x000aeb04,
	0x02b, 0x0004128b,
	0x02c, 0x00001840,
	0x043, 0x0002444f,
	0x044, 0x0001adb0,
	0x045, 0x00056467,
	0x046, 0x0008992c,
	0x047, 0x0000452c,
	0x048, 0x000c0443,
	0x049, 0x00000730,
	0x04a, 0x00050f0f,
	0x04b, 0x000896ef,
	0x04c, 0x0000ddee,
	0x018, 0x00007401,
	0x000, 0x00070000,
	0x012, 0x000dc000,
	0x012, 0x00090000,
	0x012, 0x00051000,
	0x012, 0x00012000,
	0x013, 0x000287b7,
	0x013, 0x000247ab,
	0x013, 0x0002079f,
	0x013, 0x0001c793,
	0x013, 0x0001839b,
	0x013, 0x00014392,
	0x013, 0x0001019a,
	0x013, 0x0000c191,
	0x013, 0x00008194,
	0x013, 0x000040a0,
	0x013, 0x00000018,
	0x015, 0x0000f424,
	0x015, 0x0004f424,
	0x015, 0x0008f424,
	0x016, 0x000e1330,
	0x016, 0x000a1330,
	0x016, 0x00061330,
	0x016, 0x00021330,
	0x018, 0x00017524,
	0x000, 0x00070000,
	0x012, 0x000cf000,
	0x012, 0x000bc000,
	0x012, 0x00078000,
	0x012, 0x00000000,
	0x013, 0x000287bf,
	0x013, 0x000247b3,
	0x013, 0x000207a7,
	0x013, 0x0001c79b,
	0x013, 0x0001839f,
	0x013, 0x00014393,
	0x013, 0x00010399,
	0x013, 0x0000c38d,
	0x013, 0x00008199,
	0x013, 0x0000418d,
	0x013, 0x00000099,
	0x015, 0x0000f495,
	0x015, 0x0004f495,
	0x015, 0x0008f495,
	0x016, 0x000e1874,
	0x016, 0x000a1874,
	0x016, 0x00061874,
	0x016, 0x00021874,
	0x018, 0x00037564,
	0x000, 0x00070000,
	0x012, 0x000cf000,
	0x012, 0x000bc000,
	0x012, 0x00078000,
	0x012, 0x00000000,
	0x013, 0x000287bf,
	0x013, 0x000247b3,
	0x013, 0x000207a7,
	0x013, 0x0001c79b,
	0x013, 0x0001839f,
	0x013, 0x00014393,
	0x013, 0x00010399,
	0x013, 0x0000c38d,
	0x013, 0x00008199,
	0x013, 0x0000418d,
	0x013, 0x00000099,
	0x015, 0x0000f495,
	0x015, 0x0004f495,
	0x015, 0x0008f495,
	0x016, 0x000e1874,
	0x016, 0x000a1874,
	0x016, 0x00061874,
	0x016, 0x00021874,
	0x018, 0x00057595,
	0x000, 0x00070000,
	0x012, 0x000cf000,
	0x012, 0x000bc000,
	0x012, 0x00078000,
	0x012, 0x00000000,
	0x013, 0x000287bf,
	0x013, 0x000247b3,
	0x013, 0x000207a7,
	0x013, 0x0001c79b,
	0x013, 0x0001839f,
	0x013, 0x00014393,
	0x013, 0x00010399,
	0x013, 0x0000c38d,
	0x013, 0x00008199,
	0x013, 0x0000418d,
	0x013, 0x00000099,
	0x015, 0x0000f495,
	0x015, 0x0004f495,
	0x015, 0x0008f495,
	0x016, 0x000e1874,
	0x016, 0x000a1874,
	0x016, 0x00061874,
	0x016, 0x00021874,
	0x030, 0x0004470f,
	0x031, 0x00044ff0,
	0x032, 0x00000070,
	0x033, 0x000dd480,
	0x034, 0x000ffac0,
	0x035, 0x000b80c0,
	0x036, 0x00077000,
	0x037, 0x00064ff2,
	0x038, 0x000e7661,
	0x039, 0x00000e90,
	0x000, 0x00030000,
	0x018, 0x0000f401,
	0x0fe, 0x00000000,
	0x0fe, 0x00000000,
	0x01e, 0x00088009,
	0x01f, 0x00080003,
	0x0fe, 0x00000000,
	0x01e, 0x00088001,
	0x01f, 0x00080000,
	0x0fe, 0x00000000,
	0x018, 0x00087401,
	0x0fe, 0x00000000,
	0x0fe, 0x00000000,
	0x0fe, 0x00000000,
	0x02b, 0x00041289,
	0x0fe, 0x00000000,
	0x02d, 0x00066666,
	0x02e, 0x00064001,
	0x02d, 0x00091111,
	0x02e, 0x00014002,
	0x02d, 0x000bbbbb,
	0x02e, 0x000b4003,
	0x02d, 0x000e6666,
	0x02e, 0x00064004,
	0x02d, 0x00088888,
	0x02e, 0x00084005,
	0x02d, 0x0009dddd,
	0x02e, 0x000d4006,
	0x02d, 0x000b3333,
	0x02e, 0x00034007,
	0x02d, 0x00048888,
	0x02e, 0x00084408,
	0x02d, 0x000bbbbb,
	0x02e, 0x000b4409,
	0x02d, 0x000e6666,
	0x02e, 0x0006440a,
	0x02d, 0x00011111,
	0x02e, 0x0001480b,
	0x02d, 0x0003bbbb,
	0x02e, 0x000b480c,
	0x02d, 0x00066666,
	0x02e, 0x0006480d,
	0x02d, 0x000ccccc,
	0x02e, 0x000c480e,
};

const u32 rtl8192du_mac_2tarray[MAC_2T_ARRAYLENGTH] = {
	0x420, 0x00000080,
	0x423, 0x00000000,
	0x430, 0x00000000,
	0x431, 0x00000000,
	0x432, 0x00000000,
	0x433, 0x00000001,
	0x434, 0x00000004,
	0x435, 0x00000005,
	0x436, 0x00000006,
	0x437, 0x00000007,
	0x438, 0x00000000,
	0x439, 0x00000000,
	0x43a, 0x00000000,
	0x43b, 0x00000001,
	0x43c, 0x00000004,
	0x43d, 0x00000005,
	0x43e, 0x00000006,
	0x43f, 0x00000007,
	0x440, 0x00000050,
	0x441, 0x00000001,
	0x442, 0x00000000,
	0x444, 0x00000015,
	0x445, 0x000000f0,
	0x446, 0x0000000f,
	0x447, 0x00000000,
	0x462, 0x00000008,
	0x463, 0x00000003,
	0x4c8, 0x000000ff,
	0x4c9, 0x00000008,
	0x4cc, 0x000000ff,
	0x4cd, 0x000000ff,
	0x4ce, 0x00000001,
	0x500, 0x00000026,
	0x501, 0x000000a2,
	0x502, 0x0000002f,
	0x503, 0x00000000,
	0x504, 0x00000028,
	0x505, 0x000000a3,
	0x506, 0x0000005e,
	0x507, 0x00000000,
	0x508, 0x0000002b,
	0x509, 0x000000a4,
	0x50a, 0x0000005e,
	0x50b, 0x00000000,
	0x50c, 0x0000004f,
	0x50d, 0x000000a4,
	0x50e, 0x00000000,
	0x50f, 0x00000000,
	0x512, 0x0000001c,
	0x514, 0x0000000a,
	0x515, 0x00000010,
	0x516, 0x0000000a,
	0x517, 0x00000010,
	0x51a, 0x00000016,
	0x524, 0x0000000f,
	0x525, 0x0000004f,
	0x546, 0x00000040,
	0x547, 0x00000000,
	0x550, 0x00000010,
	0x551, 0x00000010,
	0x559, 0x00000002,
	0x55a, 0x00000002,
	0x55d, 0x000000ff,
	0x605, 0x00000080,
	0x608, 0x0000000e,
	0x609, 0x0000002a,
	0x652, 0x00000020,
	0x63c, 0x0000000a,
	0x63d, 0x0000000a,
	0x63e, 0x0000000e,
	0x63f, 0x0000000e,
	0x66e, 0x00000005,
	0x700, 0x00000021,
	0x701, 0x00000043,
	0x702, 0x00000065,
	0x703, 0x00000087,
	0x708, 0x00000021,
	0x709, 0x00000043,
	0x70a, 0x00000065,
	0x70b, 0x00000087,
	0x024, 0x0000000d,
	0x025, 0x00000080,
	0x026, 0x00000011,
	0x027, 0x00000000,
	0x028, 0x00000083,
	0x029, 0x000000db,
	0x02a, 0x000000ff,
	0x02b, 0x00000000,
	0x014, 0x00000055,
	0x015, 0x000000a9,
	0x016, 0x0000008b,
	0x017, 0x00000008,
	0x010, 0x00000003,
	0x011, 0x0000002b,
	0x012, 0x00000002,
	0x013, 0x00000049,
};

const u32 rtl8192du_agctab_array[AGCTAB_ARRAYLENGTH] = {
	0xc78, 0x7b000001,
	0xc78, 0x7b010001,
	0xc78, 0x7b020001,
	0xc78, 0x7b030001,
	0xc78, 0x7b040001,
	0xc78, 0x7b050001,
	0xc78, 0x7b060001,
	0xc78, 0x7a070001,
	0xc78, 0x79080001,
	0xc78, 0x78090001,
	0xc78, 0x770a0001,
	0xc78, 0x760b0001,
	0xc78, 0x750c0001,
	0xc78, 0x740d0001,
	0xc78, 0x730e0001,
	0xc78, 0x720f0001,
	0xc78, 0x71100001,
	0xc78, 0x70110001,
	0xc78, 0x6f120001,
	0xc78, 0x6e130001,
	0xc78, 0x6d140001,
	0xc78, 0x6c150001,
	0xc78, 0x6b160001,
	0xc78, 0x6a170001,
	0xc78, 0x69180001,
	0xc78, 0x68190001,
	0xc78, 0x671a0001,
	0xc78, 0x661b0001,
	0xc78, 0x651c0001,
	0xc78, 0x641d0001,
	0xc78, 0x631e0001,
	0xc78, 0x621f0001,
	0xc78, 0x61200001,
	0xc78, 0x60210001,
	0xc78, 0x49220001,
	0xc78, 0x48230001,
	0xc78, 0x47240001,
	0xc78, 0x46250001,
	0xc78, 0x45260001,
	0xc78, 0x44270001,
	0xc78, 0x43280001,
	0xc78, 0x42290001,
	0xc78, 0x412a0001,
	0xc78, 0x402b0001,
	0xc78, 0x262c0001,
	0xc78, 0x252d0001,
	0xc78, 0x242e0001,
	0xc78, 0x232f0001,
	0xc78, 0x22300001,
	0xc78, 0x21310001,
	0xc78, 0x20320001,
	0xc78, 0x06330001,
	0xc78, 0x05340001,
	0xc78, 0x04350001,
	0xc78, 0x03360001,
	0xc78, 0x02370001,
	0xc78, 0x01380001,
	0xc78, 0x00390001,
	0xc78, 0x003a0001,
	0xc78, 0x003b0001,
	0xc78, 0x003c0001,
	0xc78, 0x003d0001,
	0xc78, 0x003e0001,
	0xc78, 0x003f0001,
	0xc78, 0x7b400001,
	0xc78, 0x7b410001,
	0xc78, 0x7a420001,
	0xc78, 0x79430001,
	0xc78, 0x78440001,
	0xc78, 0x77450001,
	0xc78, 0x76460001,
	0xc78, 0x75470001,
	0xc78, 0x74480001,
	0xc78, 0x73490001,
	0xc78, 0x724a0001,
	0xc78, 0x714b0001,
	0xc78, 0x704c0001,
	0xc78, 0x6f4d0001,
	0xc78, 0x6e4e0001,
	0xc78, 0x6d4f0001,
	0xc78, 0x6c500001,
	0xc78, 0x6b510001,
	0xc78, 0x6a520001,
	0xc78, 0x69530001,
	0xc78, 0x68540001,
	0xc78, 0x67550001,
	0xc78, 0x66560001,
	0xc78, 0x65570001,
	0xc78, 0x64580001,
	0xc78, 0x63590001,
	0xc78, 0x625a0001,
	0xc78, 0x615b0001,
	0xc78, 0x605c0001,
	0xc78, 0x485d0001,
	0xc78, 0x475e0001,
	0xc78, 0x465f0001,
	0xc78, 0x45600001,
	0xc78, 0x44610001,
	0xc78, 0x43620001,
	0xc78, 0x42630001,
	0xc78, 0x41640001,
	0xc78, 0x40650001,
	0xc78, 0x27660001,
	0xc78, 0x26670001,
	0xc78, 0x25680001,
	0xc78, 0x24690001,
	0xc78, 0x236a0001,
	0xc78, 0x226b0001,
	0xc78, 0x216c0001,
	0xc78, 0x206d0001,
	0xc78, 0x206e0001,
	0xc78, 0x206f0001,
	0xc78, 0x20700001,
	0xc78, 0x20710001,
	0xc78, 0x20720001,
	0xc78, 0x20730001,
	0xc78, 0x20740001,
	0xc78, 0x20750001,
	0xc78, 0x20760001,
	0xc78, 0x20770001,
	0xc78, 0x20780001,
	0xc78, 0x20790001,
	0xc78, 0x207a0001,
	0xc78, 0x207b0001,
	0xc78, 0x207c0001,
	0xc78, 0x207d0001,
	0xc78, 0x207e0001,
	0xc78, 0x207f0001,
	0xc78, 0x38000002,
	0xc78, 0x38010002,
	0xc78, 0x38020002,
	0xc78, 0x38030002,
	0xc78, 0x38040002,
	0xc78, 0x38050002,
	0xc78, 0x38060002,
	0xc78, 0x38070002,
	0xc78, 0x38080002,
	0xc78, 0x3c090002,
	0xc78, 0x3e0a0002,
	0xc78, 0x400b0002,
	0xc78, 0x440c0002,
	0xc78, 0x480d0002,
	0xc78, 0x4c0e0002,
	0xc78, 0x500f0002,
	0xc78, 0x52100002,
	0xc78, 0x56110002,
	0xc78, 0x5a120002,
	0xc78, 0x5e130002,
	0xc78, 0x60140002,
	0xc78, 0x60150002,
	0xc78, 0x60160002,
	0xc78, 0x62170002,
	0xc78, 0x62180002,
	0xc78, 0x62190002,
	0xc78, 0x621a0002,
	0xc78, 0x621b0002,
	0xc78, 0x621c0002,
	0xc78, 0x621d0002,
	0xc78, 0x621e0002,
	0xc78, 0x621f0002,
	0xc78, 0x32000044,
	0xc78, 0x32010044,
	0xc78, 0x32020044,
	0xc78, 0x32030044,
	0xc78, 0x32040044,
	0xc78, 0x32050044,
	0xc78, 0x32060044,
	0xc78, 0x34070044,
	0xc78, 0x35080044,
	0xc78, 0x36090044,
	0xc78, 0x370a0044,
	0xc78, 0x380b0044,
	0xc78, 0x390c0044,
	0xc78, 0x3a0d0044,
	0xc78, 0x3e0e0044,
	0xc78, 0x420f0044,
	0xc78, 0x44100044,
	0xc78, 0x46110044,
	0xc78, 0x4a120044,
	0xc78, 0x4e130044,
	0xc78, 0x50140044,
	0xc78, 0x55150044,
	0xc78, 0x5a160044,
	0xc78, 0x5e170044,
	0xc78, 0x64180044,
	0xc78, 0x6e190044,
	0xc78, 0x6e1a0044,
	0xc78, 0x6e1b0044,
	0xc78, 0x6e1c0044,
	0xc78, 0x6e1d0044,
	0xc78, 0x6e1e0044,
	0xc78, 0x6e1f0044,
	0xc78, 0x6e1f0000,
};

const u32 rtl8192du_agctab_5garray[AGCTAB_5G_ARRAYLENGTH] = {
	0xc78, 0x7b000001,
	0xc78, 0x7b010001,
	0xc78, 0x7a020001,
	0xc78, 0x79030001,
	0xc78, 0x78040001,
	0xc78, 0x77050001,
	0xc78, 0x76060001,
	0xc78, 0x75070001,
	0xc78, 0x74080001,
	0xc78, 0x73090001,
	0xc78, 0x720a0001,
	0xc78, 0x710b0001,
	0xc78, 0x700c0001,
	0xc78, 0x6f0d0001,
	0xc78, 0x6e0e0001,
	0xc78, 0x6d0f0001,
	0xc78, 0x6c100001,
	0xc78, 0x6b110001,
	0xc78, 0x6a120001,
	0xc78, 0x69130001,
	0xc78, 0x68140001,
	0xc78, 0x67150001,
	0xc78, 0x66160001,
	0xc78, 0x65170001,
	0xc78, 0x64180001,
	0xc78, 0x63190001,
	0xc78, 0x621a0001,
	0xc78, 0x611b0001,
	0xc78, 0x601c0001,
	0xc78, 0x481d0001,
	0xc78, 0x471e0001,
	0xc78, 0x461f0001,
	0xc78, 0x45200001,
	0xc78, 0x44210001,
	0xc78, 0x43220001,
	0xc78, 0x42230001,
	0xc78, 0x41240001,
	0xc78, 0x40250001,
	0xc78, 0x27260001,
	0xc78, 0x26270001,
	0xc78, 0x25280001,
	0xc78, 0x24290001,
	0xc78, 0x232a0001,
	0xc78, 0x222b0001,
	0xc78, 0x212c0001,
	0xc78, 0x202d0001,
	0xc78, 0x202e0001,
	0xc78, 0x202f0001,
	0xc78, 0x20300001,
	0xc78, 0x20310001,
	0xc78, 0x20320001,
	0xc78, 0x20330001,
	0xc78, 0x20340001,
	0xc78, 0x20350001,
	0xc78, 0x20360001,
	0xc78, 0x20370001,
	0xc78, 0x20380001,
	0xc78, 0x20390001,
	0xc78, 0x203a0001,
	0xc78, 0x203b0001,
	0xc78, 0x203c0001,
	0xc78, 0x203d0001,
	0xc78, 0x203e0001,
	0xc78, 0x203f0001,
	0xc78, 0x32000044,
	0xc78, 0x32010044,
	0xc78, 0x32020044,
	0xc78, 0x32030044,
	0xc78, 0x32040044,
	0xc78, 0x32050044,
	0xc78, 0x32060044,
	0xc78, 0x34070044,
	0xc78, 0x35080044,
	0xc78, 0x36090044,
	0xc78, 0x370a0044,
	0xc78, 0x380b0044,
	0xc78, 0x390c0044,
	0xc78, 0x3a0d0044,
	0xc78, 0x3e0e0044,
	0xc78, 0x420f0044,
	0xc78, 0x44100044,
	0xc78, 0x46110044,
	0xc78, 0x4a120044,
	0xc78, 0x4e130044,
	0xc78, 0x50140044,
	0xc78, 0x55150044,
	0xc78, 0x5a160044,
	0xc78, 0x5e170044,
	0xc78, 0x64180044,
	0xc78, 0x6e190044,
	0xc78, 0x6e1a0044,
	0xc78, 0x6e1b0044,
	0xc78, 0x6e1c0044,
	0xc78, 0x6e1d0044,
	0xc78, 0x6e1e0044,
	0xc78, 0x6e1f0044,
	0xc78, 0x6e1f0000,
};

const u32 rtl8192du_agctab_2garray[AGCTAB_2G_ARRAYLENGTH] = {
	0xc78, 0x7b000001,
	0xc78, 0x7b010001,
	0xc78, 0x7b020001,
	0xc78, 0x7b030001,
	0xc78, 0x7b040001,
	0xc78, 0x7b050001,
	0xc78, 0x7b060001,
	0xc78, 0x7a070001,
	0xc78, 0x79080001,
	0xc78, 0x78090001,
	0xc78, 0x770a0001,
	0xc78, 0x760b0001,
	0xc78, 0x750c0001,
	0xc78, 0x740d0001,
	0xc78, 0x730e0001,
	0xc78, 0x720f0001,
	0xc78, 0x71100001,
	0xc78, 0x70110001,
	0xc78, 0x6f120001,
	0xc78, 0x6e130001,
	0xc78, 0x6d140001,
	0xc78, 0x6c150001,
	0xc78, 0x6b160001,
	0xc78, 0x6a170001,
	0xc78, 0x69180001,
	0xc78, 0x68190001,
	0xc78, 0x671a0001,
	0xc78, 0x661b0001,
	0xc78, 0x651c0001,
	0xc78, 0x641d0001,
	0xc78, 0x631e0001,
	0xc78, 0x621f0001,
	0xc78, 0x61200001,
	0xc78, 0x60210001,
	0xc78, 0x49220001,
	0xc78, 0x48230001,
	0xc78, 0x47240001,
	0xc78, 0x46250001,
	0xc78, 0x45260001,
	0xc78, 0x44270001,
	0xc78, 0x43280001,
	0xc78, 0x42290001,
	0xc78, 0x412a0001,
	0xc78, 0x402b0001,
	0xc78, 0x262c0001,
	0xc78, 0x252d0001,
	0xc78, 0x242e0001,
	0xc78, 0x232f0001,
	0xc78, 0x22300001,
	0xc78, 0x21310001,
	0xc78, 0x20320001,
	0xc78, 0x06330001,
	0xc78, 0x05340001,
	0xc78, 0x04350001,
	0xc78, 0x03360001,
	0xc78, 0x02370001,
	0xc78, 0x01380001,
	0xc78, 0x00390001,
	0xc78, 0x003a0001,
	0xc78, 0x003b0001,
	0xc78, 0x003c0001,
	0xc78, 0x003d0001,
	0xc78, 0x003e0001,
	0xc78, 0x003f0001,
	0xc78, 0x38000002,
	0xc78, 0x38010002,
	0xc78, 0x38020002,
	0xc78, 0x38030002,
	0xc78, 0x38040002,
	0xc78, 0x38050002,
	0xc78, 0x38060002,
	0xc78, 0x38070002,
	0xc78, 0x38080002,
	0xc78, 0x3c090002,
	0xc78, 0x3e0a0002,
	0xc78, 0x400b0002,
	0xc78, 0x440c0002,
	0xc78, 0x480d0002,
	0xc78, 0x4c0e0002,
	0xc78, 0x500f0002,
	0xc78, 0x52100002,
	0xc78, 0x56110002,
	0xc78, 0x5a120002,
	0xc78, 0x5e130002,
	0xc78, 0x60140002,
	0xc78, 0x60150002,
	0xc78, 0x60160002,
	0xc78, 0x62170002,
	0xc78, 0x62180002,
	0xc78, 0x62190002,
	0xc78, 0x621a0002,
	0xc78, 0x621b0002,
	0xc78, 0x621c0002,
	0xc78, 0x621d0002,
	0xc78, 0x621e0002,
	0xc78, 0x621f0002,
	0xc78, 0x6e1f0000,
};
