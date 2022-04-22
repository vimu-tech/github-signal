#ifndef VMSUANFA_H
#define VMSUANFA_H

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
#include "vmsignal_global.h"

#ifdef __cplusplus
extern "C" 
{
#endif

SIGNAL_EXPORT int32_t SIGNAL_DLL_CALL maqr(int32_t m, int32_t n, double *a, double *q);
SIGNAL_EXPORT int32_t SIGNAL_DLL_CALL qrtt(int32_t n,double a[],double u[],double v[],double eps,int32_t jt);
SIGNAL_EXPORT int32_t SIGNAL_DLL_CALL qrrt(int32_t n,double* a,double* xr,double* xi,double eps,int32_t jt);

#ifdef __cplusplus
}
#endif

#endif