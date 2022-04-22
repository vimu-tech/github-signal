#ifndef VMCONVOL_H
#define VMCONVOL_H

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


#include "vmsignal_global.h"
#include <stdint.h>

#ifdef __cplusplus
extern "C" 
{
#endif

/*-------------------------------------���ݾ����ʽ����-------------------------------------*/
SIGNAL_EXPORT void SIGNAL_DLL_CALL convol(double *x, int32_t m, double *y, int32_t n, double *z, int32_t fht_n);




/*------------------------------����fht�����������еľ��-------------------------------
     flag=0 ��2fht
     flag=1 ��4fht  
	 flag=2 ��srfht   
	 flag=3 �����4���������ݣ�����DIT4_FHT���������Sr_FHT   */
SIGNAL_EXPORT void SIGNAL_DLL_CALL convol_fht_basic(double *x, double *y, int32_t len, char flag);
/* ����flag=3 �����4���������ݣ�����DIT4_FHT���������Sr_FHT�ķ�ʽ���� */
SIGNAL_EXPORT void SIGNAL_DLL_CALL convol_fht(double *x, int32_t x_N, double *h, int32_t h_N, int32_t fht_n, int32_t begin, int32_t len);
//-----------------------------�ص���ӷ�---fht-------------------------------//
SIGNAL_EXPORT void SIGNAL_DLL_CALL convol_overlap_add_fht (double *x, int32_t x_N, double *h, int32_t h_N, int32_t fht_N);




/*---------------------------------�ÿ��پ�������������о��------------------------------------------------*/
SIGNAL_EXPORT void SIGNAL_DLL_CALL convol_fft(double *x, int32_t x_N, double *h, int32_t h_N, int32_t fft_N, int32_t begin, int32_t len);
//-----------------------------�ص���ӷ�---���پ��-------------------------------//
SIGNAL_EXPORT void SIGNAL_DLL_CALL convol_overlap_add_fft (double *x, int32_t x_N, double *h, int32_t h_N, int32_t fft_N);

#ifdef __cplusplus
}
#endif
#endif