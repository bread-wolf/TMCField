/*
 * TMC22XX_Fields.h
 *
 *  Created on: 28.05.2021
 *      Author: AB
 *
 *  This file contains the pre-defined TMCField objects.
 *  These are meant to be used in conjunction with a TMCSerial, or TMCSPI object.
 */


#ifndef TMC22XX_FIELDS_H_
#define TMC22XX_FIELDS_H_

#include"TMCField.hpp"
#include"TMC22XX_Registers.h"

/* GCONF Register fields */
extern TMCField TMC22XX_I_SCALE_ANALOG;
extern TMCField TMC22XX_INTERNAL_RSENSE_MASK;
extern TMCField TMC22XX_EN_SPREADCYCLE;
extern TMCField TMC22XX_SHAFT;
extern TMCField TMC22XX_INDEX_OTPW;
extern TMCField TMC22XX_INDEX_STEP;
extern TMCField TMC22XX_PDN_DISABLE;
extern TMCField TMC22XX_MSTEP_REG_SELECT;
extern TMCField TMC22XX_MULTISTEP_FILT;
extern TMCField TMC22XX_TEST_MODE;

/* GSTAT Register fields */
extern TMCField TMC22XX_RESET;
extern TMCField TMC22XX_DRV_ERR;
extern TMCField TMC22XX_UV_CP;

/* IFCNT Register */
extern TMCField TMC22XX_IFCNT;

/* Send Delay Register */
extern TMCField TMC22XX_SLAVECONF;

/* OTP PROG Register fields */
extern TMCField TMC22XX_OTPBIT;
extern TMCField TMC22XX_OTPBYTE;
extern TMCField TMC22XX_OTPMAGIC;

/* OTP READ Register fields */
extern TMCField TMC22XX_OTP0_BYTE_0_READ_DATA;
extern TMCField TMC22XX_OTP1_BYTE_1_READ_DATA;
extern TMCField TMC22XX_OTP1_BYTE_2_READ_DATA;

/* IOIN Register fields */
extern TMCField TMC22XX_ENN;
extern TMCField TMC22XX_MS1;
extern TMCField TMC22XX_MS2;
extern TMCField TMC22XX_DIAG;
extern TMCField TMC22XX_PDN_UART;
extern TMCField TMC22XX_STEP;
extern TMCField TMC22XX_SEL_A;
extern TMCField TMC22XX_DIR;
extern TMCField TMC22XX_VERSION;

/* Factory trimming fields */
extern TMCField TMC22XX_FCLKTRIM;
extern TMCField TMC22XX_OTTRIM;

/* IHOLD IRUN Fields */
extern TMCField TMC22XX_IHOLD;
extern TMCField TMC22XX_IRUN;
extern TMCField TMC22XX_IHOLDDELAY;

/* TPOWERDOWN Register */
extern TMCField TMC22XX_TPOWERDOWN;

/* TSTEP Register */
extern TMCField TMC22XX_TSTEP;

/* TPWMTHRS Register */
extern TMCField TMC22XX_TPWMTHRS;

/* V_ACTUAL Register */
extern TMCField TMC22XX_VACTUAL;

/* COOLCONF Fields */
extern TMCField TMC22XX_SEMIN;
extern TMCField TMC22XX_SEUP;
extern TMCField TMC22XX_SEMAX;
extern TMCField TMC22XX_SEDN;
extern TMCField TMC22XX_SEIMIN;

/* Sequencer Register Fields (MSCNT, MSCURACT)*/
extern TMCField TMC22XX_MSCNT;
extern TMCField TMC22XX_CUR_A;
extern TMCField TMC22XX_CUR_B;

/* Chopper Control Fields */
extern TMCField TMC22XX_DISS2G;
extern TMCField TMC22XX_DISS2VS;
extern TMCField TMC22XX_INTPOL;
extern TMCField TMC22XX_DEDGE;
extern TMCField TMC22XX_MRES;
extern TMCField TMC22XX_VSENSE;
extern TMCField TMC22XX_TBL;
extern TMCField TMC22XX_HEND;
extern TMCField TMC22XX_HSTRT;
extern TMCField TMC22XX_TOFF;

/* Driver Status Fields */
extern TMCField TMC22XX_STST;
extern TMCField TMC22XX_STEALTH;
extern TMCField TMC22XX_CS_ACTUAL;
extern TMCField TMC22XX_T120;
extern TMCField TMC22XX_T143;
extern TMCField TMC22XX_T150;
extern TMCField TMC22XX_T157;
extern TMCField TMC22XX_OLA;
extern TMCField TMC22XX_OLB;
extern TMCField TMC22XX_S2VSA;
extern TMCField TMC22XX_S2VSB;
extern TMCField TMC22XX_S2GA;
extern TMCField TMC22XX_S2GB;
extern TMCField TMC22XX_OTPW;
extern TMCField TMC22XX_OT;

/* PWM Configuration fields */
extern TMCField TMC22XX_PWM_OFS;
extern TMCField TMC22XX_PWM_GRAD;
extern TMCField TMC22XX_PWM_FREQ;
extern TMCField TMC22XX_PWM_AUTOSCALE;
extern TMCField TMC22XX_PWM_AUTOGRAD;
extern TMCField TMC22XX_FREEWHEEL;
extern TMCField TMC22XX_PWM_REG;
extern TMCField TMC22XX_PWM_LIM;
extern TMCField TMC22XX_PWM_SCALE_SUM;
extern TMCField TMC22XX_PWM_SCALE_AUTO;
extern TMCField TMC22XX_PWM_OFS_AUTO;
extern TMCField TMC22XX_PWM_GRAD_AUTO;

#endif /* TMC22XX_FIELDS_H_ */