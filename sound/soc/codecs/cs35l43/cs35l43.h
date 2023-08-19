/* SPDX-License-Identifier: GPL-2.0 */

/************************************************/
/* Software Reset and Hardware ID		*/
/************************************************/
#define CS35L43_DEVID				0x0000000
#define CS35L43_REVID				0x0000004
#define CS35L43_FABID				0x0000008
#define CS35L43_RELID				0x000000C
#define CS35L43_OTPID				0x0000010
#define CS35L43_SFT_RESET			0x0000020

/************************************************/
/* Test Register Access				*/
/************************************************/
#define CS35L43_TEST_KEY_CTRL			0x0000040
#define CS35L43_USER_KEY_CTRL			0x0000044

/************************************************/
/* CTRL_ASYNC					*/
/************************************************/
#define CS35L43_CTRL_ASYNC0			0x0000050
#define CS35L43_CTRL_ASYNC1			0x0000054
#define CS35L43_CTRL_ASYNC2			0x0000058
#define CS35L43_CTRL_ASYNC3			0x000005C

/************************************************/
/* Control Interface Configuration		*/
/************************************************/
#define CS35L43_CTRL_IF_CONFIG1			0x0000100
#define CS35L43_CTRL_IF_STATUS1			0x0000104
#define CS35L43_CTRL_IF_STATUS2			0x0000108
#define CS35L43_CTRL_IF_CONFIG2			0x0000110
#define CS35L43_CTRL_IF_DEBUG1			0x0000120
#define CS35L43_CTRL_IF_DEBUG2			0x0000124
#define CS35L43_CTRL_IF_DEBUG3			0x0000128
#define CS35L43_CIF_MON1			0x0000140
#define CS35L43_CIF_MON2			0x0000144
#define CS35L43_CIF_MON_PADDR			0x0000148
#define CS35L43_CTRL_IF_SPARE1			0x0000154
#define CS35L43_CTRL_IF_I2C			0x0000158
#define CS35L43_CTRL_IF_I2C_1_CONTROL		0x0000160
#define CS35L43_CTRL_IF_I2C_1_BROADCAST		0x0000164
#define CS35L43_APB_MSTR_DSP_BRIDGE_ERR		0x0000174
#define CS35L43_CIF1_BRIDGE_ERR			0x0000178
#define CS35L43_CIF2_BRIDGE_ERR			0x000017C

/************************************************/
/* OTP_IF_MEM					*/
/************************************************/
#define CS35L43_OTP_MEM0			0x0000400
#define CS35L43_OTP_MEM31			0x000047C

/************************************************/
/* One-Time Programmable (OTP) Control		*/
/************************************************/
#define CS35L43_OTP_CTRL0			0x0000500
#define CS35L43_OTP_CTRL1			0x0000504
#define CS35L43_OTP_CTRL3			0x0000508
#define CS35L43_OTP_CTRL4			0x000050C
#define CS35L43_OTP_CTRL5			0x0000510
#define CS35L43_OTP_CTRL6			0x0000514
#define CS35L43_OTP_CTRL7			0x0000518
#define CS35L43_OTP_CTRL8			0x000051C

/************************************************/
/* Power, Global, and Release Control		*/
/************************************************/
#define CS35L43_DEVICE_ID			0x0002004
#define CS35L43_FAB_ID				0x0002008
#define CS35L43_REV_ID				0x000200C
#define CS35L43_GLOBAL_ENABLES			0x0002014
#define CS35L43_BLOCK_ENABLES			0x0002018
#define CS35L43_BLOCK_ENABLES2			0x000201C
#define CS35L43_GLOBAL_OVERRIDES		0x0002020
#define CS35L43_GLOBAL_SYNC			0x0002024
#define CS35L43_GLOBAL_STATUS			0x0002028
#define CS35L43_DISCH_FILT			0x000202C
#define CS35L43_OSC_TRIM			0x0002030
#define CS35L43_ERROR_RELEASE			0x0002034
#define CS35L43_PLL_OVERRIDE			0x0002038
#define CS35L43_CHIP_STATUS			0x0002040
#define CS35L43_CHIP_STATUS2			0x0002044

/************************************************/
/* Digital I/O Pad Control			*/
/************************************************/
#define CS35L43_LRCK_PAD_CONTROL		0x0002418
#define CS35L43_SCLK_PAD_CONTROL		0x000241C
#define CS35L43_SDIN_PAD_CONTROL		0x0002420
#define CS35L43_SDOUT_PAD_CONTROL		0x0002424
#define CS35L43_GPIO_PAD_CONTROL		0x000242C
#define CS35L43_GPIO_GLOBAL_ENABLE_CONTROL	0x0002440

/************************************************/
/* Hibernation Power Management			 */
/************************************************/
#define CS35L43_PWRMGT_CTL			0x0002900
#define CS35L43_WAKESRC_CTL			0x0002904
#define CS35L43_WAKEI2C_CTL			0x0002908
#define CS35L43_PWRMGT_STS			0x000290C
#define CS35L43_PWRMGT_RST			0x0002910
#define CS35L43_TEST_CTL			0x0002914

/************************************************/
/* Device Clocking and Sample Rate Control	*/
/************************************************/
#define CS35L43_REFCLK_INPUT			0x0002C04
#define CS35L43_DSP_CLOCK_GEARING		0x0002C08
#define CS35L43_GLOBAL_SAMPLE_RATE		0x0002C0C
#define CS35L43_FS_MON_0			0x0002D10
#define CS35L43_DSP1_SAMPLE_RATE_RX1		0x0002D3C
#define CS35L43_DSP1_SAMPLE_RATE_RX2		0x0002D40
#define CS35L43_DSP1_SAMPLE_RATE_TX1		0x0002D60
#define CS35L43_DSP1_SAMPLE_RATE_TX2		0x0002D64

/************************************************/
/* Multidevice Synchronization			*/
/************************************************/
#define CS35L43_SYNC_TX_RX_ENABLES		0x0003400

/************************************************/
/* Digital Boost Converter			*/
/************************************************/
#define CS35L43_VBST_CTL_1			0x0003800
#define CS35L43_VBST_CTL_2			0x0003804
#define CS35L43_BST_IPK_CTL			0x0003808
#define CS35L43_SOFT_RAMP			0x000380C
#define CS35L43_BST_LOOP_COEFF			0x0003810
#define CS35L43_LBST_SLOPE			0x0003814
#define CS35L43_BST_SW_FREQ			0x0003818
#define CS35L43_BST_DCM_CTL			0x000381C
#define CS35L43_DCM_FORCE			0x0003820
#define CS35L43_VBST_OVP			0x0003830

/************************************************/
/* VMON and IMON Signal Monitoring		*/
/************************************************/
#define CS35L43_MONITOR_FILT			0x0004008

