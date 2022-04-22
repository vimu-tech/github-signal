#ifndef VMDIT2_FFT_CORE_H
#define VMDIT2_FFT_CORE_H

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

class SIGNAL_EXPORT dit2_fft_core
{
public:
	dit2_fft_core(void);
	~dit2_fft_core(void);

	//------------------------------------��2DIT---------------------------------
	//��2DIT-FFT 2DIT-IFFT
	void dit2_fft(double *x_Re,double *x_Im, uint32_t N, char sign); 
	//2DIT-IFFT  ���㷨������ �������
	void dit2_ifft(double *x_Re, double *x_Im, uint32_t N); 

private:
	double *m_sins, *m_coss;
	uint32_t m_length;

	int32_t get_dit2_fft_sin_cos_num(uint32_t N);
	void dit2_fft_sin_cos(uint32_t N);
};

#endif