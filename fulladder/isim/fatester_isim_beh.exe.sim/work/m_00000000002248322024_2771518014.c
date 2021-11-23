/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Parsa/Desktop/fpga/fulladder/fatester.v";
static int ng1[] = {20, 0};



static void Initial_6_0(char *t0)
{
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(6, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5144);
    *((int *)t8) = t7;

LAB4:    t9 = (t0 + 5144);
    if (*((int *)t9) > 0)
        goto LAB5;

LAB6:
LAB1:    return;
LAB5:    xsi_set_current_line(6, ng0);
    t10 = (t0 + 2656);
    xsi_process_wait(t10, 15000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(6, ng0);
    *((int *)t11) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t12 = (t11 + 4);
    *((int *)t12) = 0;
    t13 = (t0 + 1608);
    xsi_vlogvar_assign_value(t13, t11, 0, 0, 1);
    t2 = (t0 + 5144);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB4;

}

static void Initial_7_1(char *t0)
{
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;

LAB0:    t1 = (t0 + 3096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(7, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5148);
    *((int *)t8) = t7;

LAB4:    t9 = (t0 + 5148);
    if (*((int *)t9) > 0)
        goto LAB5;

LAB6:
LAB1:    return;
LAB5:    xsi_set_current_line(7, ng0);
    t10 = (t0 + 2904);
    xsi_process_wait(t10, 15000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(7, ng0);
    *((int *)t11) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t12 = (t11 + 4);
    *((int *)t12) = 0;
    t13 = (t0 + 1768);
    xsi_vlogvar_assign_value(t13, t11, 0, 0, 1);
    t2 = (t0 + 5148);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB4;

}

static void Initial_8_2(char *t0)
{
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;

LAB0:    t1 = (t0 + 3344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(8, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5152);
    *((int *)t8) = t7;

LAB4:    t9 = (t0 + 5152);
    if (*((int *)t9) > 0)
        goto LAB5;

LAB6:
LAB1:    return;
LAB5:    xsi_set_current_line(8, ng0);
    t10 = (t0 + 3152);
    xsi_process_wait(t10, 15000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(8, ng0);
    *((int *)t11) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t12 = (t11 + 4);
    *((int *)t12) = 0;
    t13 = (t0 + 1928);
    xsi_vlogvar_assign_value(t13, t11, 0, 0, 1);
    t2 = (t0 + 5152);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB4;

}


extern void work_m_00000000002248322024_2771518014_init()
{
	static char *pe[] = {(void *)Initial_6_0,(void *)Initial_7_1,(void *)Initial_8_2};
	xsi_register_didat("work_m_00000000002248322024_2771518014", "isim/fatester_isim_beh.exe.sim/work/m_00000000002248322024_2771518014.didat");
	xsi_register_executes(pe);
}