/************************************************/
/* Die Temperature Monitoring			*/
/************************************************/
#define CS35L43_WARN_LIMIT_THRESHOLD		0x0004220
#define CS35L43_CONFIGURATION			0x0004224
#define CS35L43_STATUS				0x0004300
#define CS35L43_ENABLES_AND_CODES_ANA		0x0004304
#define CS35L43_ENABLES_AND_CODES_DIG		0x0004308

/************************************************/
/* ASP Data Interface				*/
/************************************************/
#define CS35L43_ASP_ENABLES1			0x0004800
#define CS35L43_ASP_CONTROL1			0x0004804
#define CS35L43_ASP_CONTROL2			0x0004808
#define CS35L43_ASP_CONTROL3			0x000480C
#define CS35L43_ASP_FRAME_CONTROL1		0x0004810
#define CS35L43_ASP_FRAME_CONTROL5		0x0004820
#define CS35L43_ASP_DATA_CONTROL1		0x0004830
#define CS35L43_ASP_DATA_CONTROL5		0x0004840

/************************************************/
/* Data Routing					*/
/************************************************/
#define CS35L43_DACPCM1_INPUT			0x0004C00
#define CS35L43_DACPCM2_INPUT			0x0004C08
#define CS35L43_ASPTX1_INPUT			0x0004C20
#define CS35L43_ASPTX2_INPUT			0x0004C24
#define CS35L43_ASPTX3_INPUT			0x0004C28
#define CS35L43_ASPTX4_INPUT			0x0004C2C
#define CS35L43_DSP1RX1_INPUT			0x0004C40
#define CS35L43_DSP1RX2_INPUT			0x0004C44
#define CS35L43_DSP1RX3_INPUT			0x0004C48
#define CS35L43_DSP1RX4_INPUT			0x0004C4C
#define CS35L43_DSP1RX5_INPUT			0x0004C50
#define CS35L43_DSP1RX6_INPUT			0x0004C54
#define CS35L43_NGATE1_INPUT			0x0004C60
#define CS35L43_NGATE2_INPUT			0x0004C64

/************************************************/
/* Amplifier Volume Control			*/
/************************************************/
#define CS35L43_AMP_CTRL			0x0006000
#define CS35L43_HPF_TST				0x0006004
#define CS35L43_VC_TST1				0x0006008
#define CS35L43_VC_TST2				0x000600C
#define CS35L43_INTP_TST			0x0006010

/************************************************/
/* SRC_MAGCOMP					*/
/************************************************/
#define CS35L43_SRC_MAGCOMP_TST			0x0006200
#define CS35L43_SRC_MAGCOMP_B0_OVERRIDE		0x0006204
#define CS35L43_SRC_MAGCOMP_B1_OVERRIDE		0x0006208
#define CS35L43_SRC_MAGCOMP_A1_N_OVERRIDE	0x000620C

/************************************************/
/* VP and VBST Brownout Prevention + Temp Warning */
/************************************************/
#define CS35L43_VPBR_CONFIG			0x0006404
#define CS35L43_VBBR_CONFIG			0x0006408
#define CS35L43_VPBR_STATUS			0x000640C
#define CS35L43_VBBR_STATUS			0x0006410
#define CS35L43_OTW_CONFIG			0x0006414
#define CS35L43_AMP_ERROR_VOL_SEL		0x0006418
#define CS35L43_VOL_STATUS_TO_DSP		0x0006450

/************************************************/
/* Power Management - Class H, Weak-FET, and Noise Gating */
/************************************************/
#define CS35L43_CLASSH_CONFIG			0x0006800
#define CS35L43_WKFET_AMP_CONFIG		0x0006804
#define CS35L43_NG_CONFIG			0x0006808

/************************************************/
/* Dynamic Range Enhancement			*/
/************************************************/
#define CS35L43_AMP_GAIN			0x0006C04

/************************************************/
/* Diagnostic Signal Generator			*/
/************************************************/
#define CS35L43_DAC_MSM_CONFIG			0x0007400
#define CS35L43_ALIVE_DCIN_WD			0x0007424

/************************************************/
/* Interrupt Status and Mask Control		*/
/************************************************/
#define CS35L43_IRQ1_CFG			0x0010000
#define CS35L43_IRQ1_STATUS			0x0010004
#define CS35L43_IRQ1_EINT_1			0x0010010
#define CS35L43_IRQ1_EINT_2			0x0010014
#define CS35L43_IRQ1_EINT_3			0x0010018
#define CS35L43_IRQ1_EINT_4			0x001001C
#define CS35L43_IRQ1_EINT_5			0x0010020
#define CS35L43_IRQ1_STS_1			0x0010090
#define CS35L43_IRQ1_STS_2			0x0010094
#define CS35L43_IRQ1_STS_3			0x0010098
#define CS35L43_IRQ1_STS_4			0x001009C
#define CS35L43_IRQ1_STS_5			0x00100A0
#define CS35L43_IRQ1_MASK_1			0x0010110
#define CS35L43_IRQ1_MASK_2			0x0010114
#define CS35L43_IRQ1_MASK_3			0x0010118
#define CS35L43_IRQ1_MASK_4			0x001011C
#define CS35L43_IRQ1_MASK_5			0x0010120
#define CS35L43_IRQ1_FRC_1			0x0010190
#define CS35L43_IRQ1_FRC_2			0x0010194
#define CS35L43_IRQ1_FRC_3			0x0010198
#define CS35L43_IRQ1_FRC_4			0x001019C
#define CS35L43_IRQ1_FRC_5			0x00101A0
#define CS35L43_IRQ1_EDGE_1			0x0010210
#define CS35L43_IRQ1_EDGE_4			0x001021C
#define CS35L43_IRQ1_POL_1			0x0010290
#define CS35L43_IRQ1_POL_2			0x0010294
#define CS35L43_IRQ1_POL_3			0x0010298
#define CS35L43_IRQ1_POL_4			0x001029C
#define CS35L43_IRQ1_DB_2			0x0010314

/************************************************/
/* GPIO Control					*/
/************************************************/
#define CS35L43_GPIO_STATUS1			0x0011000
#define CS35L43_GPIO_FORCE			0x0011004
#define CS35L43_GPIO1_CTRL1			0x0011008
#define CS35L43_GPIO2_CTRL1			0x001100C
#define CS35L43_GPIO3_CTRL1			0x0011010
#define CS35L43_GPIO4_CTRL1			0x0011014

/************************************************/
/* DSP Noise Gate Control			*/
/************************************************/
#define CS35L43_MIXER_NGATE_CFG			0x0012000
#define CS35L43_MIXER_NGATE_CH1_CFG		0x0012004
#define CS35L43_MIXER_NGATE_CH2_CFG		0x0012008

/************************************************/
/* DSP scratch space				*/
/************************************************/
#define CS35L43_DSP_MBOX_1			0x0013000
#define CS35L43_DSP_MBOX_2			0x0013004
#define CS35L43_DSP_MBOX_3			0x0013008
#define CS35L43_DSP_MBOX_4			0x001300C
#define CS35L43_DSP_MBOX_5			0x0013010
#define CS35L43_DSP_MBOX_6			0x0013014
#define CS35L43_DSP_MBOX_7			0x0013018
#define CS35L43_DSP_MBOX_8			0x001301C

