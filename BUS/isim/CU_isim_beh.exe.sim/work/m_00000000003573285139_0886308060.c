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
static const char *ng0 = "C:/Users/Parsa/Desktop/fpga/BUS/ALU.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static int ng5[] = {4, 0};
static int ng6[] = {5, 0};
static int ng7[] = {6, 0};
static int ng8[] = {7, 0};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {5U, 0U};
static int ng11[] = {15, 0};
static unsigned int ng12[] = {8U, 0U};
static unsigned int ng13[] = {9U, 0U};
static unsigned int ng14[] = {10U, 0U};
static unsigned int ng15[] = {11U, 0U};
static unsigned int ng16[] = {12U, 0U};
static unsigned int ng17[] = {1U, 0U};
static unsigned int ng18[] = {13U, 0U};



static void Always_30_0(char *t0)
{
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 4392);
    *((int *)t2) = 1;
    t3 = (t0 + 3360);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);

LAB5:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 32);
    if (t6 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t6 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t6 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t6 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t6 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t6 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t6 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t6 == 1)
        goto LAB20;

LAB21:
LAB22:    goto LAB2;

LAB6:    xsi_set_current_line(32, ng0);
    t7 = (t0 + 1528U);
    t8 = *((char **)t7);
    t7 = (t0 + 1688U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 16, t8, 16, t9, 16);
    t7 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t7, t10, 0, 0, 16, 0LL);
    goto LAB22;

LAB8:    xsi_set_current_line(33, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = (t0 + 1688U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 16, t4, 16, t7, 16);
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t10, 0, 0, 16, 0LL);
    goto LAB22;

LAB10:    xsi_set_current_line(34, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t4, 16, t3, 32);
    t7 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t7, t10, 0, 0, 16, 0LL);
    goto LAB22;

LAB12:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 32, t4, 16, t3, 32);
    t7 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t7, t10, 0, 0, 16, 0LL);
    goto LAB22;

LAB14:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = (t0 + 1688U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 & t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB23;

LAB24:
LAB25:    t39 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t39, t10, 0, 0, 16, 0LL);
    goto LAB22;

LAB16:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = (t0 + 1688U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB26;

LAB27:
LAB28:    t39 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t39, t10, 0, 0, 16, 0LL);
    goto LAB22;

LAB18:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = (t0 + 1688U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB29;

LAB30:
LAB31:    t21 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t21, t10, 0, 0, 16, 0LL);
    goto LAB22;

LAB20:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (~(t11));
    *((unsigned int *)t10) = t12;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB33;

LAB32:    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 65535U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 65535U);
    t8 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t8, t10, 0, 0, 16, 0LL);
    goto LAB22;

LAB23:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    t21 = (t4 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t4);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t26 = (~(t25));
    t27 = *((unsigned int *)t7);
    t28 = (~(t27));
    t29 = *((unsigned int *)t22);
    t30 = (~(t29));
    t31 = (t24 & t26);
    t32 = (t28 & t30);
    t33 = (~(t31));
    t34 = (~(t32));
    t35 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t35 & t33);
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t34);
    t37 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t37 & t33);
    t38 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t38 & t34);
    goto LAB25;

LAB26:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    t21 = (t4 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t31 = (t25 & t24);
    t26 = *((unsigned int *)t22);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t32 = (t28 & t27);
    t29 = (~(t31));
    t30 = (~(t32));
    t33 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t33 & t29);
    t34 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t34 & t30);
    goto LAB28;

LAB29:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    goto LAB31;

LAB33:    t13 = *((unsigned int *)t10);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t10) = (t13 | t14);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t3) = (t15 | t16);
    goto LAB32;

}

