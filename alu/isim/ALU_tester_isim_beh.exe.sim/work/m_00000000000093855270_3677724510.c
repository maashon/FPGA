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
static const char *ng0 = "C:/Users/Parsa/Desktop/fpga/alu/ALU_tester.v";
static int ng1[] = {0, 0};
static int ng2[] = {5, 0};



static void Initial_8_0(char *t0)
{
    char t1[8];
    char *t2;
    char *t3;
    char *t4;

LAB0:    xsi_set_current_line(8, ng0);
    *((int *)t1) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t2 = (t1 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t1, 0, 0, 16);
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t1, 16, 0, 16);

LAB1:    return;
}

static void Initial_9_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 2936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(9, ng0);

LAB4:    xsi_set_current_line(10, ng0);
    t2 = (t0 + 2744);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(10, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    xsi_set_current_line(11, ng0);
    t2 = (t0 + 2744);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(11, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB1;

}


extern void work_m_00000000000093855270_3677724510_init()
{
	static char *pe[] = {(void *)Initial_8_0,(void *)Initial_9_1};
	xsi_register_didat("work_m_00000000000093855270_3677724510", "isim/ALU_tester_isim_beh.exe.sim/work/m_00000000000093855270_3677724510.didat");
	xsi_register_executes(pe);
}