/************************************************/
/* DSP virtual 1 scratch space			*/
/************************************************/
#define CS35L43_DSP_VIRTUAL1_MBOX_1		0x0013020
#define CS35L43_DSP_VIRTUAL1_MBOX_2		0x0013024
#define CS35L43_DSP_VIRTUAL1_MBOX_3		0x0013028
#define CS35L43_DSP_VIRTUAL1_MBOX_4		0x001302C
#define CS35L43_DSP_VIRTUAL1_MBOX_5		0x0013030
#define CS35L43_DSP_VIRTUAL1_MBOX_6		0x0013034
#define CS35L43_DSP_VIRTUAL1_MBOX_7		0x0013038
#define CS35L43_DSP_VIRTUAL1_MBOX_8		0x001303C

/************************************************/
/* DSP virtual 2 scratch space			*/
/************************************************/
#define CS35L43_DSP_VIRTUAL2_MBOX_1		0x0013040
#define CS35L43_DSP_VIRTUAL2_MBOX_2		0x0013044
#define CS35L43_DSP_VIRTUAL2_MBOX_3		0x0013048
#define CS35L43_DSP_VIRTUAL2_MBOX_4		0x001304C
#define CS35L43_DSP_VIRTUAL2_MBOX_5		0x0013050
#define CS35L43_DSP_VIRTUAL2_MBOX_6		0x0013054
#define CS35L43_DSP_VIRTUAL2_MBOX_7		0x0013058
#define CS35L43_DSP_VIRTUAL2_MBOX_8		0x001305C

/************************************************/
/* Halo X Memory 				*/
/************************************************/
#define CS35L43_DSP1_XMEM_PACKED_0		0x2000000
#define CS35L43_DSP1_XMEM_PACKED_6143		0x2005FFC
#define CS35L43_DSP1_XMEM_UNPACKED32_0		0x2400000
#define CS35L43_DSP1_XMEM_UNPACKED32_4095	0x2403FFC
#define CS35L43_DSP1_XMEM_UNPACKED24_0		0x2800000
#define CS35L43_DSP1_XMEM_UNPACKED24_8191	0x2807FFC

#define CS35L43_DSP1_XROM_UNPACKED24_0		0x2808000
#define CS35L43_DSP1_XROM_UNPACKED24_6141	0x280DFF4

/************************************************/
/* Halo Control 				*/
/************************************************/
#define CS35L43_DSP1_SYS_INFO_ID		0x25E0000
#define CS35L43_DSP1_CLOCK_FREQ			0x2B80000
#define CS35L43_DSP1_SCRATCH1			0x2B805C0
#define CS35L43_DSP1_SCRATCH2			0x2B805C8
#define CS35L43_DSP1_SCRATCH3			0x2B805D0
#define CS35L43_DSP1_SCRATCH4			0x2B805D8
#define CS35L43_DSP1_CCM_CORE_CONTROL		0x2BC1000

/************************************************/
/* Halo Y Memory 				*/
/************************************************/
#define CS35L43_DSP1_YMEM_PACKED_0		0x2C00000
#define CS35L43_DSP1_YMEM_PACKED_1532		0x2C017F0
#define CS35L43_DSP1_YMEM_UNPACKED32_0		0x3000000
#define CS35L43_DSP1_YMEM_UNPACKED32_1022	0x3000FF8
#define CS35L43_DSP1_YMEM_UNPACKED24_0		0x3400000
#define CS35L43_DSP1_YMEM_UNPACKED24_2045	0x3401FF4

/************************************************/
/* Halo P Memory 				*/
/************************************************/
#define CS35L43_DSP1_PMEM_0			0x3800000
#define CS35L43_DSP1_PMEM_5114			0x3804FE8

/* #####################################################*/
/* Fields						*/
/* #####################################################*/

/************************************************/
/* Power Control 2				*/
/************************************************/
#define CS35L43_IMON_EN_MASK			0x00002000
#define CS35L43_IMON_EN_SHIFT			13
#define CS35L43_IMON_EN_WIDTH			1
#define CS35L43_VMON_EN_MASK			0x00001000
#define CS35L43_VMON_EN_SHIFT			12
#define CS35L43_VMON_EN_WIDTH			1
#define CS35L43_TEMPMON_EN_MASK			0x00000400
#define CS35L43_TEMPMON_EN_SHIFT		10
#define CS35L43_TEMPMON_EN_WIDTH		1
#define CS35L43_VBSTMON_EN_MASK			0x00000200
#define CS35L43_VBSTMON_EN_SHIFT		9
#define CS35L43_VBSTMON_EN_WIDTH		1
#define CS35L43_VPMON_EN_MASK			0x00000100
#define CS35L43_VPMON_EN_SHIFT			8
#define CS35L43_VPMON_EN_WIDTH			1
#define CS35L43_BST_EN_MASK			0x00000030
#define CS35L43_BST_EN_SHIFT			4
#define CS35L43_BST_EN_WIDTH			2
#define CS35L43_AMP_EN_MASK			0x00000001
#define CS35L43_AMP_EN_SHIFT			0
#define CS35L43_AMP_EN_WIDTH			1
#define CS35L43_BST_EN_DEFAULT			2


/************************************************/
/* Power Control 3				*/
/************************************************/
#define CS35L43_WKFET_AMP_EN_MASK		0x01000000
#define CS35L43_WKFET_AMP_EN_SHIFT		24
#define CS35L43_AMP_DRE_EN_MASK			0x00100000
#define CS35L43_AMP_DRE_EN_SHIFT		20
#define CS35L43_VPI_LIM_EN_MASK			0x00010000
#define CS35L43_VPI_LIM_EN_SHIFT		16
#define CS35L43_VBBR_EN_MASK			0x00002000
#define CS35L43_VBBR_EN_SHIFT			13
#define CS35L43_VPBR_EN_MASK			0x00001000
#define CS35L43_VPBR_EN_SHIFT			12
#define CS35L43_SYNC_EN_MASK			0x00000100
#define CS35L43_SYNC_EN_SHIFT			8
#define CS35L43_CLASSH_EN_MASK			0x00000010
#define CS35L43_CLASSH_EN_SHIFT			4

/************************************************/
/* Hibernation Control                          */
/************************************************/
#define CS35L43_MEM_RDY				0x00000002

/************************************************/
/* Global Clocking Control			*/
/************************************************/
#define CS35L43_GLOBAL_FS_MASK			0x0000001F
#define CS35L43_GLOBAL_FS_SHIFT			0
#define CS35L43_GLOBAL_FS_WIDTH			5
#define CS35L43_FS1_START_WINDOW_MASK		0x00000FFF
#define CS35L43_FS2_START_WINDOW_SHIFT		12
#define CS35L43_FS2_START_WINDOW_MASK		0x00FFF000

