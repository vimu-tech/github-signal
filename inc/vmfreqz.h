#ifndef VMFREQZ_H
#define VMFREQZ_H

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

SIGNAL_EXPORT std::vector<double> SIGNAL_DLL_CALL freqz(const std::vector<double> b,  const std::vector<double> a, int32_t len, int32_t sign);

SIGNAL_EXPORT std::vector<double> SIGNAL_DLL_CALL freqz(const cplx_vector b,  const cplx_vector a, int32_t len, int32_t sign);

SIGNAL_EXPORT std::vector<double> SIGNAL_DLL_CALL freqz(const cplx_vector z,  const cplx_vector p, double g, int32_t len, int32_t sign);
#endif