#ifndef __MPU_H
#define __MPU_H
//#include "sys.h"
#include "hardware_init.h"
//////////////////////////////////////////////////////////////////////////////////	 
//本程序只供学习使用，未经作者许可，不得用于其它任何用途
//ALIENTEK STM32H7开发板
//MPU驱动代码	   
//正点原子@ALIENTEK
//技术论坛:www.openedv.com
//创建日期:2017/8/15
//版本：V1.0
//版权所有，盗版必究。
//Copyright(C) 广州市星翼电子科技有限公司 2014-2024
//All rights reserved									  
////////////////////////////////////////////////////////////////////////////////// 	

//u8 MPU_Set_Protection(u32 baseaddr,u32 size,u32 rnum,u32 ap);
u8 MPU_Set_Protection(u32 baseaddr,u32 size,u32 rnum,u8 ap,u8 sen,u8 cen,u8 ben);
void MPU_Memory_Protection(void);
#endif