/************************************************/
/* PLL Clocking Control				*/
/************************************************/
#define CS35L43_PLL_FORCE_EN_MASK		0x00010000
#define CS35L43_PLL_FORCE_EN_SHIFT		16
#define CS35L43_PLL_FORCE_EN_WIDTH		1
#define CS35L43_PLL_OPEN_LOOP_MASK		0x00000800
#define CS35L43_PLL_OPEN_LOOP_SHIFT		11
#define CS35L43_PLL_OPEN_LOOP_WIDTH		1
#define CS35L43_PLL_REFCLK_FREQ_MASK		0x000007E0
#define CS35L43_PLL_REFCLK_FREQ_SHIFT		5
#define CS35L43_PLL_REFCLK_FREQ_WIDTH		6
#define CS35L43_PLL_REFCLK_EN_MASK		0x00000010
#define CS35L43_PLL_REFCLK_EN_SHIFT		4
#define CS35L43_PLL_REFCLK_EN_WIDTH		1
#define CS35L43_PLL_REFCLK_SEL_MASK		0x00000007
#define CS35L43_PLL_REFCLK_SEL_SHIFT		0
#define CS35L43_PLL_REFCLK_SEL_WIDTH		3

/************************************************/
/* GPIO Pad Interface Control			*/
/************************************************/
#define CS35L43_GP2_CTRL_MASK			0x07000000
#define CS35L43_GP2_CTRL_SHIFT			24
#define CS35L43_GP1_CTRL_MASK			0x00070000
#define CS35L43_GP1_CTRL_SHIFT			16

/************************************************/
/* GPIO_GPIO1_CTRL1				*/
/************************************************/
#define CS35L43_GP1_DIR_MASK			0x80000000
#define CS35L43_GP1_DIR_SHIFT			31
#define CS35L43_GP1_DBTIME_MASK			0x000F0000
#define CS35L43_GP1_DBTIME_SHIFT		16
#define CS35L43_GP1_LVL_MASK			0x00008000
#define CS35L43_GP1_LVL_SHIFT			15
#define CS35L43_GP1_DB_MASK			0x00002000
#define CS35L43_GP1_DB_SHIFT			13
#define CS35L43_GP1_POL_MASK			0x00001000
#define CS35L43_GP1_POL_SHIFT			12
#define CS35L43_GP1_FN_MASK			0x0000007F
#define CS35L43_GP1_FN_SHIFT			0

/************************************************/
/* GPIO_GPIO2_CTRL1				*/
/************************************************/
#define CS35L43_GP2_DIR_MASK			0x80000000
#define CS35L43_GP2_DIR_SHIFT			31
#define CS35L43_GP2_DBTIME_MASK			0x000F0000
#define CS35L43_GP2_DBTIME_SHIFT		16
#define CS35L43_GP2_LVL_MASK			0x00008000
#define CS35L43_GP2_LVL_SHIFT			15
#define CS35L43_GP2_DB_MASK			0x00002000
#define CS35L43_GP2_DB_SHIFT			13
#define CS35L43_GP2_POL_MASK			0x00001000
#define CS35L43_GP2_POL_SHIFT			12
#define CS35L43_GP2_FN_MASK			0x0000007F
#define CS35L43_GP2_FN_SHIFT			0

#define CS35L43_GP2_CTRL_OPEN_DRAIN_ACTV_LO	2
#define CS35L43_GP2_CTRL_PUSH_PULL_ACTV_LO	4
#define CS35L43_GP2_CTRL_PUSH_PULL_ACTV_HI	5

/************************************************/
/* DATAIF_ASP_ENABLES1				*/
/************************************************/
#define CS35L43_ASP_RX3_EN_MASK			0x00040000
#define CS35L43_ASP_RX3_EN_SHIFT		18
#define CS35L43_ASP_RX3_EN_WIDTH		1
#define CS35L43_ASP_RX2_EN_MASK			0x00020000
#define CS35L43_ASP_RX2_EN_SHIFT		17
#define CS35L43_ASP_RX2_EN_WIDTH		1
#define CS35L43_ASP_RX1_EN_MASK			0x00010000
#define CS35L43_ASP_RX1_EN_SHIFT		16
#define CS35L43_ASP_RX1_EN_WIDTH		1
#define CS35L43_ASP_TX4_EN_MASK			0x00000008
#define CS35L43_ASP_TX4_EN_SHIFT		3
#define CS35L43_ASP_TX4_EN_WIDTH		1
#define CS35L43_ASP_TX3_EN_MASK			0x00000004
#define CS35L43_ASP_TX3_EN_SHIFT		2
#define CS35L43_ASP_TX3_EN_WIDTH		1
#define CS35L43_ASP_TX2_EN_MASK			0x00000002
#define CS35L43_ASP_TX2_EN_SHIFT		1
#define CS35L43_ASP_TX2_EN_WIDTH		1
#define CS35L43_ASP_TX1_EN_MASK			0x00000001
#define CS35L43_ASP_TX1_EN_SHIFT		0
#define CS35L43_ASP_TX1_EN_WIDTH		1

/************************************************/
/* DATAIF_ASP_CONTROL1				*/
/************************************************/
#define CS35L43_ASP_BCLK_FREQ_MASK		0x0000003F
#define CS35L43_ASP_BCLK_FREQ_SHIFT		0
#define CS35L43_ASP_BCLK_FREQ_WIDTH		6

/************************************************/
/* DATAIF_ASP_CONTROL2				*/
/************************************************/
#define CS35L43_ASP_RX_WIDTH_MASK		0xFF000000
#define CS35L43_ASP_RX_WIDTH_SHIFT		24
#define CS35L43_ASP_RX_WIDTH_WIDTH		8
#define CS35L43_ASP_TX_WIDTH_MASK		0x00FF0000
#define CS35L43_ASP_TX_WIDTH_SHIFT		16
#define CS35L43_ASP_TX_WIDTH_WIDTH		8
#define CS35L43_ASP_FMT_MASK			0x00000700
#define CS35L43_ASP_FMT_SHIFT			8
#define CS35L43_ASP_FMT_WIDTH			3
#define CS35L43_ASP_BCLK_INV_MASK		0x00000040
#define CS35L43_ASP_BCLK_INV_SHIFT		6
#define CS35L43_ASP_BCLK_INV_WIDTH		1
#define CS35L43_ASP_BCLK_FRC_MASK		0x00000020
#define CS35L43_ASP_BCLK_FRC_SHIFT		5
#define CS35L43_ASP_BCLK_FRC_WIDTH		1
#define CS35L43_ASP_BCLK_MSTR_MASK		0x00000010
#define CS35L43_ASP_BCLK_MSTR_SHIFT		4
#define CS35L43_ASP_BCLK_MSTR_WIDTH		1
#define CS35L43_ASP_FSYNC_INV_MASK		0x00000004
#define CS35L43_ASP_FSYNC_INV_SHIFT		2
#define CS35L43_ASP_FSYNC_INV_WIDTH		1
#define CS35L43_ASP_FSYNC_FRC_MASK		0x00000002
#define CS35L43_ASP_FSYNC_FRC_SHIFT		1
#define CS35L43_ASP_FSYNC_FRC_WIDTH		1
#define CS35L43_ASP_FSYNC_MSTR_MASK		0x00000001
#define CS35L43_ASP_FSYNC_MSTR_SHIFT		0
#define CS35L43_ASP_FSYNC_MSTR_WIDTH		1

