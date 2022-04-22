#ifndef VMFILTERS_H
#define VMFILTERS_H

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


#include "vmcplx_vector.h"
#include "vmsignal_global.h"

//------------------------------------------fir------------------------------------------
SIGNAL_EXPORT void SIGNAL_DLL_CALL filters(double *hn, int32_t N, int32_t *date, int32_t num);
SIGNAL_EXPORT void SIGNAL_DLL_CALL filters(double *hn, int32_t N, double *date, int32_t num);

SIGNAL_EXPORT void SIGNAL_DLL_CALL filters_fht(double *hn, int32_t N, int32_t *date, int32_t fht_n);
SIGNAL_EXPORT void SIGNAL_DLL_CALL filters_fht(double *hn, int32_t N, double *date, int32_t fht_n);

SIGNAL_EXPORT void SIGNAL_DLL_CALL filters_fft(double *hn, int32_t N, int32_t *date, int32_t fft_n);
SIGNAL_EXPORT void SIGNAL_DLL_CALL filters_fft(double *hn, int32_t N, double *date, int32_t fft_n);

SIGNAL_EXPORT void SIGNAL_DLL_CALL filters_overlap_add_fht(double *hn, int32_t N, int32_t *date, int32_t num, int32_t fht_n);
SIGNAL_EXPORT void SIGNAL_DLL_CALL filters_overlap_add_fht(double *hn, int32_t N, double *date, int32_t num, int32_t fht_n);

SIGNAL_EXPORT void SIGNAL_DLL_CALL filters_overlap_add_fft(double *hn, int32_t N, int32_t *date, int32_t num, int32_t fft_n);
SIGNAL_EXPORT void SIGNAL_DLL_CALL filters_overlap_add_fft(double *hn, int32_t N, double *date, int32_t num, int32_t fft_n);

//-----------------------------------------iir-------------------------------------------------
SIGNAL_EXPORT void SIGNAL_DLL_CALL filters(const std::vector<double> b, const std::vector<double> a, std::vector<double>& x, int32_t len);

SIGNAL_EXPORT void SIGNAL_DLL_CALL filters(double* b, int32_t bn, double* a, int32_t an, int32_t* x, int32_t len);
SIGNAL_EXPORT void SIGNAL_DLL_CALL filters(double* b, int32_t bn, double* a, int32_t an, double* x, int32_t len);

SIGNAL_EXPORT void SIGNAL_DLL_CALL filters_overlap_add_fht(double* b, int32_t bn, double* a, int32_t an, int32_t* x, int32_t len, int32_t fft_n);
SIGNAL_EXPORT void SIGNAL_DLL_CALL filters_overlap_add_fht(double* b, int32_t bn, double* a, int32_t an, double* x, int32_t len, int32_t fft_n);

#endif