/*
 * TMC2300_Registers.h
 *
 *  Created on: 11.01.2019
 *      Author: LK
 * 
 *  Taken from : https://github.com/trinamic/TMC-API
 * 
 *  This file contains the raw defines for every address, mask, shift
 *  combination to access the TMC2300 registers.
 * 
 *  See TMC2300_Fields.h for the pre-defined TMCField objects.
 */

#ifndef TMC2300_REGISTERS_H
#define TMC2300_REGISTERS_H

/* General configuration register */
#define _TMC2300_GCONF         0x00
#define _TMC2300_GSTAT         0x01
#define _TMC2300_IFCNT         0x02
#define _TMC2300_SLAVECONF     0x03
#define _TMC2300_IOIN          0x06

/* Velocity dependant control */
#define _TMC2300_IHOLD_IRUN    0x10
#define _TMC2300_TPOWERDOWN    0x11
#define _TMC2300_TSTEP         0x12
#define _TMC2300_VACTUAL       0x22
#define _TMC2300_XDIRECT       0x22

/* Stallguard Control */
#define _TMC2300_TCOOLTHRS     0x14
#define _TMC2300_SGTHRS        0x40
#define _TMC2300_SG_VALUE      0x41
#define _TMC2300_COOLCONF      0x42

/* Sequence register */
#define _TMC2300_MSCNT         0x6A

/* Chopper configuration */
#define _TMC2300_CHOPCONF      0x6C
#define _TMC2300_DRVSTATUS     0x6F
#define _TMC2300_PWMCONF       0x70
#define _TMC2300_PWMSCALE      0x71
#define _TMC2300_PWM_AUTO      0x72

/* Auto-generated field map
 * Generated by MaskShiftConverter (unchecked) */