/************************************************/
/* DATAIF_ASP_CONTROL3				*/
/************************************************/
#define CS35L41_ASP_DOUT_HIZ_CTRL_SHIFT		0
#define CS35L41_ASP_DOUT_HIZ_CTRL_MASK		0x00000003

/************************************************/
/* DATAIF_ASP_DATA_CONTROL1			*/
/************************************************/
#define CS35L43_ASP_TX_WL_MASK			0x0000003F
#define CS35L43_ASP_TX_WL_SHIFT			0
#define CS35L43_ASP_TX_WL_WIDTH			6

/************************************************/
/* DATAIF_ASP_DATA_CONTROL5			*/
/************************************************/
#define CS35L43_ASP_RX_WL_MASK			0x0000003F
#define CS35L43_ASP_RX_WL_SHIFT			0
#define CS35L43_ASP_RX_WL_WIDTH			6

#define CS35L43_INPUT_SRC_ASPRX1		0x08
#define CS35L43_INPUT_SRC_ASPRX2		0x09
#define CS35L43_INPUT_SRC_VMON			0x18
#define CS35L43_INPUT_SRC_IMON			0x19
#define CS35L43_INPUT_SRC_VMON_FS2		0x1A
#define CS35L43_INPUT_SRC_IMON_FS2		0x1B
#define CS35L43_INPUT_SRC_CLASSH		0x21
#define CS35L43_INPUT_SRC_VPMON			0x28
#define CS35L43_INPUT_SRC_VBSTMON		0x29
#define CS35L43_INPUT_SRC_TEMPMON		0x3A	
#define CS35L43_INPUT_DSP_TX1			0x32
#define CS35L43_INPUT_DSP_TX2			0x33
#define CS35L43_INPUT_DSP_TX3			0x34
#define CS35L43_INPUT_DSP_TX4			0x35
#define CS35L43_INPUT_DSP_TX5			0x36
#define CS35L43_INPUT_DSP_TX6			0x37
#define CS35L43_INPUT_MASK			0x3F

/************************************************/
/* DAC_MSM_ALIVE_DCIN_WD			*/
/************************************************/
#define CS35L43_WD_MODE_MASK			0x00000C00
#define CS35L43_WD_MODE_SHIFT			10
#define CS35L43_DCIN_WD_DUR_MASK		0x00000380
#define CS35L43_DCIN_WD_DUR_SHIFT		7
#define CS35L43_DCIN_WD_THLD_MASK		0x0000007E
#define CS35L43_DCIN_WD_THLD_SHIFT		1
#define CS35L43_DCIN_WD_EN_MASK			0x00000001
#define CS35L43_DCIN_WD_EN_SHIFT		0


/************************************************/
/* VPBR Configuration				*/
/************************************************/
#define CS35L43_VPBR_REL_RATE_MASK		0x00E00000
#define CS35L43_VPBR_REL_RATE_SHIFT		21
#define CS35L43_VPBR_WAIT_MASK			0x00180000
#define CS35L43_VPBR_WAIT_SHIFT			19
#define CS35L43_VPBR_ATK_RATE_MASK		0x00070000
#define CS35L43_VPBR_ATK_RATE_SHIFT		16
#define CS35L43_VPBR_ATK_VOL_MASK		0x0000F000
#define CS35L43_VPBR_ATK_VOL_SHIFT		12
#define CS35L43_VPBR_MAX_ATT_MASK		0x00000F00
#define CS35L43_VPBR_MAX_ATT_SHIFT		8
#define CS35L43_VPBR_THLD1_MASK			0x0000001F
#define CS35L43_VPBR_THLD1_SHIFT		0


/************************************************/
/* VBST Configuration				*/
/************************************************/
#define CS35L43_BST_IPK_MASK		0x7F
#define CS35L43_BST_IPK_SHIFT		0


