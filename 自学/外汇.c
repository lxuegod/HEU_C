#include <stdio.h>
#include <stdlib.h>
#define N 3
//���ֲֽṹ��
 struct fExchange
{
	float USDVolume;
	float EURVolume;
	float AUSVolume;
};
 //���ṹ��
typedef struct
{
	float USDRate;
 	float EURRate;
 	float AUSRate;
}fExRate;
  
  //�������ֵ
int calFinalValue(struct fExchange *pa,int n,fExRate rate)
{
  	int i;
	double sum = 0;
	for(i = 0;i < n;i++)
	{
		sum = pa -> USDVolume *rate.USDRate + pa -> EURVolume *rate.EURRate +
		 pa -> AUSVolume *rate.AUSRate;
		 printf("��%dλ����Ա�ĺ���ֵΪ %lf �����\n",i+1,sum);
		 pa++;
	 } 
	 return 0;
} 
//��������ʼ
int main()
{
	struct fExchange trader[N];
	fExRate fErate;
	//���뽻��Ա�ֲ�
	int i;
	for(i = 0;i < N;i++)
	{
		printf("�������%dλ����Ա����Ԫ��ŷԪ����Ԫ�ֲ֣�\n",i+1);
		scanf("%f,%f,%f",&trader[i].USDVolume,&trader[i].EURVolume,&trader[i].AUSVolume);
	}
	printf("��������Ԫ��ŷԪ����Ԫ�Ļ��ʣ�\n",i);
	scanf("%f,%f,%f",&fErate.USDRate,&fErate.EURRate,&fErate.AUSRate);
	//���㺯��
	 calFinalValue(trader,N,fErate);
	 return 0;
 } 
