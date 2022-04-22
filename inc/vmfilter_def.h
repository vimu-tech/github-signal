#ifndef VMFILTER_DEF_H
#define VMFILTER_DEF_H

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

#ifdef __cplusplus
extern "C" 
{
#endif

typedef enum {NOSCALE=0, SCALE=1} SCALETYPE;
typedef enum {LOW=0, HIGH=1, PASS=2, STOP=3, DC_0=4, DC_1=5} BANDTYPE;

//typedef enum filter_trye{low, high, pass, stop}filter_trye;

#ifdef __cplusplus
}
#endif
#endif