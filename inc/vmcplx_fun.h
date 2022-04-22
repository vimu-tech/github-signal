#ifndef VMCPLX_FUN_H
#define VMCPLX_FUN_H

/********************************************************************************************************************
˵����
1,�������źŴ���⣬ʹ�ñ�׼��C���Ա�д�ģ�û������κε�ƽ̨���и��õ��Ż���
2,��ʹ���з����κε�bug���߽��飬������ϵ���ǡ�

Note:
1,This digital signal processing library, written in the standard C language, is not better optimized for any platform.
2,If you find any bugs or suggestions in use, you can contact us.

	www.vimu.top
	www.instrustar.com
*********************************************************************************************************************/



#include <complex>
#include "vmcplx_vector.h"

//void cplx_zeros(std::complex<double> c[], int32_t num);
//void cplx_zeros(cplx_vector c, uint32_t num);

//std::complex<double> cplx_prod(std::complex<double> c[], int32_t num);
std::complex<double> cplx_prod(cplx_vector c);


#endif