static void Cont_41_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 3576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2408);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 65535U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 65535U);
    t14 = (t0 + 4520);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 65535U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 15);
    t27 = (t0 + 4408);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_42_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t35[8];
    char t43[8];
    char t44[8];
    char t47[8];
    char t76[8];
    char t84[8];
    char t85[8];
    char t88[8];
    char t120[8];
    char t121[8];
    char t124[8];
    char t151[8];
    char t177[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t45;
    char *t46;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    char *t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t86;
    char *t87;
    char *t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    char *t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    char *t122;
    char *t123;
    char *t125;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    char *t139;
    char *t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    char *t146;
    char *t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    char *t152;
    char *t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    char *t159;
    char *t160;
    char *t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    char *t174;
    char *t175;
    char *t176;
    char *t178;
    char *t179;
    char *t180;
    char *t181;
    char *t182;
    char *t183;
    char *t184;
    char *t185;
    char *t186;
    unsigned int t187;
    unsigned int t188;
    char *t189;
    unsigned int t190;
    unsigned int t191;
    char *t192;
    unsigned int t193;
    unsigned int t194;
    char *t195;

LAB0:    t1 = (t0 + 3824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1848U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng9)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t39 = *((unsigned int *)t4);
    t40 = (~(t39));
    t41 = *((unsigned int *)t29);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t43, 8);

LAB20:    t182 = (t0 + 4584);
    t183 = (t182 + 56U);
    t184 = *((char **)t183);
    t185 = (t184 + 56U);
    t186 = *((char **)t185);
    memset(t186, 0, 8);
    t187 = 1U;
    t188 = t187;
    t189 = (t3 + 4);
    t190 = *((unsigned int *)t3);
    t187 = (t187 & t190);
    t191 = *((unsigned int *)t189);
    t188 = (t188 & t191);
    t192 = (t186 + 4);
    t193 = *((unsigned int *)t186);
    *((unsigned int *)t186) = (t193 | t187);
    t194 = *((unsigned int *)t192);
    *((unsigned int *)t192) = (t194 | t188);
    xsi_driver_vfirst_trans(t182, 0, 0);
    t195 = (t0 + 4424);
    *((int *)t195) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t33 = (t0 + 1528U);
    t34 = *((char **)t33);
    t33 = (t0 + 1488U);
    t36 = (t33 + 72U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t35, 32, t34, t37, 2, t38, 32, 1);
    goto LAB13;

LAB14:    t45 = (t0 + 1848U);
    t46 = *((char **)t45);
    t45 = ((char*)((ng10)));
    memset(t47, 0, 8);
    t48 = (t46 + 4);
    t49 = (t45 + 4);
    t50 = *((unsigned int *)t46);
    t51 = *((unsigned int *)t45);
    t52 = (t50 ^ t51);
    t53 = *((unsigned int *)t48);
    t54 = *((unsigned int *)t49);
    t55 = (t53 ^ t54);
    t56 = (t52 | t55);
    t57 = *((unsigned int *)t48);
    t58 = *((unsigned int *)t49);
    t59 = (t57 | t58);
    t60 = (~(t59));
    t61 = (t56 & t60);
    if (t61 != 0)
        goto LAB24;

LAB21:    if (t59 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t47) = 1;

LAB24:    memset(t44, 0, 8);
    t63 = (t47 + 4);
    t64 = *((unsigned int *)t63);
    t65 = (~(t64));
    t66 = *((unsigned int *)t47);
    t67 = (t66 & t65);
    t68 = (t67 & 1U);
    if (t68 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t63) != 0)
        goto LAB27;

LAB28:    t70 = (t44 + 4);
    t71 = *((unsigned int *)t44);
    t72 = *((unsigned int *)t70);
    t73 = (t71 || t72);
    if (t73 > 0)
        goto LAB29;

LAB30:    t80 = *((unsigned int *)t44);
    t81 = (~(t80));
    t82 = *((unsigned int *)t70);
    t83 = (t81 || t82);
    if (t83 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t70) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t44) > 0)
        goto LAB35;

LAB36:    memcpy(t43, t84, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t35, 32, t43, 32);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

LAB23:    t62 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t44) = 1;
    goto LAB28;

LAB27:    t69 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t69) = 1;
    goto LAB28;

LAB29:    t74 = (t0 + 1528U);
    t75 = *((char **)t74);
    t74 = (t0 + 1488U);
    t77 = (t74 + 72U);
    t78 = *((char **)t77);
    t79 = ((char*)((ng11)));
    xsi_vlog_generic_get_index_select_value(t76, 32, t75, t78, 2, t79, 32, 1);
    goto LAB30;

