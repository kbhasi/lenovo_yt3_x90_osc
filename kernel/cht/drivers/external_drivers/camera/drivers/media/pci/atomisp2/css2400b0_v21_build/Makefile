#
#  Copyright (c) 2010 - 2015, Intel Corporation.
#
#  This program is free software; you can redistribute it and/or modify it
#  under the terms and conditions of the GNU General Public License,
#  version 2, as published by the Free Software Foundation.
#
#  This program is distributed in the hope it will be useful, but WITHOUT
#  ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
#  FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
#  more details.
#

ccflags-y += -DATOMISP_POSTFIX=\"css2400b0_v21\" -DISP2400B0
ISP2400B0 := y
postfix := css2400b0_v21

ifeq ($(CONFIG_EXTERNAL_BTNS_CAMERA),y)
ccflags-y += -DATOMISP_FWNAME=\"shisp_merr.bin\"
endif

include $(srctree)/$(src)/../Makefile.common
