/*
 * TMC7300_Fields.h
 *
 *  Created on: 10.05.2021
 *      Author: AB
 * 
 *  This file contains the pre-defined TMCField objects.
 *  These are meant to be used in conjunction with a TMCSerial, or TMCSPI object.
 */


#ifndef TMC7300_FIELDS_H_
#define TMC7300_FIELDS_H_

#include"TMCField.hpp"
#include"TMC7300_Registers.h"

/* GCONF Register fields */
extern TMCField TMC7300_PWM_DIRECT;
extern TMCField TMC7300_EXTCAP;
extern TMCField TMC7300_PAR_MODE;
extern TMCField TMC7300_TEST_MODE;

/* GSTAT Register fields */
extern TMCField TMC7300_RESET;
extern TMCField TMC7300_DRV_ERR;
extern TMCField TMC7300_U3V5;

/* IFCNT Register */
extern TMCField TMC7300_IFCNT;

/* Send Delay register */
extern TMCField TMC7300_SLAVECONF;

/* IOIN Register fields */
extern TMCField TMC7300_EN;
extern TMCField TMC7300_NSTDBY;
extern TMCField TMC7300_AD0;
extern TMCField TMC7300_AD1;
extern TMCField TMC7300_DIAG;
extern TMCField TMC7300_UART_ENABLED;
extern TMCField TMC7300_UART_INPUT;
extern TMCField TMC7300_MODE_INPUT;
extern TMCField TMC7300_A2;
extern TMCField TMC7300_A1;
extern TMCField TMC7300_COMP_A1A2;
extern TMCField TMC7300_COMP_B1B2;
extern TMCField TMC7300_VERSION;

/* CURRENT_LIMIT Register fields */
extern TMCField TMC7300_MOTORRUN;
extern TMCField TMC7300_IRUN;

/* PWM_AB Register fields */
extern TMCField TMC7300_PWM_A;
extern TMCField TMC7300_PWM_B;

/* CHOPCONF Register fields */
extern TMCField TMC7300_DISS2VS;
extern TMCField TMC7300_DISS2G;
extern TMCField TMC7300_TBL;
extern TMCField TMC7300_ENABLEDRV;

/* PWMCONF Register fields */
extern TMCField TMC7300_FREEWHEEL;
extern TMCField TMC7300_PWM_FREQ;

/* DRVSTATUS Register Fields */
extern TMCField TMC7300_T150;
extern TMCField TMC7300_T120;
extern TMCField TMC7300_OLB;
extern TMCField TMC7300_OLA;
extern TMCField TMC7300_S2VSB;
extern TMCField TMC7300_S2VSA;
extern TMCField TMC7300_S2GB;
extern TMCField TMC7300_S2GA;
extern TMCField TMC7300_OT;
extern TMCField TMC7300_OTPW;

#endif /* TMC7300_FIELDS_H_ */