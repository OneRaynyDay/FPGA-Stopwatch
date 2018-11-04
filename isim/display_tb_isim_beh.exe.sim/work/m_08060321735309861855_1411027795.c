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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ray/home/classes/cs/152a/lab3/lab3/display.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {192U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {249U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {164U, 0U};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {176U, 0U};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {153U, 0U};
static unsigned int ng11[] = {5U, 0U};
static unsigned int ng12[] = {146U, 0U};
static unsigned int ng13[] = {6U, 0U};
static unsigned int ng14[] = {130U, 0U};
static unsigned int ng15[] = {7U, 0U};
static unsigned int ng16[] = {248U, 0U};
static unsigned int ng17[] = {8U, 0U};
static unsigned int ng18[] = {128U, 0U};
static unsigned int ng19[] = {9U, 0U};
static unsigned int ng20[] = {144U, 0U};
static unsigned int ng21[] = {255U, 0U};
static unsigned int ng22[] = {14U, 0U};
static unsigned int ng23[] = {13U, 0U};
static unsigned int ng24[] = {11U, 0U};
static unsigned int ng25[] = {15U, 0U};
static int ng26[] = {4, 0};
static int ng27[] = {0, 0};
static int ng28[] = {1, 0};



static int sp_display_segment(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    char *t10;
    char *t11;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1528);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t5 = (t1 + 4592);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);

LAB6:    t8 = ((char*)((ng1)));
    t9 = xsi_vlog_unsigned_case_compare(t7, 4, t8, 4);
    if (t9 == 1)
        goto LAB7;

LAB8:    t4 = ((char*)((ng3)));
    t9 = xsi_vlog_unsigned_case_compare(t7, 4, t4, 4);
    if (t9 == 1)
        goto LAB9;

LAB10:    t4 = ((char*)((ng5)));
    t9 = xsi_vlog_unsigned_case_compare(t7, 4, t4, 4);
    if (t9 == 1)
        goto LAB11;

LAB12:    t4 = ((char*)((ng7)));
    t9 = xsi_vlog_unsigned_case_compare(t7, 4, t4, 4);
    if (t9 == 1)
        goto LAB13;

LAB14:    t4 = ((char*)((ng9)));
    t9 = xsi_vlog_unsigned_case_compare(t7, 4, t4, 4);
    if (t9 == 1)
        goto LAB15;

LAB16:    t4 = ((char*)((ng11)));
    t9 = xsi_vlog_unsigned_case_compare(t7, 4, t4, 4);
    if (t9 == 1)
        goto LAB17;

LAB18:    t4 = ((char*)((ng13)));
    t9 = xsi_vlog_unsigned_case_compare(t7, 4, t4, 4);
    if (t9 == 1)
        goto LAB19;

LAB20:    t4 = ((char*)((ng15)));
    t9 = xsi_vlog_unsigned_case_compare(t7, 4, t4, 4);
    if (t9 == 1)
        goto LAB21;

LAB22:    t4 = ((char*)((ng17)));
    t9 = xsi_vlog_unsigned_case_compare(t7, 4, t4, 4);
    if (t9 == 1)
        goto LAB23;

LAB24:    t4 = ((char*)((ng19)));
    t9 = xsi_vlog_unsigned_case_compare(t7, 4, t4, 4);
    if (t9 == 1)
        goto LAB25;

LAB26:
LAB28:
LAB27:    xsi_set_current_line(48, ng0);
    t4 = ((char*)((ng21)));
    t5 = (t1 + 4272);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);

LAB29:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    xsi_set_current_line(38, ng0);
    t10 = ((char*)((ng2)));
    t11 = (t1 + 4272);
    xsi_vlogvar_wait_assign_value(t11, t10, 0, 0, 8, 0LL);
    goto LAB29;

LAB9:    xsi_set_current_line(39, ng0);
    t5 = ((char*)((ng4)));
    t6 = (t1 + 4272);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 8, 0LL);
    goto LAB29;

LAB11:    xsi_set_current_line(40, ng0);
    t5 = ((char*)((ng6)));
    t6 = (t1 + 4272);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 8, 0LL);
    goto LAB29;

LAB13:    xsi_set_current_line(41, ng0);
    t5 = ((char*)((ng8)));
    t6 = (t1 + 4272);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 8, 0LL);
    goto LAB29;

