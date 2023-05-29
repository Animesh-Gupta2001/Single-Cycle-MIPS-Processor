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
static const char *ng0 = "E:/Non-install/college/4-2/Computer Architecture/Lab/Assignment2/ALU_control.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {2U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {6U, 0U};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {10U, 0U};
static unsigned int ng9[] = {7U, 0U};



static void Always_24_0(char *t0)
{
    char t6[8];
    char t30[8];
    char t31[8];
    char t37[8];
    char t48[8];
    char t64[8];
    char t72[8];
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
    char *t29;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t49;
    char *t50;
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
    unsigned int t62;
    char *t63;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    int t96;
    int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    char *t111;

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 2848);
    *((int *)t2) = 1;
    t3 = (t0 + 2560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(24, ng0);

LAB5:    xsi_set_current_line(25, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
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

LAB11:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB16;

LAB13:    if (t18 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t6) = 1;

LAB16:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1008U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t3, t5, 2, t7, 32, 1);
    t8 = ((char*)((ng5)));
    memset(t30, 0, 8);
    t21 = (t6 + 4);
    t22 = (t8 + 4);
    t9 = *((unsigned int *)t6);
    t10 = *((unsigned int *)t8);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t21);
    t13 = *((unsigned int *)t22);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t21);
    t17 = *((unsigned int *)t22);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB23;

LAB20:    if (t18 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t30) = 1;

LAB23:    memset(t31, 0, 8);
    t29 = (t30 + 4);
    t23 = *((unsigned int *)t29);
    t24 = (~(t23));
    t25 = *((unsigned int *)t30);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t29) != 0)
        goto LAB26;

LAB27:    t33 = (t31 + 4);
    t34 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t33);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB28;

LAB29:    memcpy(t72, t31, 8);

LAB30:    t104 = (t72 + 4);
    t105 = *((unsigned int *)t104);
    t106 = (~(t105));
    t107 = *((unsigned int *)t72);
    t108 = (t107 & t106);
    t109 = (t108 != 0);
    if (t109 > 0)
        goto LAB42;

LAB43:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1008U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t3, t5, 2, t7, 32, 1);
    t8 = ((char*)((ng5)));
    memset(t30, 0, 8);
    t21 = (t6 + 4);
    t22 = (t8 + 4);
    t9 = *((unsigned int *)t6);
    t10 = *((unsigned int *)t8);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t21);
    t13 = *((unsigned int *)t22);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t21);
    t17 = *((unsigned int *)t22);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB48;

LAB45:    if (t18 != 0)
        goto LAB47;

LAB46:    *((unsigned int *)t30) = 1;

LAB48:    memset(t31, 0, 8);
    t29 = (t30 + 4);
    t23 = *((unsigned int *)t29);
    t24 = (~(t23));
    t25 = *((unsigned int *)t30);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t29) != 0)
        goto LAB51;

LAB52:    t33 = (t31 + 4);
    t34 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t33);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB53;

LAB54:    memcpy(t72, t31, 8);

LAB55:    t104 = (t72 + 4);
    t105 = *((unsigned int *)t104);
    t106 = (~(t105));
    t107 = *((unsigned int *)t72);
    t108 = (t107 & t106);
    t109 = (t108 != 0);
    if (t109 > 0)
        goto LAB67;

LAB68:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1008U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t3, t5, 2, t7, 32, 1);
    t8 = ((char*)((ng5)));
    memset(t30, 0, 8);
    t21 = (t6 + 4);
    t22 = (t8 + 4);
    t9 = *((unsigned int *)t6);
    t10 = *((unsigned int *)t8);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t21);
    t13 = *((unsigned int *)t22);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t21);
    t17 = *((unsigned int *)t22);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB73;

LAB70:    if (t18 != 0)
        goto LAB72;

LAB71:    *((unsigned int *)t30) = 1;

LAB73:    memset(t31, 0, 8);
    t29 = (t30 + 4);
    t23 = *((unsigned int *)t29);
    t24 = (~(t23));
    t25 = *((unsigned int *)t30);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t29) != 0)
        goto LAB76;

LAB77:    t33 = (t31 + 4);
    t34 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t33);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB78;

LAB79:    memcpy(t72, t31, 8);

LAB80:    t104 = (t72 + 4);
    t105 = *((unsigned int *)t104);
    t106 = (~(t105));
    t107 = *((unsigned int *)t72);
    t108 = (t107 & t106);
    t109 = (t108 != 0);
    if (t109 > 0)
        goto LAB92;