/************************************************/
/* IRQ1_IRQ1_EINT_1				*/
/************************************************/
#define CS35L43_DSP_VIRTUAL2_MBOX_WR_EINT1_MASK		0x80000000
#define CS35L43_DSP_VIRTUAL2_MBOX_WR_EINT1_SHIFT	31
#define CS35L43_DSP_VIRTUAL1_MBOX_WR_EINT1_MASK		0x40000000
#define CS35L43_DSP_VIRTUAL1_MBOX_WR_EINT1_SHIFT	30
#define CS35L43_DC_WATCHDOG_IRQ_FALL_EINT1_MASK		0x20000000
#define CS35L43_DC_WATCHDOG_IRQ_FALL_EINT1_SHIFT	29
#define CS35L43_DC_WATCHDOG_IRQ_RISE_EINT1_MASK		0x10000000
#define CS35L43_DC_WATCHDOG_IRQ_RISE_EINT1_SHIFT	28
#define CS35L43_AMP_ERR_EINT1_MASK			0x08000000
#define CS35L43_AMP_ERR_EINT1_SHIFT			27
#define CS35L43_TEMP_ERR_EINT1_MASK			0x04000000
#define CS35L43_TEMP_ERR_EINT1_SHIFT			26
#define CS35L43_TEMP_WARN_FALL_EINT1_MASK		0x02000000
#define CS35L43_TEMP_WARN_FALL_EINT1_SHIFT		25
#define CS35L43_TEMP_WARN_RISE_EINT1_MASK		0x01000000
#define CS35L43_TEMP_WARN_RISE_EINT1_SHIFT		24
#define CS35L43_BST_IPK_FLAG_EINT1_MASK			0x00800000
#define CS35L43_BST_IPK_FLAG_EINT1_SHIFT		23
#define CS35L43_BST_SHORT_ERR_EINT1_MASK		0x00400000
#define CS35L43_BST_SHORT_ERR_EINT1_SHIFT		22
#define CS35L43_BST_DCM_UVP_ERR_EINT1_MASK		0x00200000
#define CS35L43_BST_DCM_UVP_ERR_EINT1_SHIFT		21
#define CS35L43_BST_OVP_ERR_EINT1_MASK			0x00100000
#define CS35L43_BST_OVP_ERR_EINT1_SHIFT			20
#define CS35L43_BST_OVP_FLAG_FALL_EINT1_MASK		0x00080000
#define CS35L43_BST_OVP_FLAG_FALL_EINT1_SHIFT		19
#define CS35L43_BST_OVP_FLAG_RISE_EINT1_MASK		0x00040000
#define CS35L43_BST_OVP_FLAG_RISE_EINT1_SHIFT		18
#define CS35L43_MSM_PUP_DONE_EINT1_MASK			0x00020000
#define CS35L43_MSM_PUP_DONE_EINT1_SHIFT		17
#define CS35L43_MSM_PDN_DONE_EINT1_MASK			0x00010000
#define CS35L43_MSM_PDN_DONE_EINT1_SHIFT		16
#define CS35L43_MSM_GLOBAL_EN_ASSERT_EINT1_MASK		0x00008000
#define CS35L43_MSM_GLOBAL_EN_ASSERT_EINT1_SHIFT	15
#define CS35L43_WKSRC_STATUS6_EINT1_MASK		0x00004000
#define CS35L43_WKSRC_STATUS6_EINT1_SHIFT		14
#define CS35L43_WKSRC_STATUS5_EINT1_MASK		0x00002000
#define CS35L43_WKSRC_STATUS5_EINT1_SHIFT		13
#define CS35L43_WKSRC_STATUS4_EINT1_MASK		0x00001000
#define CS35L43_WKSRC_STATUS4_EINT1_SHIFT		12
#define CS35L43_WKSRC_STATUS3_EINT1_MASK		0x00000800
#define CS35L43_WKSRC_STATUS3_EINT1_SHIFT		11
#define CS35L43_WKSRC_STATUS2_EINT1_MASK		0x00000400
#define CS35L43_WKSRC_STATUS2_EINT1_SHIFT		10
#define CS35L43_WKSRC_STATUS1_EINT1_MASK		0x00000200
#define CS35L43_WKSRC_STATUS1_EINT1_SHIFT		9
#define CS35L43_WKSRC_STATUS_ANY_EINT1_MASK		0x00000100
#define CS35L43_WKSRC_STATUS_ANY_EINT1_SHIFT		8
#define CS35L43_IRQ1_EINT_1_GPIO4_FALL_EINT1_MASK	0x00000080
#define CS35L43_IRQ1_EINT_1_GPIO4_FALL_EINT1_SHIFT	7
#define CS35L43_IRQ1_EINT_1_GPIO4_RISE_EINT1_MASK	0x00000040
#define CS35L43_IRQ1_EINT_1_GPIO4_RISE_EINT1_SHIFT	6
#define CS35L43_IRQ1_EINT_1_GPIO3_FALL_EINT1_MASK	0x00000020
#define CS35L43_IRQ1_EINT_1_GPIO3_FALL_EINT1_SHIFT	5
#define CS35L43_IRQ1_EINT_1_GPIO3_RISE_EINT1_MASK	0x00000010
#define CS35L43_IRQ1_EINT_1_GPIO3_RISE_EINT1_SHIFT	4
#define CS35L43_GPIO2_FALL_EINT1_MASK			0x00000008
#define CS35L43_GPIO2_FALL_EINT1_SHIFT			3
#define CS35L43_GPIO2_RISE_EINT1_MASK			0x00000004
#define CS35L43_GPIO2_RISE_EINT1_SHIFT			2
#define CS35L43_GPIO1_FALL_EINT1_MASK			0x00000002
#define CS35L43_GPIO1_FALL_EINT1_SHIFT			1
#define CS35L43_GPIO1_RISE_EINT1_MASK			0x00000001
#define CS35L43_GPIO1_RISE_EINT1_SHIFT			0

/************************************************/
/* IRQ1_IRQ1_EINT_2				*/
/************************************************/
#define CS35L43_PWRMGT_SYNC_ERR_EINT1_MASK		0x20000000
#define CS35L43_PWRMGT_SYNC_ERR_EINT1_SHIFT		29
#define CS35L43_TIMER_CH2_EINT1_MASK			0x10000000
#define CS35L43_TIMER_CH2_EINT1_SHIFT			28
#define CS35L43_TIMER_CH1_EINT1_MASK			0x08000000
#define CS35L43_TIMER_CH1_EINT1_SHIFT			27
#define CS35L43_IMON_CLIPPED_EINT1_MASK			0x04000000
#define CS35L43_IMON_CLIPPED_EINT1_SHIFT		26
#define CS35L43_VMON_CLIPPED_EINT1_MASK			0x02000000
#define CS35L43_VMON_CLIPPED_EINT1_SHIFT		25
#define CS35L43_VBSTMON_CLIPPED_EINT1_MASK		0x01000000
#define CS35L43_VBSTMON_CLIPPED_EINT1_SHIFT		24
#define CS35L43_VPMON_CLIPPED_EINT1_MASK		0x00800000
#define CS35L43_VPMON_CLIPPED_EINT1_SHIFT		23
#define CS35L43_I2C_NACK_ERR_EINT1_MASK			0x00400000
#define CS35L43_I2C_NACK_ERR_EINT1_SHIFT		22
#define CS35L43_INTP_VC_DONE_EINT1_MASK			0x00200000
#define CS35L43_INTP_VC_DONE_EINT1_SHIFT		21
#define CS35L43_VBBR_ATT_CLR_EINT1_MASK			0x00100000
#define CS35L43_VBBR_ATT_CLR_EINT1_SHIFT		20
#define CS35L43_VBBR_FLAG_EINT1_MASK			0x00080000
#define CS35L43_VBBR_FLAG_EINT1_SHIFT			19
#define CS35L43_VPBR_ATT_CLR_EINT1_MASK			0x00040000
#define CS35L43_VPBR_ATT_CLR_EINT1_SHIFT		18
#define CS35L43_VPBR_FLAG_EINT1_MASK			0x00020000
#define CS35L43_VPBR_FLAG_EINT1_SHIFT			17
#define CS35L43_AMP_NG_ON_FALL_EINT1_MASK		0x00010000
#define CS35L43_AMP_NG_ON_FALL_EINT1_SHIFT		16
#define CS35L43_AMP_NG_ON_RISE_EINT1_MASK		0x00008000
#define CS35L43_AMP_NG_ON_RISE_EINT1_SHIFT		15
#define CS35L43_AUX_NG_CH2_EXIT_EINT1_MASK		0x00004000
#define CS35L43_AUX_NG_CH2_EXIT_EINT1_SHIFT		14
#define CS35L43_AUX_NG_CH2_ENTRY_EINT1_MASK		0x00002000
#define CS35L43_AUX_NG_CH2_ENTRY_EINT1_SHIFT		13
#define CS35L43_AUX_NG_CH1_EXIT_EINT1_MASK		0x00001000
#define CS35L43_AUX_NG_CH1_EXIT_EINT1_SHIFT		12
#define CS35L43_AUX_NG_CH1_ENTRY_EINT1_MASK		0x00000800
#define CS35L43_AUX_NG_CH1_ENTRY_EINT1_SHIFT		11
#define CS35L43_ASP_RXSLOT_CFG_ERR_EINT1_MASK		0x00000400
#define CS35L43_ASP_RXSLOT_CFG_ERR_EINT1_SHIFT		10
#define CS35L43_ASP_TXSLOT_CFG_ERR_EINT1_MASK		0x00000200
#define CS35L43_ASP_TXSLOT_CFG_ERR_EINT1_SHIFT		9
#define CS35L43_REFCLK_MISSING_RISE_EINT1_MASK		0x00000100
#define CS35L43_REFCLK_MISSING_RISE_EINT1_SHIFT		8
#define CS35L43_REFCLK_MISSING_FALL_EINT1_MASK		0x00000080
#define CS35L43_REFCLK_MISSING_FALL_EINT1_SHIFT		7
#define CS35L43_PLL_REFCLK_PRESENT_EINT1_MASK		0x00000040
#define CS35L43_PLL_REFCLK_PRESENT_EINT1_SHIFT		6
#define CS35L43_PLL_READY_RISE_EINT1_MASK		0x00000020
#define CS35L43_PLL_READY_RISE_EINT1_SHIFT		5
#define CS35L43_PLL_UNLOCK_FLAG_FALL_EINT1_MASK		0x00000010
#define CS35L43_PLL_UNLOCK_FLAG_FALL_EINT1_SHIFT	4
#define CS35L43_PLL_UNLOCK_FLAG_RISE_EINT1_MASK		0x00000008
#define CS35L43_PLL_UNLOCK_FLAG_RISE_EINT1_SHIFT	3
#define CS35L43_PLL_FREQ_LOCK_EINT1_MASK		0x00000004
#define CS35L43_PLL_FREQ_LOCK_EINT1_SHIFT		2
#define CS35L43_PLL_PHASE_LOCK_EINT1_MASK		0x00000002
#define CS35L43_PLL_PHASE_LOCK_EINT1_SHIFT		1
#define CS35L43_PLL_LOCK_EINT1_MASK			0x00000001
#define CS35L43_PLL_LOCK_EINT1_SHIFT			0

