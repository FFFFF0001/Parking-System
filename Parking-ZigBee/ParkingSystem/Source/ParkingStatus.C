/**************************************************
** ���ܣ���λ״̬�ɼ���LED��λ״̬�ƿ���
** Ӳ���������紫����
** ���ڣ�2015-5-8
**************************************************/
#include <ioCC2530.h>
#include "OnBoard.h"

#define uint unsigned int
#define uchar unsigned char

/* ���IO�ڶ��� */
#define CAR_001 P0_1    //���⴫����
#define LED_G_001 P0_0  //�̵�
#define LED_R_001 P0_7  //���

#define CAR_002 P0_2    //���⴫����
#define LED_G_002 P1_2  //�̵�
#define LED_R_002 P1_4  //���

#define CAR_003 P0_3    //���⴫����
#define LED_G_003 P1_3  //�̵�
#define LED_R_003 P1_7  //���

/* ��λ���� */
uchar S001,S002,S003=3;

/* ����ԭ�� */
void Delay_ms(uint Time);
void Parking_Status(void) ;  
void init(void);

/* ��ʼ�� */
void init(void)
{
  CAR_001 = 0;
  LED_G_001 = 0;
  LED_R_001 = 0;
  CAR_002 = 0;
  LED_G_002 = 0;
  LED_R_002 = 0;
  CAR_003 = 0;
  LED_G_003 = 0;
  LED_R_003 = 0;

}

void Delay_ms(uint Time)  //��ʱms
{
  while(Time--)
  {
      MicroWait(1);
  }
}

/* ��λ״̬ */
void Parking_Status()   
{
  init(); //��ʼ��
  
  S001 = CAR_001==1?1:0;
  LED_G_001 = CAR_001==0?1:0;
  LED_R_001 = CAR_001==1?1:0;
  
  S002 = CAR_002==1?1:0;
  LED_G_002 = CAR_002==0?1:0;
  LED_R_002 = CAR_002==1?1:0;
  
  S003 = CAR_003==1?1:0;
  LED_G_003 = CAR_003==0?1:0;
  LED_R_003 = CAR_003==1?1:0;
}