LAB93:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1008U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t3, t5, 2, t7, 32, 1);
    t8 = ((char*)((ng5)));
    memset(t30, 0, 8);
    t21 = (t6 + 4);
    t22 = (t8 + 4);
    t9 = *((unsigned int *)t6);
    t10 = *((unsigned int *)t8);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t21);
    t13 = *((unsigned int *)t22);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t21);
    t17 = *((unsigned int *)t22);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB98;

LAB95:    if (t18 != 0)
        goto LAB97;

LAB96:    *((unsigned int *)t30) = 1;

LAB98:    memset(t31, 0, 8);
    t29 = (t30 + 4);
    t23 = *((unsigned int *)t29);
    t24 = (~(t23));
    t25 = *((unsigned int *)t30);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t29) != 0)
        goto LAB101;

LAB102:    t33 = (t31 + 4);
    t34 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t33);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB103;

LAB104:    memcpy(t72, t31, 8);

LAB105:    t104 = (t72 + 4);
    t105 = *((unsigned int *)t104);
    t106 = (~(t105));
    t107 = *((unsigned int *)t72);
    t108 = (t107 & t106);
    t109 = (t108 != 0);
    if (t109 > 0)
        goto LAB117;

LAB118:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1008U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t3, t5, 2, t7, 32, 1);
    t8 = ((char*)((ng5)));
    memset(t30, 0, 8);
    t21 = (t6 + 4);
    t22 = (t8 + 4);
    t9 = *((unsigned int *)t6);
    t10 = *((unsigned int *)t8);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t21);
    t13 = *((unsigned int *)t22);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t21);
    t17 = *((unsigned int *)t22);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB123;

LAB120:    if (t18 != 0)
        goto LAB122;

LAB121:    *((unsigned int *)t30) = 1;

LAB123:    memset(t31, 0, 8);
    t29 = (t30 + 4);
    t23 = *((unsigned int *)t29);
    t24 = (~(t23));
    t25 = *((unsigned int *)t30);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB124;

LAB125:    if (*((unsigned int *)t29) != 0)
        goto LAB126;

LAB127:    t33 = (t31 + 4);
    t34 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t33);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB128;

LAB129:    memcpy(t72, t31, 8);

LAB130:    t104 = (t72 + 4);
    t105 = *((unsigned int *)t104);
    t106 = (~(t105));
    t107 = *((unsigned int *)t72);
    t108 = (t107 & t106);
    t109 = (t108 != 0);
    if (t109 > 0)
        goto LAB142;

LAB143:
LAB144:
LAB119:
LAB94:
LAB69:
LAB44:
LAB19:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(26, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 1608);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 4);
    goto LAB12;

LAB15:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(28, ng0);
    t21 = ((char*)((ng4)));
    t22 = (t0 + 1608);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 4);
    goto LAB19;

LAB22:    t28 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB23;

LAB24:    *((unsigned int *)t31) = 1;
    goto LAB27;

LAB26:    t32 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB27;

LAB28:    t38 = (t0 + 1208U);
    t39 = *((char **)t38);
    memset(t37, 0, 8);
    t38 = (t37 + 4);
    t40 = (t39 + 4);
    t41 = *((unsigned int *)t39);
    t42 = (t41 >> 0);
    *((unsigned int *)t37) = t42;
    t43 = *((unsigned int *)t40);
    t44 = (t43 >> 0);
    *((unsigned int *)t38) = t44;
    t45 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t45 & 15U);
    t46 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t46 & 15U);
    t47 = ((char*)((ng1)));
    memset(t48, 0, 8);
    t49 = (t37 + 4);
    t50 = (t47 + 4);
    t51 = *((unsigned int *)t37);
    t52 = *((unsigned int *)t47);
    t53 = (t51 ^ t52);
    t54 = *((unsigned int *)t49);
    t55 = *((unsigned int *)t50);
    t56 = (t54 ^ t55);
    t57 = (t53 | t56);
    t58 = *((unsigned int *)t49);
    t59 = *((unsigned int *)t50);
    t60 = (t58 | t59);
    t61 = (~(t60));
    t62 = (t57 & t61);
    if (t62 != 0)
        goto LAB34;

LAB31:    if (t60 != 0)
        goto LAB33;

LAB32:    *((unsigned int *)t48) = 1;

