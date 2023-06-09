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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000003866454776_1537416552_init();
    work_m_00000000001260489308_2123150820_init();
    work_m_00000000001386841999_2321724334_init();
    work_m_00000000002466947052_3913188552_init();
    work_m_00000000003854104724_1351276808_init();
    work_m_00000000001386841999_3415651129_init();
    work_m_00000000000313474896_2932643592_init();
    work_m_00000000000313474896_2482856314_init();
    work_m_00000000004026469426_1947578403_init();
    work_m_00000000003971366680_3258266500_init();
    work_m_00000000000383632024_0886308060_init();
    work_m_00000000003065592373_3726933834_init();
    work_m_00000000003165341389_3226634770_init();
    work_m_00000000001178425227_1561903510_init();
    work_m_00000000003841853169_4159358495_init();
    work_m_00000000002117519384_0286164271_init();
    work_m_00000000002047498008_1470855114_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002047498008_1470855114");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
