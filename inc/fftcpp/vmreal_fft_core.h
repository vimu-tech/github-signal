#ifndef VMREAL_FFT_CORE_H
#define VMREAL_FFT_CORE_H

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

#include "vmfft_core.h"
#include "vmfht_core.h"

class SIGNAL_EXPORT real_fft_core
{
public:
	real_fft_core(void);
	~real_fft_core(void);

	//---------------------------------ʵ���е�FFT---------------------------------
	//ʵ���е�FFT
	/*flag  0  DIT2_FFT
			1  DIF4_FFT
			2  Sr_FFT
			3  �����4���������ݣ�����DIF4_FFT���������Sr_FFT */
	void real_fft(double *x_Re,double *x_Im,uint32_t N,char flag);

	/*flag  0  DIT2_FFT
			1  DIF4_FFT
			2  Sr_FFT
			3  �����4���������ݣ�����DIF4_FFT���������Sr_FFT

			4  DIT2_FHT
			5  DIT4_FHT
			6  Sr_FHT
			7  �����4���������ݣ�����DIT4_FHT���������Sr_FHT

			8  �����4���������ݣ�����DIT4_FHT���������DIT4_FFT*/
	void real_fft_fht(double *x_Re,double *x_Im,uint32_t N,char flag);

	//ʵ�źŵ�fft
	/*flag  0  DIT2_FFT
			1  DIF4_FFT
			2  Sr_FFT
			3  �����4���������ݣ�����DIF4_FFT���������Sr_FFT

			4  DIT2_FHT
			5  DIT4_FHT
			6  Sr_FHT
			7  �����4���������ݣ�����DIT4_FHT���������Sr_FHT
		
			8 �����4���������ݣ�����DIT4_FHT���������DIT4_FFT*/
	void real_fft_signal(double *x_Re, double *x_Im, uint32_t N, uint32_t Real_N, char flag);

private:
	fft_core m_fft;
	fht_core m_fht;

	double *m_sins, *m_coss;
	uint32_t m_length;

	int32_t get_sin_cos_num(uint32_t N);
	void sin_cos(uint32_t N);
};

#endif