LAB34:    memset(t64, 0, 8);
    t65 = (t48 + 4);
    t66 = *((unsigned int *)t65);
    t67 = (~(t66));
    t68 = *((unsigned int *)t48);
    t69 = (t68 & t67);
    t70 = (t69 & 1U);
    if (t70 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t65) != 0)
        goto LAB37;

LAB38:    t73 = *((unsigned int *)t31);
    t74 = *((unsigned int *)t64);
    t75 = (t73 & t74);
    *((unsigned int *)t72) = t75;
    t76 = (t31 + 4);
    t77 = (t64 + 4);
    t78 = (t72 + 4);
    t79 = *((unsigned int *)t76);
    t80 = *((unsigned int *)t77);
    t81 = (t79 | t80);
    *((unsigned int *)t78) = t81;
    t82 = *((unsigned int *)t78);
    t83 = (t82 != 0);
    if (t83 == 1)
        goto LAB39;

LAB40:
LAB41:    goto LAB30;

LAB33:    t63 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB34;

LAB35:    *((unsigned int *)t64) = 1;
    goto LAB38;

LAB37:    t71 = (t64 + 4);
    *((unsigned int *)t64) = 1;
    *((unsigned int *)t71) = 1;
    goto LAB38;

LAB39:    t84 = *((unsigned int *)t72);
    t85 = *((unsigned int *)t78);
    *((unsigned int *)t72) = (t84 | t85);
    t86 = (t31 + 4);
    t87 = (t64 + 4);
    t88 = *((unsigned int *)t31);
    t89 = (~(t88));
    t90 = *((unsigned int *)t86);
    t91 = (~(t90));
    t92 = *((unsigned int *)t64);
    t93 = (~(t92));
    t94 = *((unsigned int *)t87);
    t95 = (~(t94));
    t96 = (t89 & t91);
    t97 = (t93 & t95);
    t98 = (~(t96));
    t99 = (~(t97));
    t100 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t100 & t98);
    t101 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t101 & t99);
    t102 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t102 & t98);
    t103 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t103 & t99);
    goto LAB41;

LAB42:    xsi_set_current_line(30, ng0);
    t110 = ((char*)((ng2)));
    t111 = (t0 + 1608);
    xsi_vlogvar_assign_value(t111, t110, 0, 0, 4);
    goto LAB44;

LAB47:    t28 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB48;

LAB49:    *((unsigned int *)t31) = 1;
    goto LAB52;

LAB51:    t32 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB52;

LAB53:    t38 = (t0 + 1208U);
    t39 = *((char **)t38);
    memset(t37, 0, 8);
    t38 = (t37 + 4);
    t40 = (t39 + 4);
    t41 = *((unsigned int *)t39);
    t42 = (t41 >> 0);
    *((unsigned int *)t37) = t42;
    t43 = *((unsigned int *)t40);
    t44 = (t43 >> 0);
    *((unsigned int *)t38) = t44;
    t45 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t45 & 15U);
    t46 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t46 & 15U);
    t47 = ((char*)((ng2)));
    memset(t48, 0, 8);
    t49 = (t37 + 4);
    t50 = (t47 + 4);
    t51 = *((unsigned int *)t37);
    t52 = *((unsigned int *)t47);
    t53 = (t51 ^ t52);
    t54 = *((unsigned int *)t49);
    t55 = *((unsigned int *)t50);
    t56 = (t54 ^ t55);
    t57 = (t53 | t56);
    t58 = *((unsigned int *)t49);
    t59 = *((unsigned int *)t50);
    t60 = (t58 | t59);
    t61 = (~(t60));
    t62 = (t57 & t61);
    if (t62 != 0)
        goto LAB59;

LAB56:    if (t60 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t48) = 1;

LAB59:    memset(t64, 0, 8);
    t65 = (t48 + 4);
    t66 = *((unsigned int *)t65);
    t67 = (~(t66));
    t68 = *((unsigned int *)t48);
    t69 = (t68 & t67);
    t70 = (t69 & 1U);
    if (t70 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t65) != 0)
        goto LAB62;

LAB63:    t73 = *((unsigned int *)t31);
    t74 = *((unsigned int *)t64);
    t75 = (t73 & t74);
    *((unsigned int *)t72) = t75;
    t76 = (t31 + 4);
    t77 = (t64 + 4);
    t78 = (t72 + 4);
    t79 = *((unsigned int *)t76);
    t80 = *((unsigned int *)t77);
    t81 = (t79 | t80);
    *((unsigned int *)t78) = t81;
    t82 = *((unsigned int *)t78);
    t83 = (t82 != 0);
    if (t83 == 1)
        goto LAB64;

