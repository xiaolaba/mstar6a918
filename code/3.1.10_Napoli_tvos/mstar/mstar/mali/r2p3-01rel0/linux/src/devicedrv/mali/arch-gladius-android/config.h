/*
 * Copyright (C) 2011 MStar Semiconductor, Inc. All rights reserved.
 * 
 * This program is free software and is provided to you under the terms of the GNU General Public License version 2
 * as published by the Free Software Foundation, and any use by you of this program is subject to the terms of such GNU licence.
 * 
 * A copy of the licence is included with the program, and can also be obtained from Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef __ARCH_CONFIG_H__
#define __ARCH_CONFIG_H__

/* Configuration for Gladius Android platform */

#define MALI_CORE_BASE(offset)      (0xE5320000 + (offset))
#define MALI_IRQ                    (126)


static _mali_osk_resource_t arch_configuration [] =
{
	/* Ensure the PMU resource is the first resource in the file. */
	{
		.type = PMU,
		.description = "Mali-400 PMU",
		.base = MALI_CORE_BASE(0x2000),
		.irq = MALI_IRQ,
		.mmu_id = 0
	},
	{
		.type = MALI400GP,
		.description = "Mali-400 GP",
		.base = MALI_CORE_BASE(0x0000),
		.irq = MALI_IRQ,
		.mmu_id = 1
	},
	{
		.type = MALI400PP,
		.base = MALI_CORE_BASE(0x8000),
		.irq = MALI_IRQ,
		.description = "Mali-400 PP 0",
		.mmu_id = 2
	},
#if USING_MMU
	{
		.type = MMU,
		.base = MALI_CORE_BASE(0x3000),
		.irq = MALI_IRQ,
		.description = "Mali-400 MMU for GP",
		.mmu_id = 1
	},
	{
		.type = MMU,
		.base = MALI_CORE_BASE(0x4000),
		.irq = MALI_IRQ,
		.description = "Mali-400 MMU for PP 0",
		.mmu_id = 2
	},
#endif
	{
		.type = MEM_VALIDATION,
		.description = "Framebuffer - PMEM",
		.base = 0x00C02000,
		.size = 0x14BFE000,
		.flags = _MALI_CPU_WRITEABLE | _MALI_CPU_READABLE | _MALI_PP_WRITEABLE | _MALI_PP_READABLE
	},
	{
		.type = MALI400L2,
		.base = MALI_CORE_BASE(0x1000),
		.description = "Mali-400 L2 cache"
	},
#if USING_MMU
    {
        .type = OS_MEMORY,
        .description = "Mali Memory",
        .base = 0x00000000,     /* don't care */
        .size = 0x04000000,     /* 64MB */
        .cpu_usage_adjust = 0x00000000,
        .flags = _MALI_CPU_READABLE | _MALI_CPU_WRITEABLE | _MALI_MMU_READABLE | _MALI_MMU_WRITEABLE
    }
#else
#pragma warning "USING_MMU not defined"
    {
        .type = MEMORY,
        .description = "Mali Memory",
        .base = 0x90000000,
        .size = 0x04000000,
        .cpu_usage_adjust = 0x00000000,
        .flags = _MALI_CPU_WRITEABLE | _MALI_CPU_READABLE | _MALI_PP_READABLE | _MALI_PP_WRITEABLE |_MALI_GP_READABLE | _MALI_GP_WRITEABLE
    }
#endif

};

#endif /* __ARCH_CONFIG_H__ */
