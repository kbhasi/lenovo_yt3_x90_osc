/**
 * Copyright (c) 2010 - 2015, Intel Corporation.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
**/

#ifndef __FIFO_MONITOR_LOCAL_H_INCLUDED__
#define __FIFO_MONITOR_LOCAL_H_INCLUDED__

#include <stdbool.h>

#include "fifo_monitor_global.h"

#include <hive_isp_css_streaming_monitors_types_hrt.h>

#define HIVE_GP_REGS_SP_STREAM_STAT_IDX		HIVE_GP_REGS_SP_STREAM_STAT
#define HIVE_GP_REGS_ISP_STREAM_STAT_IDX	HIVE_GP_REGS_ISP_STREAM_STAT
#define HIVE_GP_REGS_MOD_STREAM_STAT_IDX	HIVE_GP_REGS_MOD_STREAM_STAT

#define	FIFO_CHANNEL_SP_VALID_MASK	0x55555555
#define	FIFO_CHANNEL_ISP_VALID_MASK	0x00555555
#define	FIFO_CHANNEL_MOD_VALID_MASK	0x00055555

typedef enum {
	FIFO_SWITCH_IF,
	FIFO_SWITCH_DMA,
	FIFO_SWITCH_GDC,
	N_FIFO_SWITCH
} fifo_switch_t;

typedef enum {
	FIFO_CHANNEL_ISP0_TO_SP0,
	FIFO_CHANNEL_SP0_TO_ISP0,
	FIFO_CHANNEL_ISP0_TO_IF0,
	FIFO_CHANNEL_IF0_TO_ISP0,
	FIFO_CHANNEL_ISP0_TO_IF1,
	FIFO_CHANNEL_IF1_TO_ISP0,
	FIFO_CHANNEL_ISP0_TO_DMA0,
	FIFO_CHANNEL_DMA0_TO_ISP0,
	FIFO_CHANNEL_ISP0_TO_GDC0,
	FIFO_CHANNEL_GDC0_TO_ISP0,
	FIFO_CHANNEL_ISP0_TO_HOST0,
	FIFO_CHANNEL_HOST0_TO_ISP0,
	FIFO_CHANNEL_SP0_TO_IF0,
	FIFO_CHANNEL_IF0_TO_SP0,
	FIFO_CHANNEL_SP0_TO_IF1,
	FIFO_CHANNEL_IF1_TO_SP0,
	FIFO_CHANNEL_SP0_TO_IF2,
	FIFO_CHANNEL_IF2_TO_SP0,
	FIFO_CHANNEL_SP0_TO_DMA0,
	FIFO_CHANNEL_DMA0_TO_SP0,
	FIFO_CHANNEL_SP0_TO_GDC0,
	FIFO_CHANNEL_GDC0_TO_SP0,
	FIFO_CHANNEL_SP0_TO_HOST0,
	FIFO_CHANNEL_HOST0_TO_SP0,
	FIFO_CHANNEL_SP0_TO_STREAM2MEM0,
	FIFO_CHANNEL_STREAM2MEM0_TO_SP0,
	N_FIFO_CHANNEL
} fifo_channel_t;

struct fifo_channel_state_s {
	bool	src_valid;
	bool	fifo_accept;
	bool	fifo_valid;
	bool	sink_accept;
};

/* The switch is tri-state */
struct fifo_switch_state_s {
	bool	is_none;
	bool	is_isp;
	bool	is_sp;
};

struct fifo_monitor_state_s {
	struct fifo_channel_state_s	fifo_channels[N_FIFO_CHANNEL];
	struct fifo_switch_state_s	fifo_switches[N_FIFO_SWITCH];
};

#endif /* __FIFO_MONITOR_LOCAL_H_INCLUDED__ */
