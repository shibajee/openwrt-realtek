/*
 *  Realtek RLX based SoC identification definitions
 *
 *  Copyright (C) 2017 Weijie Gao <hackpascal@gmail.com>
 *
 *  This program is free software; you can redistribute it and/or modify it
 *  under the terms of the GNU General Public License version 2 as published
 *  by the Free Software Foundation.
 */

#ifndef __ASM_MACH_REALTEK_H
#define __ASM_MACH_REALTEK_H

#include <linux/types.h>
#include <linux/io.h>

enum realtek_soc_type {
	RTL_SOC_UNKNOWN,
	RTL_SOC_8196E,
};

extern enum realtek_soc_type rtl_soc;

static inline int soc_is_rtl8196e(void)
{
	return (rtl_soc == RTL_SOC_8196E);
}

#endif /* __ASM_MACH_REALTEK_H */