/************************************************/
/* IRQ1_IRQ1_EINT_3				*/
/************************************************/
#define CS35L43_OTP_BOOT_ERR_EINT1_MASK		0x00040000
#define CS35L43_OTP_BOOT_ERR_EINT1_SHIFT		18

/************************************************/
/* Protection Release and Error Ignore Control	*/
/************************************************/
#define CS35L43_CLK_ERR_IGNORE_MASK			0x80000000
#define CS35L43_CLK_ERR_IGNORE_SHIFT			31
#define CS35L43_TEMP_ERR_IGNORE_MASK			0x40000000
#define CS35L43_TEMP_ERR_IGNORE_SHIFT			30
#define CS35L43_TEMP_WARN_IGNORE_MASK			0x20000000
#define CS35L43_TEMP_WARN_IGNORE_SHIFT			29
#define CS35L43_BST_UVP_ERR_IGNORE_MASK			0x10000000
#define CS35L43_BST_UVP_ERR_IGNORE_SHIFT		28
#define CS35L43_BST_OVP_ERR_IGNORE_MASK			0x08000000
#define CS35L43_BST_OVP_ERR_IGNORE_SHIFT		27
#define CS35L43_BST_SHORT_ERR_IGNORE_MASK		0x04000000
#define CS35L43_BST_SHORT_ERR_IGNORE_SHIFT		26
#define CS35L43_AMP_SHORT_ERR_IGNORE_MASK		0x02000000
#define CS35L43_AMP_SHORT_ERR_IGNORE_SHIFT		25
#define CS35L43_AMP_CAL_ERR_IGNORE_MASK			0x01000000
#define CS35L43_AMP_CAL_ERR_IGNORE_SHIFT		24
#define CS35L43_ERROR_RELEASE_CLK_ERR_RLS_MASK		0x00000080
#define CS35L43_ERROR_RELEASE_CLK_ERR_RLS_SHIFT		7
#define CS35L43_TEMP_ERR_RLS_MASK			0x00000040
#define CS35L43_TEMP_ERR_RLS_SHIFT			6
#define CS35L43_TEMP_WARN_RLS_MASK			0x00000020
#define CS35L43_TEMP_WARN_RLS_SHIFT			5
#define CS35L43_BST_UVP_ERR_RLS_MASK			0x00000010
#define CS35L43_BST_UVP_ERR_RLS_SHIFT			4
#define CS35L43_BST_OVP_ERR_RLS_MASK			0x00000008
#define CS35L43_BST_OVP_ERR_RLS_SHIFT			3
#define CS35L43_BST_SHORT_ERR_RLS_MASK			0x00000004
#define CS35L43_BST_SHORT_ERR_RLS_SHIFT			2
#define CS35L43_AMP_SHORT_ERR_RLS_MASK			0x00000002
#define CS35L43_AMP_SHORT_ERR_RLS_SHIFT			1
#define CS35L43_AMP_CAL_ERR_RLS_MASK			0x00000001
#define CS35L43_AMP_CAL_ERR_RLS_SHIFT			0

/************************************************/
/* Amplifier Gain Control			*/
/************************************************/
#define CS35L43_AMP_GAIN_ZC_MASK		0x00000400
#define CS35L43_AMP_GAIN_ZC_SHIFT		10
#define CS35L43_AMP_GAIN_PCM_MASK		0x000003E0
#define CS35L43_AMP_GAIN_PCM_SHIFT		5

/************************************************/
/* Amplifier Digital Volume Control		*/
/************************************************/
#define CS35L43_AMP_HPF_PCM_EN_MASK		0x00008000
#define CS35L43_AMP_HPF_PCM_EN_SHIFT		15
#define CS35L43_AMP_INV_PCM_MASK		0x00004000
#define CS35L43_AMP_INV_PCM_SHIFT		14
#define CS35L43_AMP_VOL_PCM_MASK		0x00003FF8
#define CS35L43_AMP_VOL_PCM_SHIFT		3
#define CS35L43_AMP_RAMP_PCM_MASK		0x00000007
#define CS35L43_AMP_RAMP_PCM_SHIFT		0

/************************************************/
/* Amplifier High Rate Control			*/
/************************************************/
#define CS35L43_VIMON_DUAL_RATE_MASK		0x00010000
#define CS35L43_VIMON_DUAL_RATE_SHIFT		16
#define CS35L43_AMP_PCM_FSX2_EN_MASK		0x00000001
#define CS35L43_DSP_RX1_RATE_MASK		0x00000003
#define CS35L43_DSP_RX2_RATE_MASK		0x00000300
#define CS35L43_DSP_RX3_RATE_MASK		0x00030000
#define CS35L43_DSP_RX4_RATE_MASK		0x03000000
#define CS35L43_DSP_RX5_RATE_MASK		0x00000003
#define CS35L43_DSP_RX6_RATE_MASK		0x00000300
#define CS35L43_DSP_TX1_RATE_MASK		0x00000003
#define CS35L43_DSP_TX2_RATE_MASK		0x00000300
#define CS35L43_DSP_TX3_RATE_MASK		0x00030000
#define CS35L43_DSP_TX4_RATE_MASK		0x03000000
#define CS35L43_DSP_TX5_RATE_MASK		0x00000003
#define CS35L43_DSP_TX6_RATE_MASK		0x00000300
#define CS35L43_DSP_RX1_RATE_SHIFT		0
#define CS35L43_DSP_RX2_RATE_SHIFT		8
#define CS35L43_DSP_RX3_RATE_SHIFT		16
#define CS35L43_DSP_RX4_RATE_SHIFT		24
#define CS35L43_DSP_RX5_RATE_SHIFT		0
#define CS35L43_DSP_RX6_RATE_SHIFT		8
#define CS35L43_DSP_TX1_RATE_SHIFT		0
#define CS35L43_DSP_TX2_RATE_SHIFT		8
#define CS35L43_DSP_TX3_RATE_SHIFT		16
#define CS35L43_DSP_TX4_RATE_SHIFT		24
#define CS35L43_DSP_TX5_RATE_SHIFT		0
#define CS35L43_DSP_TX6_RATE_SHIFT		8
#define CS35L43_BASE_RATE			0x1
#define CS35L43_HIGH_RATE			0x3

