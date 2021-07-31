/*
 * TMC22XX_Fields.h
 *
 *  Created on: 29.05.2021
 *      Author: AB
 *
 *  This file contains the pre-defined TMCField objects.
 *  These are meant to be used in conjunction with a TMCSerial, or TMCSPI object.
 */


#ifndef TMC2300_FIELDS_H_
#define TMC2300_FIELDS_H_

#include"TMCField.hpp"
#include"TMC2300_Registers.h"

/* GCONF Register fields */
extern TMCField TMC2300_PWM_DIRECT;
extern TMCField TMC2300_EXTCAP;
extern TMCField TMC2300_EN_SPREADCYCLE;
extern TMCField TMC2300_SHAFT;
extern TMCField TMC2300_DIAG_INDEX;
extern TMCField TMC2300_DIAG_STEP;
extern TMCField TMC2300_PDN_DISABLE;
extern TMCField TMC2300_MSTEP_REG_SELECT;
extern TMCField TMC2300_MULTISTEP_FILT;
extern TMCField TMC2300_TEST_MODE;

/* GSTAT Register Fields */
extern TMCField TMC2300_RESET;
extern TMCField TMC2300_DRV_ERR;
extern TMCField TMC2300_U3V5;

/* IFCNT Register */
extern TMCField TMC2300_IFCNT;

/* SENDDELAY Register */
extern TMCField TMC2300_SLAVECONF;

/* IOIN Register fields */
extern TMCField TMC2300_EN;
extern TMCField TMC2300_NSTDBY;
extern TMCField TMC2300_MS1;
extern TMCField TMC2300_MS2;
extern TMCField TMC2300_DIAG;
extern TMCField TMC2300_STEPPERCLK_INPUT;
extern TMCField TMC2300_PDN_UART;
extern TMCField TMC2300_MODE_INPUT;
extern TMCField TMC2300_STEP;
extern TMCField TMC2300_DIR;
extern TMCField TMC2300_COMP_A1A2;
extern TMCField TMC2300_COMP_B1B2;
extern TMCField TMC2300_VERSION;

/* IHOLD_IRUN Register fields */
extern TMCField TMC2300_IHOLD;
extern TMCField TMC2300_IRUN;
extern TMCField TMC2300_IHOLDDELAY;

/* TPOWERDOWN Register */
extern TMCField TMC2300_TPOWERDOWN;

/* TSTEP Register */
extern TMCField TMC2300_TSTEP;

/* VACTUAL Register */
extern TMCField TMC2300_VACTUAL;

/* Stallguard control register and fields */
extern TMCField TMC2300_TCOOLTHRS;
extern TMCField TMC2300_SGTHRS;
extern TMCField TMC2300_SG_VALUE;

extern TMCField TMC2300_SEMIN;
extern TMCField TMC2300_SEUP;
extern TMCField TMC2300_SEMAX;
extern TMCField TMC2300_SEDN;
extern TMCField TMC2300_SEIMIN;

/* Sequencer register and fields */
extern TMCField TMC2300_MSCNT;
extern TMCField TMC2300_CUR_A;
extern TMCField TMC2300_CUR_B;

/* CHOPCONF Register fields */
extern TMCField TMC2300_ENABLEDRV;
extern TMCField TMC2300_TBL;
extern TMCField TMC2300_MRES;
extern TMCField TMC2300_INTPOL;
extern TMCField TMC2300_DEDGE;
extern TMCField TMC2300_DISS2G;
extern TMCField TMC2300_DISS2VS;

/* DRVSTATUS Register fields */
extern TMCField TMC2300_OTPW;
extern TMCField TMC2300_OT;
extern TMCField TMC2300_S2GA;
extern TMCField TMC2300_S2GB;
extern TMCField TMC2300_S2VSA;
extern TMCField TMC2300_S2VSB;
extern TMCField TMC2300_OLA;
extern TMCField TMC2300_OLB;
extern TMCField TMC2300_T120;
extern TMCField TMC2300_T143;
extern TMCField TMC2300_T150;
extern TMCField TMC2300_T157;
extern TMCField TMC2300_CS_ACTUAL;
extern TMCField TMC2300_STST;

/* PWMCONF Register fields */
extern TMCField TMC2300_PWM_OFS;
extern TMCField TMC2300_PWM_GRAD;
extern TMCField TMC2300_PWM_FREQ;
extern TMCField TMC2300_PWM_AUTOSCALE;
extern TMCField TMC2300_PWM_AUTOGRAD;
extern TMCField TMC2300_FREEWHEEL;
extern TMCField TMC2300_PWM_REG;
extern TMCField TMC2300_PWM_LIM;

/* PWMSCALE Register fields */
extern TMCField TMC2300_PWM_SCALE_SUM;
extern TMCField TMC2300_PWM_SCALE_AUTO;

/* PWM_AUTO Register fields */
extern TMCField TMC2300_PWM_OFS_AUTO;
extern TMCField TMC2300_PWM_GRAD_AUTO_MASK;

#endif /* TMC2300_FIELDS_H_ */