#define _TMC2300_PWM_DIRECT_MASK           0x00000001
#define _TMC2300_PWM_DIRECT_SHIFT          0 
#define _TMC2300_EXTCAP_MASK               0x00000002
#define _TMC2300_EXTCAP_SHIFT              1
#define _TMC2300_EN_SPREADCYCLE_MASK       0x00000004
#define _TMC2300_EN_SPREADCYCLE_SHIFT      2 
#define _TMC2300_SHAFT_MASK                0x00000008
#define _TMC2300_SHAFT_SHIFT               3
#define _TMC2300_DIAG_INDEX_MASK           0x00000010
#define _TMC2300_DIAG_INDEX_SHIFT          4
#define _TMC2300_DIAG_STEP_MASK            0x00000020
#define _TMC2300_DIAG_STEP_SHIFT           5
#define _TMC2300_PDN_DISABLE_MASK          0x00000040
#define _TMC2300_PDN_DISABLE_SHIFT         6
#define _TMC2300_MSTEP_REG_SELECT_MASK     0x00000080
#define _TMC2300_MSTEP_REG_SELECT_SHIFT    7
#define _TMC2300_MULTISTEP_FILT_MASK       0x00000100
#define _TMC2300_MULTISTEP_FILT_SHIFT      8
#define _TMC2300_TEST_MODE_MASK            0x00000200
#define _TMC2300_TEST_MODE_SHIFT           9
#define _TMC2300_RESET_MASK                0x00000001
#define _TMC2300_RESET_SHIFT               0
#define _TMC2300_DRV_ERR_MASK              0x00000002
#define _TMC2300_DRV_ERR_SHIFT             1
#define _TMC2300_U3V5_MASK                 0x00000004
#define _TMC2300_U3V5_SHIFT                2
#define _TMC2300_IFCNT_MASK                0x000000FF
#define _TMC2300_IFCNT_SHIFT               0
#define _TMC2300_SLAVECONF_MASK            0x00000F00
#define _TMC2300_SLAVECONF_SHIFT           8
#define _TMC2300_EN_MASK                   0x00000001
#define _TMC2300_EN_SHIFT                  0
#define _TMC2300_NSTDBY_MASK               0x00000002
#define _TMC2300_NSTDBY_SHIFT              1
#define _TMC2300_MS1_MASK                  0x00000004
#define _TMC2300_MS1_SHIFT                 2
#define _TMC2300_MS2_MASK                  0x00000008
#define _TMC2300_MS2_SHIFT                 3
#define _TMC2300_DIAG_MASK                 0x00000010
#define _TMC2300_DIAG_SHIFT                4
#define _TMC2300_STEPPERCLK_INPUT_MASK     0x00000020
#define _TMC2300_STEPPERCLK_INPUT_SHIFT    5
#define _TMC2300_PDN_UART_MASK             0x00000040
#define _TMC2300_PDN_UART_SHIFT            6
#define _TMC2300_MODE_INPUT_MASK           0x00000080
#define _TMC2300_MODE_INPUT_SHIFT          7
#define _TMC2300_STEP_MASK                 0x00000100
#define _TMC2300_STEP_SHIFT                8
#define _TMC2300_DIR_MASK                  0x00000200
#define _TMC2300_DIR_SHIFT                 9
#define _TMC2300_COMP_A1A2_MASK            0x00000400
#define _TMC2300_COMP_A1A2_SHIFT           10
#define _TMC2300_COMP_B1B2_MASK            0x00000800
#define _TMC2300_COMP_B1B2_SHIFT           7
#define _TMC2300_VERSION_MASK              0xFF000000
#define _TMC2300_VERSION_SHIFT             24
#define _TMC2300_IHOLD_MASK                0x0000001F
#define _TMC2300_IHOLD_SHIFT               0
#define _TMC2300_IRUN_MASK                 0x00001F00
#define _TMC2300_IRUN_SHIFT                8
#define _TMC2300_IHOLDDELAY_MASK           0x000F0000
#define _TMC2300_IHOLDDELAY_SHIFT          16
#define _TMC2300_TPOWERDOWN_MASK           0x000000FF
#define _TMC2300_TPOWERDOWN_SHIFT          0
#define _TMC2300_TSTEP_MASK                0x000FFFFF
#define _TMC2300_TSTEP_SHIFT               0
#define _TMC2300_TCOOLTHRS_MASK            0xFFFFFFFF
#define _TMC2300_TCOOLTHRS_SHIFT           0
#define _TMC2300_VACTUAL_MASK              0x00FFFFFF
#define _TMC2300_VACTUAL_SHIFT             0
#define _TMC2300_SGTHRS_MASK               0x000000FF
#define _TMC2300_SGTHRS_SHIFT              0
#define _TMC2300_SG_VALUE_MASK             0x000003FF
#define _TMC2300_SG_VALUE_SHIFT            0
#define _TMC2300_SEMIN_MASK                0x0000000F
#define _TMC2300_SEMIN_SHIFT               0
#define _TMC2300_SEUP_MASK                 0x00000060
#define _TMC2300_SEUP_SHIFT                5
#define _TMC2300_SEMAX_MASK                0x00000F00
#define _TMC2300_SEMAX_SHIFT               8
#define _TMC2300_SEDN_MASK                 0x00006000
#define _TMC2300_SEDN_SHIFT                13
#define _TMC2300_SEIMIN_MASK               0x00008000
#define _TMC2300_SEIMIN_SHIFT              15
#define _TMC2300_MSCNT_MASK                0x000003FF
#define _TMC2300_MSCNT_SHIFT               0
#define _TMC2300_CUR_A_MASK                0x000001FF
#define _TMC2300_CUR_A_SHIFT               0
#define _TMC2300_CUR_B_MASK                0x01FF0000
#define _TMC2300_CUR_B_SHIFT               16
#define _TMC2300_ENABLEDRV_MASK            0x00000001
#define _TMC2300_ENABLEDRV_SHIFT           0
#define _TMC2300_TBL_MASK                  0x00018000
#define _TMC2300_TBL_SHIFT                 15
#define _TMC2300_MRES_MASK                 0x0F000000
#define _TMC2300_MRES_SHIFT                24
#define _TMC2300_INTPOL_MASK               0x10000000
#define _TMC2300_INTPOL_SHIFT              28
#define _TMC2300_DEDGE_MASK                0x20000000
#define _TMC2300_DEDGE_SHIFT               29
#define _TMC2300_DISS2G_MASK               0x40000000
#define _TMC2300_DISS2G_SHIFT              30
#define _TMC2300_DISS2VS_MASK              0x80000000
#define _TMC2300_DISS2VS_SHIFT             31
#define _TMC2300_OTPW_MASK                 0x00000001
#define _TMC2300_OTPW_SHIFT                0
#define _TMC2300_OT_MASK                   0x00000002
#define _TMC2300_OT_SHIFT                  1
#define _TMC2300_S2GA_MASK                 0x00000004
#define _TMC2300_S2GA_SHIFT                2
#define _TMC2300_S2GB_MASK                 0x00000008
#define _TMC2300_S2GB_SHIFT                3
#define _TMC2300_S2VSA_MASK                0x00000010
#define _TMC2300_S2VSA_SHIFT               4
#define _TMC2300_S2VSB_MASK                0x00000020
#define _TMC2300_S2VSB_SHIFT               5
#define _TMC2300_OLA_MASK                  0x00000040
#define _TMC2300_OLA_SHIFT                 6
#define _TMC2300_OLB_MASK                  0x00000080
#define _TMC2300_OLB_SHIFT                 7
#define _TMC2300_T120_MASK                 0x00000100
#define _TMC2300_T120_SHIFT                8
#define _TMC2300_T143_MASK                 0x00000200
#define _TMC2300_T143_SHIFT                9
#define _TMC2300_T150_MASK                 0x00000400
#define _TMC2300_T150_SHIFT                10
#define _TMC2300_T157_MASK                 0x00000800
#define _TMC2300_T157_SHIFT                11
#define _TMC2300_CS_ACTUAL_MASK            0x001F0000
#define _TMC2300_CS_ACTUAL_SHIFT           16
#define _TMC2300_STST_MASK                 0x80000000
#define _TMC2300_STST_SHIFT                31
#define _TMC2300_PWM_OFS_MASK              0x000000FF
#define _TMC2300_PWM_OFS_SHIFT             0
#define _TMC2300_PWM_GRAD_MASK             0x0000FF00
#define _TMC2300_PWM_GRAD_SHIFT            8
#define _TMC2300_PWM_FREQ_MASK             0x00030000
#define _TMC2300_PWM_FREQ_SHIFT            16
#define _TMC2300_PWM_AUTOSCALE_MASK        0x00040000
#define _TMC2300_PWM_AUTOSCALE_SHIFT       18
#define _TMC2300_PWM_AUTOGRAD_MASK         0x00080000
#define _TMC2300_PWM_AUTOGRAD_SHIFT        19
#define _TMC2300_FREEWHEEL_MASK            0x00300000
#define _TMC2300_FREEWHEEL_SHIFT           20
#define _TMC2300_PWM_REG_MASK              0x0F000000
#define _TMC2300_PWM_REG_SHIFT             24
#define _TMC2300_PWM_LIM_MASK              0xF0000000
#define _TMC2300_PWM_LIM_SHIFT             28
#define _TMC2300_PWM_SCALE_SUM_MASK        0x000000FF
#define _TMC2300_PWM_SCALE_SUM_SHIFT       0
#define _TMC2300_PWM_SCALE_AUTO_MASK       0x01FF0000
#define _TMC2300_PWM_SCALE_AUTO_SHIFT      16
#define _TMC2300_PWM_OFS_AUTO_MASK         0x000000FF
#define _TMC2300_PWM_OFS_AUTO_SHIFT        0
#define _TMC2300_PWM_GRAD_AUTO_MASK        0x00FF0000
#define _TMC2300_PWM_GRAD_AUTO_SHIFT       16

#endif /* TMC2300_REGISTERS_H */