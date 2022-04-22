#ifndef VMFHT_CORE_H
#define VMFHT_CORE_H

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

class SIGNAL_EXPORT fht_core
{
public:
	fht_core(void);
	~fht_core(void);

	//------------------------fht--------------------------
	/*   flag=0 ��2fht
		 flag=1 ��4fht  
		 flag=2 ��srfht   
		 flag=3 �����4���������ݣ�����DIT4_FHT���������Sr_FHT

		 sign=1 fht
		 sign=-1 ifht
	*/
	void fht(double *x, uint32_t n, char flag, char sign);

	//---------------------fht_dft-----------------------
	/*   flag=0 ��2fht
		 flag=1 ��4fht  
		 flag=2 ��srfht   
		 flag=3 �����4���������ݣ�����DIT4_FHT���������Sr_FHT

	ע�⣺ֵ֧��ʵ����dft
	*/
	void fht_dft(double *XRe, double *XIm, uint32_t N, char flag);
private:
	double *m_sins, *m_coss;
	uint32_t m_length;

	int32_t get_sin_cos_num(uint32_t N);
	void sin_cos(uint32_t N);

	//----------------------��2fht------------------------
	void dit2_fht(double *x, uint32_t n);
	//----------------------��4fht-------------------------
	void dit4_fht(double *x, uint32_t n);
	//----------------------���ѻ�fht-----Split-Radix--------------------
	void sr_fht(double *x, uint32_t n);
};

#endif