LAB31:    t86 = (t0 + 1848U);
    t87 = *((char **)t86);
    t86 = ((char*)((ng12)));
    memset(t88, 0, 8);
    t89 = (t87 + 4);
    t90 = (t86 + 4);
    t91 = *((unsigned int *)t87);
    t92 = *((unsigned int *)t86);
    t93 = (t91 ^ t92);
    t94 = *((unsigned int *)t89);
    t95 = *((unsigned int *)t90);
    t96 = (t94 ^ t95);
    t97 = (t93 | t96);
    t98 = *((unsigned int *)t89);
    t99 = *((unsigned int *)t90);
    t100 = (t98 | t99);
    t101 = (~(t100));
    t102 = (t97 & t101);
    if (t102 != 0)
        goto LAB41;

LAB38:    if (t100 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t88) = 1;

LAB41:    memset(t85, 0, 8);
    t104 = (t88 + 4);
    t105 = *((unsigned int *)t104);
    t106 = (~(t105));
    t107 = *((unsigned int *)t88);
    t108 = (t107 & t106);
    t109 = (t108 & 1U);
    if (t109 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t104) != 0)
        goto LAB44;

LAB45:    t111 = (t85 + 4);
    t112 = *((unsigned int *)t85);
    t113 = *((unsigned int *)t111);
    t114 = (t112 || t113);
    if (t114 > 0)
        goto LAB46;

LAB47:    t116 = *((unsigned int *)t85);
    t117 = (~(t116));
    t118 = *((unsigned int *)t111);
    t119 = (t117 || t118);
    if (t119 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t111) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t85) > 0)
        goto LAB52;

LAB53:    memcpy(t84, t120, 8);

LAB54:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t43, 32, t76, 32, t84, 32);
    goto LAB37;

LAB35:    memcpy(t43, t76, 8);
    goto LAB37;

LAB40:    t103 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t103) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t85) = 1;
    goto LAB45;

LAB44:    t110 = (t85 + 4);
    *((unsigned int *)t85) = 1;
    *((unsigned int *)t110) = 1;
    goto LAB45;

LAB46:    t115 = ((char*)((ng1)));
    goto LAB47;

LAB48:    t122 = (t0 + 1848U);
    t123 = *((char **)t122);
    t122 = ((char*)((ng13)));
    memset(t124, 0, 8);
    t125 = (t123 + 4);
    t126 = (t122 + 4);
    t127 = *((unsigned int *)t123);
    t128 = *((unsigned int *)t122);
    t129 = (t127 ^ t128);
    t130 = *((unsigned int *)t125);
    t131 = *((unsigned int *)t126);
    t132 = (t130 ^ t131);
    t133 = (t129 | t132);
    t134 = *((unsigned int *)t125);
    t135 = *((unsigned int *)t126);
    t136 = (t134 | t135);
    t137 = (~(t136));
    t138 = (t133 & t137);
    if (t138 != 0)
        goto LAB58;

LAB55:    if (t136 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t124) = 1;

LAB58:    memset(t121, 0, 8);
    t140 = (t124 + 4);
    t141 = *((unsigned int *)t140);
    t142 = (~(t141));
    t143 = *((unsigned int *)t124);
    t144 = (t143 & t142);
    t145 = (t144 & 1U);
    if (t145 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t140) != 0)
        goto LAB61;

LAB62:    t147 = (t121 + 4);
    t148 = *((unsigned int *)t121);
    t149 = *((unsigned int *)t147);
    t150 = (t148 || t149);
    if (t150 > 0)
        goto LAB63;

LAB64:    t170 = *((unsigned int *)t121);
    t171 = (~(t170));
    t172 = *((unsigned int *)t147);
    t173 = (t171 || t172);
    if (t173 > 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t147) > 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t121) > 0)
        goto LAB69;

LAB70:    memcpy(t120, t177, 8);

LAB71:    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t84, 32, t115, 32, t120, 32);
    goto LAB54;

LAB52:    memcpy(t84, t115, 8);
    goto LAB54;

