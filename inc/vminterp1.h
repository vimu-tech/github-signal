#ifndef VMINTETPL_H
#define VMINTETPL_H

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

#include <stdint.h>

#ifdef __cplusplus
extern "C" 
{
#endif

	//'method'�����ڽ���ֵ�� 'linear'���Բ�ֵ�� 'spline'����������ֵ�� 'cubic'������ֵ
//��ʱ�ṩ���Բ�ֵ
void interp1(double* x, double* y, int32_t n, double* xi, double* yi, int32_t ni);

#ifdef __cplusplus
}
#endif
#endif