LAB15:    xsi_set_current_line(42, ng0);
    t5 = ((char*)((ng10)));
    t6 = (t1 + 4272);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 8, 0LL);
    goto LAB29;

LAB17:    xsi_set_current_line(43, ng0);
    t5 = ((char*)((ng12)));
    t6 = (t1 + 4272);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 8, 0LL);
    goto LAB29;

LAB19:    xsi_set_current_line(44, ng0);
    t5 = ((char*)((ng14)));
    t6 = (t1 + 4272);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 8, 0LL);
    goto LAB29;

LAB21:    xsi_set_current_line(45, ng0);
    t5 = ((char*)((ng16)));
    t6 = (t1 + 4272);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 8, 0LL);
    goto LAB29;

LAB23:    xsi_set_current_line(46, ng0);
    t5 = ((char*)((ng18)));
    t6 = (t1 + 4272);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 8, 0LL);
    goto LAB29;

LAB25:    xsi_set_current_line(47, ng0);
    t5 = ((char*)((ng20)));
    t6 = (t1 + 4272);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 8, 0LL);
    goto LAB29;

}

static int sp_change_anode(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1960);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(55, ng0);

LAB5:    xsi_set_current_line(56, ng0);
    t5 = (t1 + 3712U);
    t6 = *((char **)t5);

LAB6:    t5 = ((char*)((ng1)));
    t7 = xsi_vlog_unsigned_case_compare(t6, 4, t5, 4);
    if (t7 == 1)
        goto LAB7;

LAB8:    t4 = ((char*)((ng3)));
    t7 = xsi_vlog_unsigned_case_compare(t6, 4, t4, 4);
    if (t7 == 1)
        goto LAB9;

LAB10:    t4 = ((char*)((ng5)));
    t7 = xsi_vlog_unsigned_case_compare(t6, 4, t4, 4);
    if (t7 == 1)
        goto LAB11;

LAB12:    t4 = ((char*)((ng7)));
    t7 = xsi_vlog_unsigned_case_compare(t6, 4, t4, 4);
    if (t7 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(61, ng0);
    t4 = ((char*)((ng25)));
    t5 = (t1 + 4112);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);

LAB17:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    xsi_set_current_line(57, ng0);
    t8 = ((char*)((ng22)));
    t9 = (t1 + 4112);
    xsi_vlogvar_wait_assign_value(t9, t8, 0, 0, 4, 0LL);
    goto LAB17;

LAB9:    xsi_set_current_line(58, ng0);
    t5 = ((char*)((ng23)));
    t8 = (t1 + 4112);
    xsi_vlogvar_wait_assign_value(t8, t5, 0, 0, 4, 0LL);
    goto LAB17;

LAB11:    xsi_set_current_line(59, ng0);
    t5 = ((char*)((ng24)));
    t8 = (t1 + 4112);
    xsi_vlogvar_wait_assign_value(t8, t5, 0, 0, 4, 0LL);
    goto LAB17;

LAB13:    xsi_set_current_line(60, ng0);
    t5 = ((char*)((ng15)));
    t8 = (t1 + 4112);
    xsi_vlogvar_wait_assign_value(t8, t5, 0, 0, 4, 0LL);
    goto LAB17;

}

static void Cont_21_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 5664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 2912U);
    t3 = *((char **)t2);
    t2 = (t0 + 7384);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 15U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 3);
    t16 = (t0 + 7224);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_22_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 5912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 3072U);
    t3 = *((char **)t2);
    t2 = (t0 + 7448);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 15U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 4, 7);
    t16 = (t0 + 7240);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_23_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 6160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 3232U);
    t3 = *((char **)t2);
    t2 = (t0 + 7512);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 15U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 8, 11);
    t16 = (t0 + 7256);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_24_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 6408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 3392U);
    t3 = *((char **)t2);
    t2 = (t0 + 7576);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 15U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 12, 15);
    t16 = (t0 + 7272);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_31_4(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    t1 = (t0 + 6656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 4432);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng26)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_mod(t6, 32, t4, 3, t5, 32);
    t7 = (t0 + 7640);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t11, 0, 8);
    t12 = 15U;
    t13 = t12;
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t12 = (t12 & t15);
    t16 = *((unsigned int *)t14);
    t13 = (t13 & t16);
    t17 = (t11 + 4);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 | t12);
    t19 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t19 | t13);
    xsi_driver_vfirst_trans(t7, 0, 3);
    t20 = (t0 + 7288);
    *((int *)t20) = 1;

