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

/* This file is designed for use with ISim build 0xc3576ebc */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/Non-install/college/4-2/Computer Architecture/Lab/Assignment2/Instruction_Memory.v";
static int ng1[] = {3, 0};
static int ng2[] = {2, 0};
static int ng3[] = {1, 0};
static int ng4[] = {0, 0};
static const char *ng5 = "Instruction.mem";



static void Cont_29_0(char *t0)
{
    char t3[8];
    char t6[8];
    char t15[8];
    char t19[8];
    char t28[8];
    char t32[8];
    char t41[8];
    char t45[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
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
    char *t29;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1768);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 1768);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 1768);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 1048U);
    t14 = *((char **)t13);
    t13 = ((char*)((ng1)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t14, 32, t13, 32);
    xsi_vlog_generic_get_array_select_value(t6, 8, t5, t9, t12, 2, 1, t15, 32, 2);
    t16 = (t0 + 1768);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t20 = (t0 + 1768);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = (t0 + 1768);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t26 = (t0 + 1048U);
    t27 = *((char **)t26);
    t26 = ((char*)((ng2)));
    memset(t28, 0, 8);
    xsi_vlog_unsigned_add(t28, 32, t27, 32, t26, 32);
    xsi_vlog_generic_get_array_select_value(t19, 8, t18, t22, t25, 2, 1, t28, 32, 2);
    t29 = (t0 + 1768);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t33 = (t0 + 1768);
    t34 = (t33 + 72U);
    t35 = *((char **)t34);
    t36 = (t0 + 1768);
    t37 = (t36 + 64U);
    t38 = *((char **)t37);
    t39 = (t0 + 1048U);
    t40 = *((char **)t39);
    t39 = ((char*)((ng3)));
    memset(t41, 0, 8);
    xsi_vlog_unsigned_add(t41, 32, t40, 32, t39, 32);
    xsi_vlog_generic_get_array_select_value(t32, 8, t31, t35, t38, 2, 1, t41, 32, 2);
    t42 = (t0 + 1768);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    t46 = (t0 + 1768);
    t47 = (t46 + 72U);
    t48 = *((char **)t47);
    t49 = (t0 + 1768);
    t50 = (t49 + 64U);
    t51 = *((char **)t50);
    t52 = (t0 + 1048U);
    t53 = *((char **)t52);
    xsi_vlog_generic_get_array_select_value(t45, 8, t44, t48, t51, 2, 1, t53, 32, 2);
    xsi_vlogtype_concat(t3, 32, 32, 4U, t45, 8, t32, 8, t19, 8, t6, 8);
    t52 = (t0 + 3352);
    t54 = (t52 + 56U);
    t55 = *((char **)t54);
    t56 = (t55 + 56U);
    t57 = *((char **)t56);
    memcpy(t57, t3, 8);
    xsi_driver_vfirst_trans(t52, 0, 31);
    t58 = (t0 + 3256);
    *((int *)t58) = 1;

LAB1:    return;
}

static void Always_33_1(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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

LAB0:    t1 = (t0 + 2936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 3272);
    *((int *)t2) = 1;
    t3 = (t0 + 2968);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(35, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
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
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(35, ng0);

LAB13:    xsi_set_current_line(56, ng0);
    t28 = (t0 + 1768);
    xsi_vlogfile_readmemh(ng5, 0, t28, 0, 0, 0, 0);
    goto LAB12;

}


extern void work_m_00000000001260489308_2123150820_init()
{
	static char *pe[] = {(void *)Cont_29_0,(void *)Always_33_1};
	xsi_register_didat("work_m_00000000001260489308_2123150820", "isim/tb1_isim_beh.exe.sim/work/m_00000000001260489308_2123150820.didat");
	xsi_register_executes(pe);
}