LAB57:    t139 = (t124 + 4);
    *((unsigned int *)t124) = 1;
    *((unsigned int *)t139) = 1;
    goto LAB58;

LAB59:    *((unsigned int *)t121) = 1;
    goto LAB62;

LAB61:    t146 = (t121 + 4);
    *((unsigned int *)t121) = 1;
    *((unsigned int *)t146) = 1;
    goto LAB62;

LAB63:    t152 = (t0 + 1048U);
    t153 = *((char **)t152);
    memset(t151, 0, 8);
    t152 = (t153 + 4);
    t154 = *((unsigned int *)t152);
    t155 = (~(t154));
    t156 = *((unsigned int *)t153);
    t157 = (t156 & t155);
    t158 = (t157 & 1U);
    if (t158 != 0)
        goto LAB75;

LAB73:    if (*((unsigned int *)t152) == 0)
        goto LAB72;

LAB74:    t159 = (t151 + 4);
    *((unsigned int *)t151) = 1;
    *((unsigned int *)t159) = 1;

LAB75:    t160 = (t151 + 4);
    t161 = (t153 + 4);
    t162 = *((unsigned int *)t153);
    t163 = (~(t162));
    *((unsigned int *)t151) = t163;
    *((unsigned int *)t160) = 0;
    if (*((unsigned int *)t161) != 0)
        goto LAB77;

LAB76:    t168 = *((unsigned int *)t151);
    *((unsigned int *)t151) = (t168 & 4294967295U);
    t169 = *((unsigned int *)t160);
    *((unsigned int *)t160) = (t169 & 4294967295U);
    goto LAB64;

LAB65:    t174 = (t0 + 2408);
    t175 = (t174 + 56U);
    t176 = *((char **)t175);
    t178 = (t0 + 2408);
    t179 = (t178 + 72U);
    t180 = *((char **)t179);
    t181 = ((char*)((ng11)));
    xsi_vlog_generic_get_index_select_value(t177, 32, t176, t180, 2, t181, 32, 1);
    goto LAB66;

LAB67:    xsi_vlog_unsigned_bit_combine(t120, 32, t151, 32, t177, 32);
    goto LAB71;

LAB69:    memcpy(t120, t151, 8);
    goto LAB71;

LAB72:    *((unsigned int *)t151) = 1;
    goto LAB75;

LAB77:    t164 = *((unsigned int *)t151);
    t165 = *((unsigned int *)t161);
    *((unsigned int *)t151) = (t164 | t165);
    t166 = *((unsigned int *)t160);
    t167 = *((unsigned int *)t161);
    *((unsigned int *)t160) = (t166 | t167);
    goto LAB76;

}

static void Cont_47_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t33[8];
    char t36[8];
    char t54[8];
    char t55[8];
    char t58[8];
    char t87[8];
    char t95[8];
    char t96[8];
    char t99[8];
    char t115[8];
    char t129[8];
    char t145[8];
    char t153[8];
    char t201[8];
    char t202[8];
    char t205[8];
    char t232[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t56;
    char *t57;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    char *t86;
    char *t88;
    char *t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t97;
    char *t98;
    char *t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    char *t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    char *t122;
    char *t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;
    char *t128;
    char *t130;
    char *t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    char *t144;
    char *t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    char *t152;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    char *t157;
    char *t158;
    char *t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    char *t167;
    char *t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    int t177;
    int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    char *t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    char *t191;
    char *t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    char *t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    char *t203;
    char *t204;
    char *t206;
    char *t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    unsigned int t219;
    char *t220;
    char *t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    char *t227;
    char *t228;
    unsigned int t229;
    unsigned int t230;
    unsigned int t231;
    char *t233;
    char *t234;
    unsigned int t235;
    unsigned int t236;
    unsigned int t237;
    unsigned int t238;
    unsigned int t239;
    char *t240;
    char *t241;
    char *t242;
    unsigned int t243;
    unsigned int t244;
    unsigned int t245;
    unsigned int t246;
    unsigned int t247;
    unsigned int t248;
    unsigned int t249;
    unsigned int t250;
    unsigned int t251;
    unsigned int t252;
    unsigned int t253;
    unsigned int t254;
    char *t255;
    char *t256;
    char *t257;
    char *t258;
    char *t259;
    char *t260;
    unsigned int t261;
    unsigned int t262;
    char *t263;
    unsigned int t264;
    unsigned int t265;
    char *t266;
    unsigned int t267;
    unsigned int t268;
    char *t269;

LAB0:    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1848U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng14)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t50 = *((unsigned int *)t4);
    t51 = (~(t50));
    t52 = *((unsigned int *)t29);
    t53 = (t51 || t52);
    if (t53 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t54, 8);

