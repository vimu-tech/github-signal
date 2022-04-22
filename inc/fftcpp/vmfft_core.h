#ifndef VMFFT_CORE_H
#define VMFFT_CORE_H

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

#include "vmdit2_fft_core.h"
#include "vmdit4_fft_core.h"

class SIGNAL_EXPORT fft_core
{
public:
	fft_core(void);
	~fft_core(void);

	//----------------------------fft/ifft---���������fft��װ-----------------------
	/*flag  0  DIT2_FFT
			1  DIF4_FFT
			2  Sr_FFT
			3  �����4���������ݣ�����DIF4_FFT���������Sr_FFT
	*/
	void fft(double *x_Re,double *x_Im, uint32_t N, char flag);

	//���㷨��DIT2_IFFT��ͬ�������˹�����ȡ�ķ���
	/*flag  0  DIT2_FFT
			1  DIF4_FFT
			2  Sr_FFT
			3  �����4���������ݣ�����DIF4_FFT���������Sr_FFT
	*/
	void ifft(double *x_Re,double *x_Im, uint32_t N, char flag);
	//-------------------------------------------�źŵ�fft--------------------------------------
	/*flag  0  DIT2_FFT
			1  DIF4_FFT
			2  Sr_FFT
			3  �����4���������ݣ�����DIF4_FFT���������Sr_FFT
	*/
	void fft_signal(double *x_Re,double *x_Im,uint32_t N, char flag); 
private:

	dit2_fft_core m_dit2;
	dit4_fft_core m_dit4;
};

#endif