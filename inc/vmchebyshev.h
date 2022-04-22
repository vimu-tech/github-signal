#ifndef VMCHEBYSHEV_H
#define VMCHEBYSHEV_H

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


#include <math.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" 
{
#endif

double cheb(int32_t n, double x);

#ifdef __cplusplus
}
#endif

#endif