LAB20:    t256 = (t0 + 4648);
    t257 = (t256 + 56U);
    t258 = *((char **)t257);
    t259 = (t258 + 56U);
    t260 = *((char **)t259);
    memset(t260, 0, 8);
    t261 = 1U;
    t262 = t261;
    t263 = (t3 + 4);
    t264 = *((unsigned int *)t3);
    t261 = (t261 & t264);
    t265 = *((unsigned int *)t263);
    t262 = (t262 & t265);
    t266 = (t260 + 4);
    t267 = *((unsigned int *)t260);
    *((unsigned int *)t260) = (t267 | t261);
    t268 = *((unsigned int *)t266);
    *((unsigned int *)t266) = (t268 | t262);
    xsi_driver_vfirst_trans(t256, 0, 0);
    t269 = (t0 + 4440);
    *((int *)t269) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t34 = (t0 + 1528U);
    t35 = *((char **)t34);
    t34 = (t0 + 1488U);
    t37 = (t34 + 72U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng11)));
    xsi_vlog_generic_get_index_select_value(t36, 32, t35, t38, 2, t39, 32, 1);
    memset(t33, 0, 8);
    t40 = (t33 + 4);
    t41 = (t36 + 4);
    t42 = *((unsigned int *)t36);
    t43 = (~(t42));
    *((unsigned int *)t33) = t43;
    *((unsigned int *)t40) = 0;
    if (*((unsigned int *)t41) != 0)
        goto LAB22;

LAB21:    t48 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t48 & 4294967295U);
    t49 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t49 & 4294967295U);
    goto LAB13;

LAB14:    t56 = (t0 + 1848U);
    t57 = *((char **)t56);
    t56 = ((char*)((ng15)));
    memset(t58, 0, 8);
    t59 = (t57 + 4);
    t60 = (t56 + 4);
    t61 = *((unsigned int *)t57);
    t62 = *((unsigned int *)t56);
    t63 = (t61 ^ t62);
    t64 = *((unsigned int *)t59);
    t65 = *((unsigned int *)t60);
    t66 = (t64 ^ t65);
    t67 = (t63 | t66);
    t68 = *((unsigned int *)t59);
    t69 = *((unsigned int *)t60);
    t70 = (t68 | t69);
    t71 = (~(t70));
    t72 = (t67 & t71);
    if (t72 != 0)
        goto LAB26;

LAB23:    if (t70 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t58) = 1;

LAB26:    memset(t55, 0, 8);
    t74 = (t58 + 4);
    t75 = *((unsigned int *)t74);
    t76 = (~(t75));
    t77 = *((unsigned int *)t58);
    t78 = (t77 & t76);
    t79 = (t78 & 1U);
    if (t79 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t74) != 0)
        goto LAB29;

LAB30:    t81 = (t55 + 4);
    t82 = *((unsigned int *)t55);
    t83 = *((unsigned int *)t81);
    t84 = (t82 || t83);
    if (t84 > 0)
        goto LAB31;

LAB32:    t91 = *((unsigned int *)t55);
    t92 = (~(t91));
    t93 = *((unsigned int *)t81);
    t94 = (t92 || t93);
    if (t94 > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t81) > 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t55) > 0)
        goto LAB37;

LAB38:    memcpy(t54, t95, 8);

LAB39:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t33, 32, t54, 32);
    goto LAB20;

LAB18:    memcpy(t3, t33, 8);
    goto LAB20;