/************************************************/
/* DSP Noise Gate Control			*/
/************************************************/

/************************************************/
/* NOISE_GATE_MIXER_NGATE_CFG			*/
/************************************************/
#define CS35L43_AUX_NGATE_FAST_MASK		0x00000001
#define CS35L43_AUX_NGATE_FAST_SHIFT		0

/************************************************/
/* NOISE_GATE_MIXER_NGATE_CH1_CFG		*/
/************************************************/
#define CS35L43_AUX_NGATE_CH1_FRC_MASK		0x00020000
#define CS35L43_AUX_NGATE_CH1_FRC_SHIFT		17
#define CS35L43_AUX_NGATE_CH1_EN_MASK		0x00010000
#define CS35L43_AUX_NGATE_CH1_EN_SHIFT		16
#define CS35L43_AUX_NGATE_CH1_HOLD_MASK		0x00000F00
#define CS35L43_AUX_NGATE_CH1_HOLD_SHIFT	8
#define CS35L43_AUX_NGATE_CH1_THR_MASK		0x00000007
#define CS35L43_AUX_NGATE_CH1_THR_SHIFT		0

/************************************************/
/* NOISE_GATE_MIXER_NGATE_CH2_CFG		*/
/************************************************/
#define CS35L43_AUX_NGATE_CH2_FRC_MASK		0x00020000
#define CS35L43_AUX_NGATE_CH2_FRC_SHIFT		17
#define CS35L43_AUX_NGATE_CH2_EN_MASK		0x00010000
#define CS35L43_AUX_NGATE_CH2_EN_SHIFT		16
#define CS35L43_AUX_NGATE_CH2_HOLD_MASK		0x00000F00
#define CS35L43_AUX_NGATE_CH2_HOLD_SHIFT	8
#define CS35L43_AUX_NGATE_CH2_THR_MASK		0x00000007
#define CS35L43_AUX_NGATE_CH2_THR_SHIFT		0

/************************************************/
/* Noise Gate Configuration			*/
/************************************************/
#define CS35L43_NG_FRC_MASK			0x00008000
#define CS35L43_NG_FRC_SHIFT			15
#define CS35L43_NG_EN_SEL_MASK			0x00003F00
#define CS35L43_NG_EN_SEL_SHIFT			8
#define CS35L43_NG_DELAY_MASK			0x00000070
#define CS35L43_NG_DELAY_SHIFT			4
#define CS35L43_NG_PCM_THLD_MASK		0x00000007
#define CS35L43_NG_PCM_THLD_SHIFT		0

/************************************************/
/* Digital Boost Converter			*/
/************************************************/

/************************************************/
/* Boost Converter Voltage Control 1		*/
/************************************************/
#define CS35L43_BST_CTL_MASK			0x000000FF
#define CS35L43_BST_CTL_SHIFT			0

/************************************************/
/* Boost Converter Voltage Control 2		*/
/************************************************/
#define CS35L43_BST_CTL_EXT_EN_MASK		0x00000100
#define CS35L43_BST_CTL_EXT_EN_SHIFT		8
#define CS35L43_BST_CTL_LIM_EN_MASK		0x00000004
#define CS35L43_BST_CTL_LIM_EN_SHIFT		2
#define CS35L43_BST_CTL_SEL_MASK		0x00000003
#define CS35L43_BST_CTL_SEL_SHIFT		0


/* #####################################################*/
/* Software Values					*/
/* #####################################################*/

#define CS35L43_MBOX_CMD_AUDIO_PLAY	0x0B000001
#define CS35L43_MBOX_CMD_AUDIO_PAUSE	0x0B000002
#define CS35L43_MBOX_CMD_AUDIO_REINIT	0x0B000003

#define CS35L43_MBOX_CMD_HIBERNATE		0x02000001
#define CS35L43_MBOX_CMD_WAKEUP			0x02000002
#define CS35L43_MBOX_CMD_PREVENT_HIBERNATE	0x02000003
#define CS35L43_MBOX_CMD_ALLOW_HIBERNATE	0x02000004
#define CS35L43_MBOX_CMD_SHUTDOWN		0x02000005

#define CS35L43_ALG_ID_PM		0x5f206

#define CS35L43_POWER_SEQ_LENGTH			42
#define CS35L43_POWER_SEQ_MAX_WORDS			129
#define CS35L43_POWER_SEQ_NUM_OPS			8
#define CS35L43_POWER_SEQ_OP_MASK			GENMASK(23, 16)
#define CS35L43_POWER_SEQ_OP_SHIFT			16
#define CS35L43_POWER_SEQ_OP_WRITE_REG_FULL		0x00
#define CS35L43_POWER_SEQ_OP_WRITE_REG_FULL_WORDS	3
#define CS35L43_POWER_SEQ_OP_WRITE_FIELD		0x01
#define CS35L43_POWER_SEQ_OP_WRITE_FIELD_WORDS		4
#define CS35L43_POWER_SEQ_OP_WRITE_REG_ADDR8		0x02
#define CS35L43_POWER_SEQ_OP_WRITE_REG_ADDR8_WORDS	2
#define CS35L43_POWER_SEQ_OP_WRITE_REG_INCR		0x03
#define CS35L43_POWER_SEQ_OP_WRITE_REG_INCR_WORDS	2
#define CS35L43_POWER_SEQ_OP_WRITE_REG_L16		0x04
#define CS35L43_POWER_SEQ_OP_WRITE_REG_L16_WORDS	2
#define CS35L43_POWER_SEQ_OP_WRITE_REG_H16		0x05
#define CS35L43_POWER_SEQ_OP_WRITE_REG_H16_WORDS	2
#define CS35L43_POWER_SEQ_OP_DELAY			0xFE
#define CS35L43_POWER_SEQ_OP_DELAY_WORDS		1
#define CS35L43_POWER_SEQ_OP_END			0xFF
#define CS35L43_POWER_SEQ_OP_END_WORDS			1