LAB65:
LAB66:    goto LAB55;

LAB58:    t63 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB59;

LAB60:    *((unsigned int *)t64) = 1;
    goto LAB63;

LAB62:    t71 = (t64 + 4);
    *((unsigned int *)t64) = 1;
    *((unsigned int *)t71) = 1;
    goto LAB63;

LAB64:    t84 = *((unsigned int *)t72);
    t85 = *((unsigned int *)t78);
    *((unsigned int *)t72) = (t84 | t85);
    t86 = (t31 + 4);
    t87 = (t64 + 4);
    t88 = *((unsigned int *)t31);
    t89 = (~(t88));
    t90 = *((unsigned int *)t86);
    t91 = (~(t90));
    t92 = *((unsigned int *)t64);
    t93 = (~(t92));
    t94 = *((unsigned int *)t87);
    t95 = (~(t94));
    t96 = (t89 & t91);
    t97 = (t93 & t95);
    t98 = (~(t96));
    t99 = (~(t97));
    t100 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t100 & t98);
    t101 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t101 & t99);
    t102 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t102 & t98);
    t103 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t103 & t99);
    goto LAB66;

LAB67:    xsi_set_current_line(32, ng0);
    t110 = ((char*)((ng4)));
    t111 = (t0 + 1608);
    xsi_vlogvar_assign_value(t111, t110, 0, 0, 4);
    goto LAB69;

LAB72:    t28 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB73;

LAB74:    *((unsigned int *)t31) = 1;
    goto LAB77;

LAB76:    t32 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB77;

LAB78:    t38 = (t0 + 1208U);
    t39 = *((char **)t38);
    memset(t37, 0, 8);
    t38 = (t37 + 4);
    t40 = (t39 + 4);
    t41 = *((unsigned int *)t39);
    t42 = (t41 >> 0);
    *((unsigned int *)t37) = t42;
    t43 = *((unsigned int *)t40);
    t44 = (t43 >> 0);
    *((unsigned int *)t38) = t44;
    t45 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t45 & 15U);
    t46 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t46 & 15U);
    t47 = ((char*)((ng6)));
    memset(t48, 0, 8);
    t49 = (t37 + 4);
    t50 = (t47 + 4);
    t51 = *((unsigned int *)t37);
    t52 = *((unsigned int *)t47);
    t53 = (t51 ^ t52);
    t54 = *((unsigned int *)t49);
    t55 = *((unsigned int *)t50);
    t56 = (t54 ^ t55);
    t57 = (t53 | t56);
    t58 = *((unsigned int *)t49);
    t59 = *((unsigned int *)t50);
    t60 = (t58 | t59);
    t61 = (~(t60));
    t62 = (t57 & t61);
    if (t62 != 0)
        goto LAB84;

LAB81:    if (t60 != 0)
        goto LAB83;

LAB82:    *((unsigned int *)t48) = 1;

LAB84:    memset(t64, 0, 8);
    t65 = (t48 + 4);
    t66 = *((unsigned int *)t65);
    t67 = (~(t66));
    t68 = *((unsigned int *)t48);
    t69 = (t68 & t67);
    t70 = (t69 & 1U);
    if (t70 != 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t65) != 0)
        goto LAB87;

LAB88:    t73 = *((unsigned int *)t31);
    t74 = *((unsigned int *)t64);
    t75 = (t73 & t74);
    *((unsigned int *)t72) = t75;
    t76 = (t31 + 4);
    t77 = (t64 + 4);
    t78 = (t72 + 4);
    t79 = *((unsigned int *)t76);
    t80 = *((unsigned int *)t77);
    t81 = (t79 | t80);
    *((unsigned int *)t78) = t81;
    t82 = *((unsigned int *)t78);
    t83 = (t82 != 0);
    if (t83 == 1)
        goto LAB89;

LAB90:
LAB91:    goto LAB80;

LAB83:    t63 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB84;

LAB85:    *((unsigned int *)t64) = 1;
    goto LAB88;

LAB87:    t71 = (t64 + 4);
    *((unsigned int *)t64) = 1;
    *((unsigned int *)t71) = 1;
    goto LAB88;

