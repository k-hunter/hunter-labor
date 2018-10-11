#pragma once


//personal debug switch////////////////////////////////////////////////////////// 
/********************************************************************************
P_DEBUG:
0     turn off debug 
1	    turn on debug 
 ********************************************************************************/
#include "utils/Log.h"
#define P_DEBUG	1
#if P_DEBUG
static char mark_label[18] = "plooo";
#define SEPARATOR_LINE "----------------------------------"
//static char mark_label[18] = "";//for the label you wish to mark when you adb logcat or whatever
#define P_LOGI(fmt, ...) ALOGI("%s-,F:%s:%d, Fuc:%s  " fmt,mark_label,(char*)__FILE__,__LINE__,(char*)__FUNCTION__,##__VA_ARGS__)
#else
#define P_LOGI(...)
#endif

///////////////////////////////////////////////////////////////////////////////////