LAB22:    t44 = *((unsigned int *)t33);
    t45 = *((unsigned int *)t41);
    *((unsigned int *)t33) = (t44 | t45);
    t46 = *((unsigned int *)t40);
    t47 = *((unsigned int *)t41);
    *((unsigned int *)t40) = (t46 | t47);
    goto LAB21;

LAB25:    t73 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t73) = 1;
    goto LAB26;

LAB27:    *((unsigned int *)t55) = 1;
    goto LAB30;

LAB29:    t80 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t80) = 1;
    goto LAB30;

LAB31:    t85 = (t0 + 1528U);
    t86 = *((char **)t85);
    t85 = (t0 + 1488U);
    t88 = (t85 + 72U);
    t89 = *((char **)t88);
    t90 = ((char*)((ng11)));
    xsi_vlog_generic_get_index_select_value(t87, 32, t86, t89, 2, t90, 32, 1);
    goto LAB32;

LAB33:    t97 = (t0 + 1848U);
    t98 = *((char **)t97);
    t97 = ((char*)((ng16)));
    memset(t99, 0, 8);
    t100 = (t98 + 4);
    t101 = (t97 + 4);
    t102 = *((unsigned int *)t98);
    t103 = *((unsigned int *)t97);
    t104 = (t102 ^ t103);
    t105 = *((unsigned int *)t100);
    t106 = *((unsigned int *)t101);
    t107 = (t105 ^ t106);
    t108 = (t104 | t107);
    t109 = *((unsigned int *)t100);
    t110 = *((unsigned int *)t101);
    t111 = (t109 | t110);
    t112 = (~(t111));
    t113 = (t108 & t112);
    if (t113 != 0)
        goto LAB43;

LAB40:    if (t111 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t99) = 1;

LAB43:    memset(t115, 0, 8);
    t116 = (t99 + 4);
    t117 = *((unsigned int *)t116);
    t118 = (~(t117));
    t119 = *((unsigned int *)t99);
    t120 = (t119 & t118);
    t121 = (t120 & 1U);
    if (t121 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t116) != 0)
        goto LAB46;

LAB47:    t123 = (t115 + 4);
    t124 = *((unsigned int *)t115);
    t125 = *((unsigned int *)t123);
    t126 = (t124 || t125);
    if (t126 > 0)
        goto LAB48;

LAB49:    memcpy(t153, t115, 8);

LAB50:    memset(t96, 0, 8);
    t185 = (t153 + 4);
    t186 = *((unsigned int *)t185);
    t187 = (~(t186));
    t188 = *((unsigned int *)t153);
    t189 = (t188 & t187);
    t190 = (t189 & 1U);
    if (t190 != 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t185) != 0)
        goto LAB64;

LAB65:    t192 = (t96 + 4);
    t193 = *((unsigned int *)t96);
    t194 = *((unsigned int *)t192);
    t195 = (t193 || t194);
    if (t195 > 0)
        goto LAB66;

LAB67:    t197 = *((unsigned int *)t96);
    t198 = (~(t197));
    t199 = *((unsigned int *)t192);
    t200 = (t198 || t199);
    if (t200 > 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t192) > 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t96) > 0)
        goto LAB72;

LAB73:    memcpy(t95, t201, 8);

LAB74:    goto LAB34;

LAB35:    xsi_vlog_unsigned_bit_combine(t54, 32, t87, 32, t95, 32);
    goto LAB39;

LAB37:    memcpy(t54, t87, 8);
    goto LAB39;

LAB42:    t114 = (t99 + 4);
    *((unsigned int *)t99) = 1;
    *((unsigned int *)t114) = 1;
    goto LAB43;

LAB44:    *((unsigned int *)t115) = 1;
    goto LAB47;

LAB46:    t122 = (t115 + 4);
    *((unsigned int *)t115) = 1;
    *((unsigned int *)t122) = 1;
    goto LAB47;