LAB89:    t84 = *((unsigned int *)t72);
    t85 = *((unsigned int *)t78);
    *((unsigned int *)t72) = (t84 | t85);
    t86 = (t31 + 4);
    t87 = (t64 + 4);
    t88 = *((unsigned int *)t31);
    t89 = (~(t88));
    t90 = *((unsigned int *)t86);
    t91 = (~(t90));
    t92 = *((unsigned int *)t64);
    t93 = (~(t92));
    t94 = *((unsigned int *)t87);
    t95 = (~(t94));
    t96 = (t89 & t91);
    t97 = (t93 & t95);
    t98 = (~(t96));
    t99 = (~(t97));
    t100 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t100 & t98);
    t101 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t101 & t99);
    t102 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t102 & t98);
    t103 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t103 & t99);
    goto LAB91;

LAB92:    xsi_set_current_line(34, ng0);
    t110 = ((char*)((ng1)));
    t111 = (t0 + 1608);
    xsi_vlogvar_assign_value(t111, t110, 0, 0, 4);
    goto LAB94;

LAB97:    t28 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB98;

LAB99:    *((unsigned int *)t31) = 1;
    goto LAB102;

LAB101:    t32 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB102;

LAB103:    t38 = (t0 + 1208U);
    t39 = *((char **)t38);
    memset(t37, 0, 8);
    t38 = (t37 + 4);
    t40 = (t39 + 4);
    t41 = *((unsigned int *)t39);
    t42 = (t41 >> 0);
    *((unsigned int *)t37) = t42;
    t43 = *((unsigned int *)t40);
    t44 = (t43 >> 0);
    *((unsigned int *)t38) = t44;
    t45 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t45 & 15U);
    t46 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t46 & 15U);
    t47 = ((char*)((ng7)));
    memset(t48, 0, 8);
    t49 = (t37 + 4);
    t50 = (t47 + 4);
    t51 = *((unsigned int *)t37);
    t52 = *((unsigned int *)t47);
    t53 = (t51 ^ t52);
    t54 = *((unsigned int *)t49);
    t55 = *((unsigned int *)t50);
    t56 = (t54 ^ t55);
    t57 = (t53 | t56);
    t58 = *((unsigned int *)t49);
    t59 = *((unsigned int *)t50);
    t60 = (t58 | t59);
    t61 = (~(t60));
    t62 = (t57 & t61);
    if (t62 != 0)
        goto LAB109;

LAB106:    if (t60 != 0)
        goto LAB108;

LAB107:    *((unsigned int *)t48) = 1;

LAB109:    memset(t64, 0, 8);
    t65 = (t48 + 4);
    t66 = *((unsigned int *)t65);
    t67 = (~(t66));
    t68 = *((unsigned int *)t48);
    t69 = (t68 & t67);
    t70 = (t69 & 1U);
    if (t70 != 0)
        goto LAB110;

LAB111:    if (*((unsigned int *)t65) != 0)
        goto LAB112;

LAB113:    t73 = *((unsigned int *)t31);
    t74 = *((unsigned int *)t64);
    t75 = (t73 & t74);
    *((unsigned int *)t72) = t75;
    t76 = (t31 + 4);
    t77 = (t64 + 4);
    t78 = (t72 + 4);
    t79 = *((unsigned int *)t76);
    t80 = *((unsigned int *)t77);
    t81 = (t79 | t80);
    *((unsigned int *)t78) = t81;
    t82 = *((unsigned int *)t78);
    t83 = (t82 != 0);
    if (t83 == 1)
        goto LAB114;

LAB115:
LAB116:    goto LAB105;

LAB108:    t63 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB109;

LAB110:    *((unsigned int *)t64) = 1;
    goto LAB113;

LAB112:    t71 = (t64 + 4);
    *((unsigned int *)t64) = 1;
    *((unsigned int *)t71) = 1;
    goto LAB113;

LAB114:    t84 = *((unsigned int *)t72);
    t85 = *((unsigned int *)t78);
    *((unsigned int *)t72) = (t84 | t85);
    t86 = (t31 + 4);
    t87 = (t64 + 4);
    t88 = *((unsigned int *)t31);
    t89 = (~(t88));
    t90 = *((unsigned int *)t86);
    t91 = (~(t90));
    t92 = *((unsigned int *)t64);
    t93 = (~(t92));
    t94 = *((unsigned int *)t87);
    t95 = (~(t94));
    t96 = (t89 & t91);
    t97 = (t93 & t95);
    t98 = (~(t96));
    t99 = (~(t97));
    t100 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t100 & t98);
    t101 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t101 & t99);
    t102 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t102 & t98);
    t103 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t103 & t99);
    goto LAB116;

