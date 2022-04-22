#ifndef VMCORANDPMP
#define VMCORANDPMP

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
#include <assert.h>
#include "vmwindow.h"


#ifdef __cplusplus
extern "C" 
{
#endif

SIGNAL_EXPORT void SIGNAL_DLL_CALL correl_fft(double *x, double *y, int32_t m, int32_t n, int32_t len);
SIGNAL_EXPORT void SIGNAL_DLL_CALL correl_fft_other(double *x, double *y, int32_t m, int32_t n, double *col, int32_t len);
SIGNAL_EXPORT void SIGNAL_DLL_CALL correl_fft_other_int(int32_t *x, int32_t *y, int32_t m, int32_t n, double *col, int32_t len);

SIGNAL_EXPORT void SIGNAL_DLL_CALL cmpse(double *x, double *y, int32_t n, int32_t m, int32_t mode, WINDOW_STYLE win, double alphabeta, int32_t fs, int32_t lag, int32_t nfft, int32_t M, double r, double sxy, int32_t sdb);
SIGNAL_EXPORT void SIGNAL_DLL_CALL pmpse(double *x, double *y, int32_t n, int32_t m, int32_t nfft, WINDOW_STYLE win, double alphabeta, double *r, char r_no, double *Sxy,  char sdb);
SIGNAL_EXPORT void SIGNAL_DLL_CALL pmpse_int(int32_t *x, int32_t *y, int32_t n, int32_t m, int32_t nfft, WINDOW_STYLE win, double alphabeta, double *r, char r_no, double *Sxy,  char sdb);
SIGNAL_EXPORT void SIGNAL_DLL_CALL pmpse_self(double *x, int32_t n, int32_t m, int32_t nfft, WINDOW_STYLE win, double alphabeta, double *r, char r_no, double *Sxx, char sdb);
SIGNAL_EXPORT void SIGNAL_DLL_CALL pmpse_self_int(int32_t *x, int32_t n, int32_t m, int32_t nfft, WINDOW_STYLE win, double alphabeta, double *r, char r_no, double *Sxx, char sdb);

#ifdef __cplusplus
}
#endif

#endif
