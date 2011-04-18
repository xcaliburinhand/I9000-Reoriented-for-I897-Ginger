#ifndef __GPIO_SETTINGS_H_
#define __GPIO_SETTINGS_H_

#define S3C_GPIO_SETPIN_ZERO	0
#define S3C_GPIO_SETPIN_ONE 	1
#define S3C_GPIO_SETPIN_NONE	2

#define S3C_GPIO_EINT S3C_GPIO_SPECIAL(0xF)

//	GPIO Initialization table
//	{pin number,      pin conf,        pin value,            pullup/down config}
static unsigned int initial_gpio_table[][4] =
{
	// GPA0 --------------------------------------------------------------------
#if defined(CONFIG_ARIES_NTT) // Modify NTT S1	
	{S5PV210_GPA0(4), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPA0(5), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPA0(6), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPA0(7), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
#endif
	// GPA1 --------------------------------------------------------------------

	// GPA1 --------------------------------------------------------------------

	// GPB ---------------------------------------------------------------------
	{S5PV210_GPB(0),  S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPB(1),  S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPB(2),  S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPB(3),  S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPB(4),  S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPB(5),  S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPB(6),  S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPB(7),  S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 

	// GPC0 --------------------------------------------------------------------
	{S5PV210_GPC0(0), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPC0(1), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPC0(2), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPC0(3), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPC0(4), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 

	// GPC1 --------------------------------------------------------------------
	{S5PV210_GPC1(0), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPC1(1), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPC1(2), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPC1(3), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPC1(4), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 

	// GPD0 --------------------------------------------------------------------
	{S5PV210_GPD0(0), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPD0(1), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPD0(2), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPD0(3), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 

	// GPD1 --------------------------------------------------------------------
	{S5PV210_GPD1(0), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPD1(1), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPD1(2), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPD1(3), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPD1(4), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPD1(5), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 

	// GPE0 --------------------------------------------------------------------
	{S5PV210_GPE0(0), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPE0(1), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPE0(2), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPE0(3), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPE0(4), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPE0(5), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPE0(6), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPE0(7), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 

	// GPE1 --------------------------------------------------------------------
	{S5PV210_GPE1(0), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPE1(1), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPE1(2), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPE1(3), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPE1(4), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 

	// GPF0 --------------------------------------------------------------------

	// GPF1 --------------------------------------------------------------------

	// GPF2 --------------------------------------------------------------------

	// GPF3 --------------------------------------------------------------------
	{S5PV210_GPF3(4), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPF3(5), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 

	// GPG0 --------------------------------------------------------------------
	{S5PV210_GPG0(0), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPG0(1), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPG0(2), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPG0(3), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPG0(4), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPG0(5), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPG0(6), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 

	// GPG1 --------------------------------------------------------------------
	{S5PV210_GPG1(0), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPG1(1), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPG1(2), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPG1(3), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPG1(4), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPG1(5), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPG1(6), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 

	// GPG2 --------------------------------------------------------------------
	{S5PV210_GPG2(0), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPG2(1), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPG2(2), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPG2(3), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPG2(4), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPG2(5), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPG2(6), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 

	// GPG3 --------------------------------------------------------------------
	{S5PV210_GPG3(0), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPG3(1), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPG3(2), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPG3(3), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPG3(4), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPG3(5), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPG3(6), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 

	// GPH0 --------------------------------------------------------------------
	{S5PV210_GPH0(0), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPH0(1), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPH0(2), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPH0(3), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPH0(4), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPH0(5), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPH0(6), S3C_GPIO_EINT,   S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPH0(7), S3C_GPIO_EINT,   S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 

	// GPH1 --------------------------------------------------------------------
	{S5PV210_GPH1(0), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPH1(1), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPH1(2), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPH1(3), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPH1(4), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPH1(5), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPH1(6), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPH1(7), S3C_GPIO_EINT,   S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 

	// GPH2 --------------------------------------------------------------------
	{S5PV210_GPH2(0), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPH2(1), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPH2(2), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPH2(3), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPH2(4), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPH2(5), S3C_GPIO_EINT,   S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPH2(6), S3C_GPIO_EINT,   S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPH2(7), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 

	// GPH3 --------------------------------------------------------------------
	{S5PV210_GPH3(0), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPH3(1), S3C_GPIO_EINT,   S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPH3(2), S3C_GPIO_EINT,   S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPH3(3), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPH3(4), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPH3(5), S3C_GPIO_EINT,   S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPH3(6), S3C_GPIO_EINT,   S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPH3(7), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 

	// GPI ---------------------------------------------------------------------
	{S5PV210_GPI(0),  S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPI(1),  S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPI(2),  S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPI(3),  S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPI(4),  S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPI(5),  S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPI(6),  S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 

	// GPJ0 --------------------------------------------------------------------
	{S5PV210_GPJ0(0), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPJ0(1), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPJ0(2), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPJ0(3), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPJ0(4), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPJ0(5), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPJ0(6), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPJ0(7), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 

	// GPJ1 --------------------------------------------------------------------
	{S5PV210_GPJ1(0), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPJ1(1), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPJ1(2), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPJ1(3), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPJ1(4), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPJ1(5), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 

	// GPJ2 --------------------------------------------------------------------
	{S5PV210_GPJ2(0), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPJ2(1), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPJ2(3), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPJ2(4), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_UP}, 
	{S5PV210_GPJ2(5), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPJ2(6), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPJ2(7), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 

	// GPJ3 --------------------------------------------------------------------
	{S5PV210_GPJ3(0), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPJ3(1), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_GPJ3(2), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPJ3(3), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN},
	{S5PV210_GPJ3(4), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPJ3(5), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPJ3(6), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPJ3(7), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 

	// GPJ4 --------------------------------------------------------------------
	{S5PV210_GPJ4(0), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPJ4(1), S3C_GPIO_EINT,   S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE},  
	{S5PV210_GPJ4(2), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPJ4(3), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, 
	{S5PV210_GPJ4(4), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 

	// MP01 --------------------------------------------------------------------
	{S5PV210_MP01(0), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_MP01(2), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 

	// MP02 --------------------------------------------------------------------
	{S5PV210_MP02(0), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_MP02(1), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_MP02(3), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 

	// MP03 --------------------------------------------------------------------
	{S5PV210_MP03(3), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
#if defined(CONFIG_ARIES_NTT)
	{S5PV210_MP03(5), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
#else
	{S5PV210_MP03(5), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
#endif
	{S5PV210_MP03(6), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_MP03(7), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 

	// MP04 --------------------------------------------------------------------
	{S5PV210_MP04(0), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_MP04(2), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_MP04(4), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_MP04(5), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_MP04(6), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, 
	{S5PV210_MP04(7), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 

	// MP05 --------------------------------------------------------------------
	{S5PV210_MP05(4), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
	{S5PV210_MP05(6), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, 
};

//	off part GPIO Sleep Control table
//	{pin number,      sleep mode conf,    sleep pullup/down config}
static unsigned int sleep_gpio_table[][3] =
{
	// GPA0 -------------------------------------------------
	{S5PV210_GPA0(0), S3C_GPIO_SLP_PREV,  S3C_GPIO_PULL_NONE},	//GPIO_BT_UART_RXD
	{S5PV210_GPA0(1), S3C_GPIO_SLP_PREV,  S3C_GPIO_PULL_NONE},	//GPIO_BT_UART_TXD
	{S5PV210_GPA0(2), S3C_GPIO_SLP_PREV,  S3C_GPIO_PULL_NONE},	//GPIO_BT_UART_CTS
	{S5PV210_GPA0(3), S3C_GPIO_SLP_OUT1,  S3C_GPIO_PULL_NONE},	//GPIO_BT_UART_RTS
#if defined(CONFIG_ARIES_NTT)
	{S5PV210_GPA0(4), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_GPA04
	{S5PV210_GPA0(5), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_GPA05
	{S5PV210_GPA0(6), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_GPA06
	{S5PV210_GPA0(7), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_GPA07
#else
	{S5PV210_GPA0(4), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_GPA0(5), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},
	{S5PV210_GPA0(6), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_GPA0(7), S3C_GPIO_SLP_OUT1,  S3C_GPIO_PULL_NONE},
#endif

	// GPA1 -------------------------------------------------
	{S5PV210_GPA1(0), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_AP_RXD
	{S5PV210_GPA1(1), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_AP_TXD
#if defined(CONFIG_ARIES_NTT)	
	{S5PV210_GPA1(2), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_AP_FLM_RXD
#else
	{S5PV210_GPA1(2), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_NONE},	//GPIO_AP_FLM_RXD
#endif
	{S5PV210_GPA1(3), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_AP_FLM_TXD

	// GPB	-------------------------------------------------
#if defined(CONFIG_ARIES_NTT)
	{S5PV210_GPB(0),  S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, 	//GPIO_CAM_VGA_nSTBY
	{S5PV210_GPB(1),  S3C_GPIO_SLP_OUT1,  S3C_GPIO_PULL_NONE},	//GPIO_MSENSE_nRST
	{S5PV210_GPB(2),  S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_CAM_VGA_nRST
#else
	{S5PV210_GPB(0),  S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},
	{S5PV210_GPB(1),  S3C_GPIO_SLP_OUT1,  S3C_GPIO_PULL_NONE},
	{S5PV210_GPB(2),  S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},
#endif
	{S5PV210_GPB(3),  S3C_GPIO_SLP_PREV,  S3C_GPIO_PULL_NONE},	//GPIO_BT_nRST
	{S5PV210_GPB(4),  S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_NONE},	//GPIO_BOOT_MODE
	{S5PV210_GPB(5),  S3C_GPIO_SLP_PREV,  S3C_GPIO_PULL_NONE},	//GPIO_WLAN_BT_EN
	{S5PV210_GPB(6),  S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_GPB6
	{S5PV210_GPB(7),  S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_GPB7 (CAM_IO_EN)

	// GPC0 -------------------------------------------------
#if defined(CONFIG_ARIES_NTT)
	{S5PV210_GPC0(0), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_GPC00
	{S5PV210_GPC0(1), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_GPC01
	{S5PV210_GPC0(2), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_GPC02
	{S5PV210_GPC0(3), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_GPC03
	{S5PV210_GPC0(4), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_GPC04
#else
	{S5PV210_GPC0(0), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},
	{S5PV210_GPC0(1), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_GPC0(2), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},
	{S5PV210_GPC0(3), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_NONE},
	{S5PV210_GPC0(4), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},
#endif

	// GPC1 -------------------------------------------------
	{S5PV210_GPC1(0), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_GPC10
	{S5PV210_GPC1(1), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_GPC11
	{S5PV210_GPC1(2), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_GPC12
	{S5PV210_GPC1(3), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_GPC13
	{S5PV210_GPC1(4), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_GPC14

	// GPD0 -------------------------------------------------
	{S5PV210_GPD0(0), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_GPD00
	{S5PV210_GPD0(1), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_VIBTONE_PWM
	{S5PV210_GPD0(2), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_GPD02
	{S5PV210_GPD0(3), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_GPD03

	// GPD1 -------------------------------------------------
	{S5PV210_GPD1(0), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_CAM_SDA_29V
	{S5PV210_GPD1(1), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_CAM_SCL_29V
#if defined(CONFIG_ARIES_NTT)
	{S5PV210_GPD1(2), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_GPD12
	{S5PV210_GPD1(3), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_GPD13
#else
	{S5PV210_GPD1(2), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_NONE},
	{S5PV210_GPD1(3), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_NONE},
#endif
	{S5PV210_GPD1(4), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_TSP_SDA_28V
	{S5PV210_GPD1(5), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_TSP_SCL_28V

	// GPE0 -------------------------------------------------
	{S5PV210_GPE0(0), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_CAM_PCLK
	{S5PV210_GPE0(1), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_CAM_VSYNC
	{S5PV210_GPE0(2), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_CAM_HSYNC
	{S5PV210_GPE0(3), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_CAM_D0
	{S5PV210_GPE0(4), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_CAM_D1
	{S5PV210_GPE0(5), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_CAM_D2
	{S5PV210_GPE0(6), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_CAM_D3
	{S5PV210_GPE0(7), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_CAM_D4

	// GPE1 -------------------------------------------------
	{S5PV210_GPE1(0), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_CAM_D5
	{S5PV210_GPE1(1), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_CAM_D6
	{S5PV210_GPE1(2), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_CAM_D7
	{S5PV210_GPE1(3), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_CAM_MCLK
	{S5PV210_GPE1(4), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_GPE14

	// GPF0 -------------------------------------------------
	{S5PV210_GPF0(0), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_DISPLAY_HSYNC
	{S5PV210_GPF0(1), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_DISPLAY_VSYNC
	{S5PV210_GPF0(2), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_DISPLAY_DE
	{S5PV210_GPF0(3), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_DISPLAY_PCLK
	{S5PV210_GPF0(4), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_LCD_D0
	{S5PV210_GPF0(5), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_LCD_D1
	{S5PV210_GPF0(6), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_LCD_D2
	{S5PV210_GPF0(7), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_LCD_D3

	// GPF1 -------------------------------------------------
	{S5PV210_GPF1(0), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_LCD_D4
	{S5PV210_GPF1(1), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_LCD_D5
	{S5PV210_GPF1(2), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_LCD_D6
	{S5PV210_GPF1(3), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_LCD_D7
	{S5PV210_GPF1(4), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_LCD_D8
	{S5PV210_GPF1(5), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_LCD_D9
	{S5PV210_GPF1(6), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_LCD_D10
	{S5PV210_GPF1(7), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_LCD_D11

	// GPF2 -------------------------------------------------
	{S5PV210_GPF2(0), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_LCD_D12
	{S5PV210_GPF2(1), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_LCD_D13
	{S5PV210_GPF2(2), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_LCD_D14
	{S5PV210_GPF2(3), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_LCD_D15
	{S5PV210_GPF2(4), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_LCD_D16
	{S5PV210_GPF2(5), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_LCD_D17
	{S5PV210_GPF2(6), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_LCD_D18
	{S5PV210_GPF2(7), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_LCD_D19

	// GPF3 -------------------------------------------------
	{S5PV210_GPF3(0), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_LCD_D20
	{S5PV210_GPF3(1), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_LCD_D21
	{S5PV210_GPF3(2), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_LCD_D22
	{S5PV210_GPF3(3), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_LCD_D23
	{S5PV210_GPF3(4), S3C_GPIO_SLP_PREV,  S3C_GPIO_PULL_NONE},	//GPIO_CODEC_LDO_EN
	{S5PV210_GPF3(5), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_GPF35

	// GPG0 -------------------------------------------------
	{S5PV210_GPG0(0), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_NAND_CLK
	{S5PV210_GPG0(1), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_NAND_CMD
	{S5PV210_GPG0(2), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	// GPIO_ALS_SCL_28V
	{S5PV210_GPG0(3), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_NAND_D0
	{S5PV210_GPG0(4), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_NAND_D1
	{S5PV210_GPG0(5), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_NAND_D2
	{S5PV210_GPG0(6), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_NAND_D3

	// GPG1 -------------------------------------------------
	{S5PV210_GPG1(0), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_WLAN_SDIO_CLK
	{S5PV210_GPG1(1), S3C_GPIO_SLP_OUT1,  S3C_GPIO_PULL_NONE},	//GPIO_WLAN_SDIO_CMD
	{S5PV210_GPG1(2), S3C_GPIO_SLP_PREV,  S3C_GPIO_PULL_NONE},	//GPIO_WLAN_nRST
	{S5PV210_GPG1(3), S3C_GPIO_SLP_OUT1,  S3C_GPIO_PULL_NONE},	//GPIO_WLAN_SDIO_D0
	{S5PV210_GPG1(4), S3C_GPIO_SLP_OUT1,  S3C_GPIO_PULL_NONE},	//GPIO_WLAN_SDIO_D1
	{S5PV210_GPG1(5), S3C_GPIO_SLP_OUT1,  S3C_GPIO_PULL_NONE},	//GPIO_WLAN_SDIO_D2
	{S5PV210_GPG1(6), S3C_GPIO_SLP_OUT1,  S3C_GPIO_PULL_NONE},	//GPIO_WLAN_SDIO_D3

	// GPG2 -------------------------------------------------
	{S5PV210_GPG2(0), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_T_FLASH_CLK
	{S5PV210_GPG2(1), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_T_FLASH_CMD
	{S5PV210_GPG2(2), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_ALS_SDA_28V
	{S5PV210_GPG2(3), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_T_FLASH_D0
	{S5PV210_GPG2(4), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_T_FLASH_D1
	{S5PV210_GPG2(5), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_T_FLASH_D2
	{S5PV210_GPG2(6), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_T_FLASH_D3

	// GPG3 -------------------------------------------------
#if defined(CONFIG_ARIES_NTT)
	{S5PV210_GPG3(0), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_GPG30
	{S5PV210_GPG3(1), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_GPG31
	{S5PV210_GPG3(2), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_FLM_SEL
#else
	{S5PV210_GPG3(0), S3C_GPIO_SLP_OUT1,  S3C_GPIO_PULL_NONE},
	{S5PV210_GPG3(1), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},
	{S5PV210_GPG3(2), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
#endif
	{S5PV210_GPG3(3), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_UP},		//GPIO_TA_CURRENT_SEL_AP
	{S5PV210_GPG3(4), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_BT_WAKE
	{S5PV210_GPG3(5), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_WLAN_WAKE
	{S5PV210_GPG3(6), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_GPG36


	// GPI --------------------------------------------------
	{S5PV210_GPI(0),  S3C_GPIO_SLP_PREV,  S3C_GPIO_PULL_NONE},		//GPIO_CODEC_I2S_CLK
	{S5PV210_GPI(1),  S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_GPI1
	{S5PV210_GPI(2),  S3C_GPIO_SLP_PREV,  S3C_GPIO_PULL_NONE},		//GPIO_CODEC_I2S_WS
	{S5PV210_GPI(3),  S3C_GPIO_SLP_PREV,  S3C_GPIO_PULL_NONE},		//GPIO_CODEC_I3S_DI
	{S5PV210_GPI(4),  S3C_GPIO_SLP_PREV,  S3C_GPIO_PULL_NONE},		//GPIO_CODEC_I3S_DO
	{S5PV210_GPI(5),  S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_GPI5
	{S5PV210_GPI(6),  S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_GPI6

	// GPJ0 -------------------------------------------------
	{S5PV210_GPJ0(0), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_NONE},	//GPIO_MSENSE_SCL_28V
	{S5PV210_GPJ0(1), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_NONE},	//GPIO_MSENSE_SDA_28V
	{S5PV210_GPJ0(2), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_NONE},	//GPIO_HWREV_MODE0
	{S5PV210_GPJ0(3), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_NONE},	//GPIO_HWREV_MODE1
	{S5PV210_GPJ0(4), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_NONE},	//GPIO_HWREV_MODE2
	{S5PV210_GPJ0(5), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_TOUCH_INT
	{S5PV210_GPJ0(6), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_CAM_MEGA_EN
	{S5PV210_GPJ0(7), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_NONE},	//GPIO_HWREV_MODE3

	// GPJ1 -------------------------------------------------
#if defined(CONFIG_ARIES_NTT)
	{S5PV210_GPJ1(0), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE},	//GPIO_PHONE_ON
#else
	{S5PV210_GPJ1(0), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
#endif
	{S5PV210_GPJ1(1), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_VIBTONE_EN1
	{S5PV210_GPJ1(2), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_GPJ12
	{S5PV210_GPJ1(3), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_TOUCH_EN
#if defined(CONFIG_ARIES_NTT)
	{S5PV210_GPJ1(4), S3C_GPIO_SLP_OUT1,  S3C_GPIO_PULL_NONE},	//GPIO_PS_ON
#else
	{S5PV210_GPJ1(4), S3C_GPIO_SLP_PREV,  S3C_GPIO_PULL_NONE},
#endif
	{S5PV210_GPJ1(5), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_CAM_MEGA_nRST

	// GPJ2 -------------------------------------------------
	{S5PV210_GPJ2(0), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_GPJ20
	{S5PV210_GPJ2(1), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_GPJ21
	{S5PV210_GPJ2(2), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_OLED_DET
	{S5PV210_GPJ2(3), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_GPJ23
#if defined(CONFIG_ARIES_NTT)
	{S5PV210_GPJ2(4), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_USIM_BOOT
#else
	{S5PV210_GPJ2(4), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_UP},
#endif
	{S5PV210_GPJ2(5), S3C_GPIO_SLP_PREV,  S3C_GPIO_PULL_NONE},	//GPIO_SUB_MICBIAS_EN
	{S5PV210_GPJ2(6), S3C_GPIO_SLP_PREV,  S3C_GPIO_PULL_NONE},	//GPIO_EARPATH_SEL
	{S5PV210_GPJ2(7), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_MASSMEMORY_EN

	// GPJ3 -------------------------------------------------
	{S5PV210_GPJ3(0), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//_3_TOUCH_SDA_28V
	{S5PV210_GPJ3(1), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//_3_TOUCH_SCL_28V
	{S5PV210_GPJ3(2), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//_3_GPIO_TOUCH_EN
	{S5PV210_GPJ3(3), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_GPJ33
	{S5PV210_GPJ3(4), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_NONE},	//GPIO_USB_SDA_28V
	{S5PV210_GPJ3(5), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_NONE},	//GPIO_USB_SCL_28V
	{S5PV210_GPJ3(6), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_NONE},	//GPIO_AP_SDA_28V
	{S5PV210_GPJ3(7), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_NONE},	//GPIO_AP_SCL_28V

	// GPJ4 -------------------------------------------------
	{S5PV210_GPJ4(0), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_NONE},	//GPIO_AP_PMIC_SDA
	{S5PV210_GPJ4(1), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//_3_GPIO_TOUCH_INT
	{S5PV210_GPJ4(2), S3C_GPIO_SLP_PREV,  S3C_GPIO_PULL_NONE},	//GPIO_MICBIAS_EN
	{S5PV210_GPJ4(3), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_NONE},	//GPIO_AP_PMIC_SCL
	{S5PV210_GPJ4(4), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_GPJ44

	// MP01 -------------------------------------------------
	{S5PV210_MP01(0), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_MP010
	{S5PV210_MP01(1), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_DISPLAY_CS
	{S5PV210_MP01(2), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_MP012
	{S5PV210_MP01(3), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_OLED_ID
	{S5PV210_MP01(4), S3C_GPIO_SLP_OUT1,  S3C_GPIO_PULL_NONE},	//GPIO_AP_NANDCS
	{S5PV210_MP01(5), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_DIC_ID
	{S5PV210_MP01(6), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_MP016
	{S5PV210_MP01(7), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_MP017

	// MP02 -------------------------------------------------
	{S5PV210_MP02(0), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_MP020
	{S5PV210_MP02(1), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_MP021
	{S5PV210_MP02(2), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_NONE},	//GPIO_MP022
	{S5PV210_MP02(3), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_MP023

	// MP03 -------------------------------------------------
	{S5PV210_MP03(0), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_MP030
	{S5PV210_MP03(1), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_MP031
	{S5PV210_MP03(2), S3C_GPIO_SLP_OUT1,  S3C_GPIO_PULL_NONE},	//GPIO_MP032
	{S5PV210_MP03(3), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_PDA_ACTIVE
	{S5PV210_MP03(4), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_NONE},	//GPIO_MP04
#if defined(CONFIG_ARIES_NTT)
	{S5PV210_MP03(5), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_MP035
#else
	{S5PV210_MP03(5), S3C_GPIO_SLP_OUT1,  S3C_GPIO_PULL_NONE},
#endif
	{S5PV210_MP03(6), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_MP036
	{S5PV210_MP03(7), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_MP037

	// MP04 -------------------------------------------------
	{S5PV210_MP04(0), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_MP040
	{S5PV210_MP04(1), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_DISPLAY_CLK
	{S5PV210_MP04(2), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_MP042
	{S5PV210_MP04(3), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_DISPLAY_SI
	{S5PV210_MP04(4), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_MP044
	{S5PV210_MP04(5), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_MP045
#if defined(CONFIG_ARIES_NTT)
	{S5PV210_MP04(6), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_MP046
#else
	{S5PV210_MP04(6), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},
#endif
	{S5PV210_MP04(7), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_MP047

	// MP05 -------------------------------------------------
	{S5PV210_MP05(0), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_NONE},	//FUEL_SCL_18V
	{S5PV210_MP05(1), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_NONE},	//FUEL_SDA_18V
	{S5PV210_MP05(2), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_NONE},	//GPIO_AP_SCL_18V
	{S5PV210_MP05(3), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_NONE},	//GPIO_AP_SDA_18V
	{S5PV210_MP05(4), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_MP054
	{S5PV210_MP05(5), S3C_GPIO_SLP_OUT0,  S3C_GPIO_PULL_NONE},	//GPIO_MLCD_RST
	{S5PV210_MP05(6), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},	//GPIO_MP056
	{S5PV210_MP05(7), S3C_GPIO_SLP_PREV,  S3C_GPIO_PULL_NONE},	//GPIO_UART_SEL

	// MP06 -------------------------------------------------
	{S5PV210_MP06(0), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_MP06(1), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_MP06(2), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_MP06(3), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_MP06(4), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_MP06(5), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_MP06(6), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_MP06(7), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},

	// MP07 -------------------------------------------------
	{S5PV210_MP07(0), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_MP07(1), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_MP07(2), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_MP07(3), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_MP07(4), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_MP07(5), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_MP07(6), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_MP07(7), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
};



//	alive part GPIO Sleep Control table
//	{pin number,      sleep mode conf, sleep pin value,      sleep pullup/down config}
static unsigned int sleep_alive_gpio_table[][4] =
{
//	{S5PV210_GPH0(0), S3C_GPIO_INPUT,	S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, //pwr hold
#if defined(CONFIG_ARIES_NTT)
	{S5PV210_GPH0(1), S3C_GPIO_INPUT,	S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN},//GPIO_ACC_INT
#else
	{S5PV210_GPH0(1), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE},
#endif
//	{S5PV210_GPH0(2), S3C_GPIO_INPUT,	S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, //GPIO_PS_VOUT
	{S5PV210_GPH0(3), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, //GPIO_BUCK_1_EN_A
	{S5PV210_GPH0(4), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, //GPIO_BUCK_1_EN_B
	{S5PV210_GPH0(5), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, //GPIO_BUCK_2_EN
#if defined(CONFIG_ARIES_NTT)
	{S5PV210_GPH1(0), S3C_GPIO_INPUT,	S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE}, //GPIO_FUEL_INT_N
#else
	{S5PV210_GPH1(0), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN},
#endif
	{S5PV210_GPH1(1), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, //GPIO_GPH11
	{S5PV210_GPH1(2), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, //GPIO_GPH11
	{S5PV210_GPH1(4), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, //GPIO_GPH14
	{S5PV210_GPH1(5), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, //GPIO_GPH15
	{S5PV210_GPH1(6), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, //GPIO_GPH16
#if defined(CONFIG_ARIES_NTT)
	{S5PV210_GPH1(7), S3C_GPIO_INPUT,	S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN},	//GPIO_GPH17
#else
	{S5PV210_GPH1(7), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE},
#endif

	{S5PV210_GPH2(0), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, //GPIO_GPH20
	{S5PV210_GPH2(1), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE}, //GPIO_KBC1
	{S5PV210_GPH2(2), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN}, //GPIO_KBC2
#if defined(CONFIG_ARIES_NTT)
	{S5PV210_GPH2(3), S3C_GPIO_INPUT,	S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE},	//GPIO_PHONE_ACTIVE
#else
	{S5PV210_GPH2(3), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN},
#endif
	{S5PV210_GPH3(0), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN},	//GPIO_KBR0
	{S5PV210_GPH3(3), S3C_GPIO_INPUT,  S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN},	//GPIO_KBR3
	{S5PV210_GPH3(7), S3C_GPIO_OUTPUT, S3C_GPIO_SETPIN_ONE,  S3C_GPIO_PULL_NONE},	//GPIO_CP_RST
};

#endif