LAB117:    xsi_set_current_line(36, ng0);
    t110 = ((char*)((ng3)));
    t111 = (t0 + 1608);
    xsi_vlogvar_assign_value(t111, t110, 0, 0, 4);
    goto LAB119;

LAB122:    t28 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB123;

LAB124:    *((unsigned int *)t31) = 1;
    goto LAB127;

LAB126:    t32 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB127;

LAB128:    t38 = (t0 + 1208U);
    t39 = *((char **)t38);
    memset(t37, 0, 8);
    t38 = (t37 + 4);
    t40 = (t39 + 4);
    t41 = *((unsigned int *)t39);
    t42 = (t41 >> 0);
    *((unsigned int *)t37) = t42;
    t43 = *((unsigned int *)t40);
    t44 = (t43 >> 0);
    *((unsigned int *)t38) = t44;
    t45 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t45 & 15U);
    t46 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t46 & 15U);
    t47 = ((char*)((ng8)));
    memset(t48, 0, 8);
    t49 = (t37 + 4);
    t50 = (t47 + 4);
    t51 = *((unsigned int *)t37);
    t52 = *((unsigned int *)t47);
    t53 = (t51 ^ t52);
    t54 = *((unsigned int *)t49);
    t55 = *((unsigned int *)t50);
    t56 = (t54 ^ t55);
    t57 = (t53 | t56);
    t58 = *((unsigned int *)t49);
    t59 = *((unsigned int *)t50);
    t60 = (t58 | t59);
    t61 = (~(t60));
    t62 = (t57 & t61);
    if (t62 != 0)
        goto LAB134;

LAB131:    if (t60 != 0)
        goto LAB133;

LAB132:    *((unsigned int *)t48) = 1;

LAB134:    memset(t64, 0, 8);
    t65 = (t48 + 4);
    t66 = *((unsigned int *)t65);
    t67 = (~(t66));
    t68 = *((unsigned int *)t48);
    t69 = (t68 & t67);
    t70 = (t69 & 1U);
    if (t70 != 0)
        goto LAB135;

LAB136:    if (*((unsigned int *)t65) != 0)
        goto LAB137;

LAB138:    t73 = *((unsigned int *)t31);
    t74 = *((unsigned int *)t64);
    t75 = (t73 & t74);
    *((unsigned int *)t72) = t75;
    t76 = (t31 + 4);
    t77 = (t64 + 4);
    t78 = (t72 + 4);
    t79 = *((unsigned int *)t76);
    t80 = *((unsigned int *)t77);
    t81 = (t79 | t80);
    *((unsigned int *)t78) = t81;
    t82 = *((unsigned int *)t78);
    t83 = (t82 != 0);
    if (t83 == 1)
        goto LAB139;

LAB140:
LAB141:    goto LAB130;

LAB133:    t63 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB134;

LAB135:    *((unsigned int *)t64) = 1;
    goto LAB138;

LAB137:    t71 = (t64 + 4);
    *((unsigned int *)t64) = 1;
    *((unsigned int *)t71) = 1;
    goto LAB138;

LAB139:    t84 = *((unsigned int *)t72);
    t85 = *((unsigned int *)t78);
    *((unsigned int *)t72) = (t84 | t85);
    t86 = (t31 + 4);
    t87 = (t64 + 4);
    t88 = *((unsigned int *)t31);
    t89 = (~(t88));
    t90 = *((unsigned int *)t86);
    t91 = (~(t90));
    t92 = *((unsigned int *)t64);
    t93 = (~(t92));
    t94 = *((unsigned int *)t87);
    t95 = (~(t94));
    t96 = (t89 & t91);
    t97 = (t93 & t95);
    t98 = (~(t96));
    t99 = (~(t97));
    t100 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t100 & t98);
    t101 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t101 & t99);
    t102 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t102 & t98);
    t103 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t103 & t99);
    goto LAB141;

LAB142:    xsi_set_current_line(38, ng0);
    t110 = ((char*)((ng9)));
    t111 = (t0 + 1608);
    xsi_vlogvar_assign_value(t111, t110, 0, 0, 4);
    goto LAB144;

}


extern void work_m_00000000004026469426_1947578403_init()
{
	static char *pe[] = {(void *)Always_24_0};
	xsi_register_didat("work_m_00000000004026469426_1947578403", "isim/tb1_isim_beh.exe.sim/work/m_00000000004026469426_1947578403.didat");
	xsi_register_executes(pe);
}