LAB48:    t127 = (t0 + 1528U);
    t128 = *((char **)t127);
    t127 = ((char*)((ng1)));
    memset(t129, 0, 8);
    t130 = (t128 + 4);
    t131 = (t127 + 4);
    t132 = *((unsigned int *)t128);
    t133 = *((unsigned int *)t127);
    t134 = (t132 ^ t133);
    t135 = *((unsigned int *)t130);
    t136 = *((unsigned int *)t131);
    t137 = (t135 ^ t136);
    t138 = (t134 | t137);
    t139 = *((unsigned int *)t130);
    t140 = *((unsigned int *)t131);
    t141 = (t139 | t140);
    t142 = (~(t141));
    t143 = (t138 & t142);
    if (t143 != 0)
        goto LAB54;

LAB51:    if (t141 != 0)
        goto LAB53;

LAB52:    *((unsigned int *)t129) = 1;

LAB54:    memset(t145, 0, 8);
    t146 = (t129 + 4);
    t147 = *((unsigned int *)t146);
    t148 = (~(t147));
    t149 = *((unsigned int *)t129);
    t150 = (t149 & t148);
    t151 = (t150 & 1U);
    if (t151 != 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t146) != 0)
        goto LAB57;

LAB58:    t154 = *((unsigned int *)t115);
    t155 = *((unsigned int *)t145);
    t156 = (t154 & t155);
    *((unsigned int *)t153) = t156;
    t157 = (t115 + 4);
    t158 = (t145 + 4);
    t159 = (t153 + 4);
    t160 = *((unsigned int *)t157);
    t161 = *((unsigned int *)t158);
    t162 = (t160 | t161);
    *((unsigned int *)t159) = t162;
    t163 = *((unsigned int *)t159);
    t164 = (t163 != 0);
    if (t164 == 1)
        goto LAB59;

LAB60:
LAB61:    goto LAB50;

LAB53:    t144 = (t129 + 4);
    *((unsigned int *)t129) = 1;
    *((unsigned int *)t144) = 1;
    goto LAB54;

LAB55:    *((unsigned int *)t145) = 1;
    goto LAB58;

LAB57:    t152 = (t145 + 4);
    *((unsigned int *)t145) = 1;
    *((unsigned int *)t152) = 1;
    goto LAB58;

LAB59:    t165 = *((unsigned int *)t153);
    t166 = *((unsigned int *)t159);
    *((unsigned int *)t153) = (t165 | t166);
    t167 = (t115 + 4);
    t168 = (t145 + 4);
    t169 = *((unsigned int *)t115);
    t170 = (~(t169));
    t171 = *((unsigned int *)t167);
    t172 = (~(t171));
    t173 = *((unsigned int *)t145);
    t174 = (~(t173));
    t175 = *((unsigned int *)t168);
    t176 = (~(t175));
    t177 = (t170 & t172);
    t178 = (t174 & t176);
    t179 = (~(t177));
    t180 = (~(t178));
    t181 = *((unsigned int *)t159);
    *((unsigned int *)t159) = (t181 & t179);
    t182 = *((unsigned int *)t159);
    *((unsigned int *)t159) = (t182 & t180);
    t183 = *((unsigned int *)t153);
    *((unsigned int *)t153) = (t183 & t179);
    t184 = *((unsigned int *)t153);
    *((unsigned int *)t153) = (t184 & t180);
    goto LAB61;

LAB62:    *((unsigned int *)t96) = 1;
    goto LAB65;

LAB64:    t191 = (t96 + 4);
    *((unsigned int *)t96) = 1;
    *((unsigned int *)t191) = 1;
    goto LAB65;

LAB66:    t196 = ((char*)((ng17)));
    goto LAB67;

LAB68:    t203 = (t0 + 1848U);
    t204 = *((char **)t203);
    t203 = ((char*)((ng18)));
    memset(t205, 0, 8);
    t206 = (t204 + 4);
    t207 = (t203 + 4);
    t208 = *((unsigned int *)t204);
    t209 = *((unsigned int *)t203);
    t210 = (t208 ^ t209);
    t211 = *((unsigned int *)t206);
    t212 = *((unsigned int *)t207);
    t213 = (t211 ^ t212);
    t214 = (t210 | t213);
    t215 = *((unsigned int *)t206);
    t216 = *((unsigned int *)t207);
    t217 = (t215 | t216);
    t218 = (~(t217));
    t219 = (t214 & t218);
    if (t219 != 0)
        goto LAB78;

