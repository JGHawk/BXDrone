#ifndef TimeOut_h
#define TimeOut_h

/*****************************************/
/**************** INCLUDES ***************/
/*****************************************/

#include "Arduino.h"


/*****************************************/
/**************** DEFINES ****************/
/*****************************************/

#define TIMEOUT_EXPIRED       2000


/*****************************************/
/**************** FUNCTIONS **************/
/*****************************************/

void TMO_feed();
int TMO_check();
unsigned long TMO_getCurrentTime();


#endif