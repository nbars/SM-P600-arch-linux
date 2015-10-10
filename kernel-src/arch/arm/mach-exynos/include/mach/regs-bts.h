#ifndef __ASM_ARCH_REGS_BTS_H
#define __ASM_ARCH_REGS_BTS_H

#include <mach/map.h>
/*
 * Register part
 */

#define READ_QOS_CONTROL			0x0100
#define READ_QOS_MODE				0x0104
#define READ_CHANNEL_PRIORITY			0x0200
#define READ_TOKEN_MAX_VALUE			0x0204
#define READ_BW_UPPER_BOUNDARY			0x020C
#define READ_BW_LOWER_BOUNDARY			0x0210
#define READ_INITIAL_TOKEN_VALUE		0x0214
#define READ_DEMOTION_WINDOW			0x0220
#define READ_DEMOTION_TOKEN			0x0224
#define READ_DEFAULT_WINDOW			0x0228
#define READ_DEFAULT_TOKEN			0x022C
#define READ_PROMOTION_WINDOW			0X0230
#define READ_PROMOTION_TOKEN			0x0234
#define READ_ISSUE_CAPABILITY_UPPER_BOUNDARY	0x0240
#define READ_ISSUE_CAPABILITY_LOWER_BOUNDARY	0x0244
#define READ_FLEXIBLE_BLOCKING_CONTROL		0x0280
#define READ_FLEXIBLE_BLOCKING_POLARITY		0x0284

#define WRITE_QOS_CONTROL			0x0180
#define WRITE_QOS_MODE				0x0184
#define WRITE_CHANNEL_PRIORITY			0x0300
#define WRITE_TOKEN_MAX_VALUE			0x0304
#define WRITE_BW_UPPER_BOUNDARY			0x030C
#define WRITE_BW_LOWER_BOUNDARY			0x0310
#define WRITE_INITIAL_TOKEN_VALUE		0x0314
#define WRITE_DEMOTION_WINDOW			0x0320
#define WRITE_DEMOTION_TOKEN			0x0324
#define WRITE_DEFAULT_WINDOW			0x0328
#define WRITE_DEFAULT_TOKEN			0x032C
#define WRITE_PROMOTION_WINDOW			0X0330
#define WRITE_PROMOTION_TOKEN			0x0334
#define WRITE_ISSUE_CAPABILITY_UPPER_BOUNDARY	0x0340
#define WRITE_ISSUE_CAPABILITY_LOWER_BOUNDARY	0x0344
#define WRITE_FLEXIBLE_BLOCKING_CONTROL		0x0380
#define WRITE_FLEXIBLE_BLOCKING_POLARITY	0x0384

#define FBM_MODESEL0		0x00
#define FBM_MODESEL1		0x04
#define FBM_MODESEL2		0x08
#define FBM_THRESHOLD0		0x40
#define FBM_THRESHOLD1		0x44
#define FBM_THRESHOLD2		0x48
#define FBM_OUTSEL0		0x80
#define FBM_OUTSEL2		0x88
#define FBM_OUTSEL20		0xD0

#endif /* __ASM_ARCH_REGS_BTS_H */