LAB75:    if (t217 != 0)
        goto LAB77;

LAB76:    *((unsigned int *)t205) = 1;

LAB78:    memset(t202, 0, 8);
    t221 = (t205 + 4);
    t222 = *((unsigned int *)t221);
    t223 = (~(t222));
    t224 = *((unsigned int *)t205);
    t225 = (t224 & t223);
    t226 = (t225 & 1U);
    if (t226 != 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t221) != 0)
        goto LAB81;

LAB82:    t228 = (t202 + 4);
    t229 = *((unsigned int *)t202);
    t230 = *((unsigned int *)t228);
    t231 = (t229 || t230);
    if (t231 > 0)
        goto LAB83;

LAB84:    t251 = *((unsigned int *)t202);
    t252 = (~(t251));
    t253 = *((unsigned int *)t228);
    t254 = (t252 || t253);
    if (t254 > 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t228) > 0)
        goto LAB87;

LAB88:    if (*((unsigned int *)t202) > 0)
        goto LAB89;

LAB90:    memcpy(t201, t255, 8);

LAB91:    goto LAB69;

LAB70:    xsi_vlog_unsigned_bit_combine(t95, 32, t196, 32, t201, 32);
    goto LAB74;

LAB72:    memcpy(t95, t196, 8);
    goto LAB74;

LAB77:    t220 = (t205 + 4);
    *((unsigned int *)t205) = 1;
    *((unsigned int *)t220) = 1;
    goto LAB78;

LAB79:    *((unsigned int *)t202) = 1;
    goto LAB82;

LAB81:    t227 = (t202 + 4);
    *((unsigned int *)t202) = 1;
    *((unsigned int *)t227) = 1;
    goto LAB82;

LAB83:    t233 = (t0 + 1048U);
    t234 = *((char **)t233);
    memset(t232, 0, 8);
    t233 = (t234 + 4);
    t235 = *((unsigned int *)t233);
    t236 = (~(t235));
    t237 = *((unsigned int *)t234);
    t238 = (t237 & t236);
    t239 = (t238 & 1U);
    if (t239 != 0)
        goto LAB95;

LAB93:    if (*((unsigned int *)t233) == 0)
        goto LAB92;

LAB94:    t240 = (t232 + 4);
    *((unsigned int *)t232) = 1;
    *((unsigned int *)t240) = 1;

LAB95:    t241 = (t232 + 4);
    t242 = (t234 + 4);
    t243 = *((unsigned int *)t234);
    t244 = (~(t243));
    *((unsigned int *)t232) = t244;
    *((unsigned int *)t241) = 0;
    if (*((unsigned int *)t242) != 0)
        goto LAB97;

LAB96:    t249 = *((unsigned int *)t232);
    *((unsigned int *)t232) = (t249 & 4294967295U);
    t250 = *((unsigned int *)t241);
    *((unsigned int *)t241) = (t250 & 4294967295U);
    goto LAB84;

LAB85:    t255 = ((char*)((ng1)));
    goto LAB86;

LAB87:    xsi_vlog_unsigned_bit_combine(t201, 32, t232, 32, t255, 32);
    goto LAB91;

LAB89:    memcpy(t201, t232, 8);
    goto LAB91;

LAB92:    *((unsigned int *)t232) = 1;
    goto LAB95;

LAB97:    t245 = *((unsigned int *)t232);
    t246 = *((unsigned int *)t242);
    *((unsigned int *)t232) = (t245 | t246);
    t247 = *((unsigned int *)t241);
    t248 = *((unsigned int *)t242);
    *((unsigned int *)t241) = (t247 | t248);
    goto LAB96;

}


extern void work_m_00000000003573285139_0886308060_init()
{
	static char *pe[] = {(void *)Always_30_0,(void *)Cont_41_1,(void *)Cont_42_2,(void *)Cont_47_3};
	xsi_register_didat("work_m_00000000003573285139_0886308060", "isim/CU_isim_beh.exe.sim/work/m_00000000003573285139_0886308060.didat");
	xsi_register_executes(pe);
}