LAB1:    return;
}

static void Always_67_5(char *t0)
{
    char t13[8];
    char t19[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;

LAB0:    t1 = (t0 + 6904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 7304);
    *((int *)t2) = 1;
    t3 = (t0 + 6936);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(67, ng0);

LAB5:    xsi_set_current_line(68, ng0);
    t4 = (t0 + 2752U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(71, ng0);

LAB10:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 4432);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng28)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 3, t5, 32);
    t11 = (t0 + 4432);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 3, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 3552U);
    t3 = *((char **)t2);
    t2 = (t0 + 3512U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t11 = (t0 + 3512U);
    t12 = (t11 + 48U);
    t14 = *((char **)t12);
    t15 = (t0 + 4432);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng26)));
    memset(t19, 0, 8);
    xsi_vlog_unsigned_mod(t19, 32, t17, 3, t18, 32);
    xsi_vlog_generic_get_array_select_value(t13, 4, t3, t5, t14, 2, 1, t19, 32, 2);
    t20 = (t0 + 6712);
    t21 = (t0 + 1528);
    t22 = xsi_create_subprogram_invocation(t20, 0, t0, t21, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t21, t22);
    t23 = (t0 + 4592);
    xsi_vlogvar_assign_value(t23, t13, 0, 0, 4);

LAB13:    t24 = (t0 + 6808);
    t25 = *((char **)t24);
    t26 = (t25 + 80U);
    t27 = *((char **)t26);
    t28 = (t27 + 272U);
    t29 = *((char **)t28);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t32 = ((int  (*)(char *, char *))t31)(t0, t25);

LAB15:    if (t32 != 0)
        goto LAB16;

LAB11:    t25 = (t0 + 1528);
    xsi_vlog_subprogram_popinvocation(t25);

LAB12:    t33 = (t0 + 6808);
    t34 = *((char **)t33);
    t33 = (t0 + 1528);
    t35 = (t0 + 6712);
    t36 = 0;
    xsi_delete_subprogram_invocation(t33, t34, t0, t35, t36);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 4432);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6712);
    t11 = (t0 + 1960);
    t12 = xsi_create_subprogram_invocation(t5, 0, t0, t11, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t11, t12);
    t14 = (t0 + 4752);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 3);

LAB19:    t15 = (t0 + 6808);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t20 = (t18 + 272U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    t23 = *((char **)t22);
    t32 = ((int  (*)(char *, char *))t23)(t0, t16);

LAB21:    if (t32 != 0)
        goto LAB22;

LAB17:    t16 = (t0 + 1960);
    xsi_vlog_subprogram_popinvocation(t16);

LAB18:    t24 = (t0 + 6808);
    t25 = *((char **)t24);
    t24 = (t0 + 1960);
    t26 = (t0 + 6712);
    t27 = 0;
    xsi_delete_subprogram_invocation(t24, t25, t0, t26, t27);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(68, ng0);

LAB9:    xsi_set_current_line(69, ng0);
    t11 = ((char*)((ng27)));
    t12 = (t0 + 4272);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 8, 0LL);
    goto LAB8;

LAB14:;
LAB16:    t24 = (t0 + 6904U);
    *((char **)t24) = &&LAB13;
    goto LAB1;

LAB20:;
LAB22:    t15 = (t0 + 6904U);
    *((char **)t15) = &&LAB19;
    goto LAB1;

}


extern void work_m_08060321735309861855_1411027795_init()
{
	static char *pe[] = {(void *)Cont_21_0,(void *)Cont_22_1,(void *)Cont_23_2,(void *)Cont_24_3,(void *)Cont_31_4,(void *)Always_67_5};
	static char *se[] = {(void *)sp_display_segment,(void *)sp_change_anode};
	xsi_register_didat("work_m_08060321735309861855_1411027795", "isim/display_tb_isim_beh.exe.sim/work/m_08060321735309861855_1411027795.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
