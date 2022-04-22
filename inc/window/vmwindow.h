#ifndef VMWINDOW_H
#define VMWINDOW_H

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
#include <math.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" 
{
#endif

typedef enum {
				RECTANGLE=0, 
				BARTLETT=1, 
				TRIANGULAR=2,
				COSINE=3, 
				HANNING=4, 
				BARTLETT_HANNING=5,
                HAMMING=6, 
				BLACKMAN=7, 
				BLACKMAN_HARRIS=8, 
				TUKEY=9, 
				NUTTALL=10, 
				FLATTOP=11, 
				BOHMAN=12, 
				PARZEN=13, 
				LANCZOS=14, 
				KAISER=15, 
				GAUSS=16, 
				DOLPH_CHEBYSHEV=17
} WINDOW_STYLE;

static const char* Window_Name[]={
	"rectangle",
	"bartlett",
	"triangular",
	"cosine",
	"hanning",
	"bartlett_hanning",  //5
	"hamming",
	"blackman",
	"blackman_Harris",
	"tukey",
	"Nuttall",
	"FlatTop",
	"Bohman",
	"Parzen",
	"Lanczos",
	"kaiser",
	"gauss",
	"dolph_chebyshev"
};

#define WINDOW_IS_NEED_PARA(window) ((window==TUKEY)||(window==KAISER)||(window==GAUSS)||(window==DOLPH_CHEBYSHEV))
SIGNAL_EXPORT double SIGNAL_DLL_CALL getdefaultpara(WINDOW_STYLE window);
SIGNAL_EXPORT void SIGNAL_DLL_CALL getpararange(WINDOW_STYLE window, double *min, double *max);
//-------------------------------------------------------window---------------------------------------------------------
SIGNAL_EXPORT char SIGNAL_DLL_CALL window(WINDOW_STYLE type, int32_t N, double *hn, double alpha_beta, char normalize);

//���δ�
SIGNAL_EXPORT void SIGNAL_DLL_CALL rectangle(int32_t N, double *hn);
//���Ǵ�
SIGNAL_EXPORT void SIGNAL_DLL_CALL bartlett(int32_t N, double *hn);
//���Ǵ�  �����յ㲻��0
SIGNAL_EXPORT void SIGNAL_DLL_CALL triangular(int32_t N, double *hn);
//���Ҵ�
SIGNAL_EXPORT void SIGNAL_DLL_CALL cosine(int32_t N, double *hn);
//������
SIGNAL_EXPORT void SIGNAL_DLL_CALL hanning(int32_t N, double *hn);
//���Ǻ�����
SIGNAL_EXPORT void SIGNAL_DLL_CALL bartlett_hanning(int32_t N, double *hn);
//������
SIGNAL_EXPORT void SIGNAL_DLL_CALL hamming(int32_t N, double *hn);
//���������� 
SIGNAL_EXPORT void SIGNAL_DLL_CALL blackman(int32_t N, double *hn);
//Blackman�CHarris
SIGNAL_EXPORT void SIGNAL_DLL_CALL blackman_Harris(int32_t N, double *hn);
//ͼ����
SIGNAL_EXPORT char SIGNAL_DLL_CALL tukey(int32_t N, double *hn, double alpha);
//Nuttall��
SIGNAL_EXPORT void SIGNAL_DLL_CALL Nuttall(int32_t N, double *hn);
//ƽ����
SIGNAL_EXPORT void SIGNAL_DLL_CALL FlatTop(int32_t N, double *hn);
//Bohman ��
SIGNAL_EXPORT void SIGNAL_DLL_CALL Bohman(int32_t N, double *hn);
//Parzen window  ��
SIGNAL_EXPORT void SIGNAL_DLL_CALL Parzen(int32_t N, double *hn);
//����˹����
SIGNAL_EXPORT void SIGNAL_DLL_CALL Lanczos(int32_t N, double *hn);
//���������������� 
SIGNAL_EXPORT void SIGNAL_DLL_CALL kaiser(int32_t N, double *hn, double beta);
//��˹��
SIGNAL_EXPORT char SIGNAL_DLL_CALL gauss(int32_t N, double *hn, double alpha);
//N����Ϊż��
SIGNAL_EXPORT char SIGNAL_DLL_CALL dolph_chebyshev_fft(int32_t N, double *hn, double at);
//������-�б�ѩ��  ���̰�����ֵ�̶�ʱ��������-�б�ѩ�򴰿�ʹ�������Ϊ��С
//���⣬�ô��������ص������е��̰���������
//ע�⣺N����Ϊ������
SIGNAL_EXPORT void SIGNAL_DLL_CALL dolph_chebyshev(int32_t N, double *hn, double at);
                                         

//--------------------------------------------------------------�Ӵ�-------------------------------------------------------------
//return the coherent gain of the window function
SIGNAL_EXPORT double SIGNAL_DLL_CALL window_i(WINDOW_STYLE type, double *x, int32_t N, double alpha_beta, char normalize);
//-----------------------------------------------------------����ƽ����--------------------------------------------------------------
SIGNAL_EXPORT double SIGNAL_DLL_CALL window_i2sum(WINDOW_STYLE type, int32_t N, double alpha_beta, char normalize);
//-------------------------------------------------------------------------------------------------------------------------------
SIGNAL_EXPORT void SIGNAL_DLL_CALL window_HW(double *h, int32_t N, double *HRm, double *HIm, int32_t HN);
SIGNAL_EXPORT void SIGNAL_DLL_CALL window_Amplitude(double *x_Re,double *x_Im,double *af,uint32_t N, char uselog10, char normalize);
SIGNAL_EXPORT void SIGNAL_DLL_CALL window_Phase(double *x_Re,double *x_Im,double *pf,uint32_t N);

#ifdef __cplusplus
}
#endif

#endif