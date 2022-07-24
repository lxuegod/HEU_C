#include <stdio.h>
#include <stdlib.h>
#define N 3
//外汇持仓结构体
 struct fExchange
{
	float USDVolume;
	float EURVolume;
	float AUSVolume;
};
 //外汇结构体
typedef struct
{
	float USDRate;
 	float EURRate;
 	float AUSRate;
}fExRate;
  
  //输出核算值
int calFinalValue(struct fExchange *pa,int n,fExRate rate)
{
  	int i;
	double sum = 0;
	for(i = 0;i < n;i++)
	{
		sum = pa -> USDVolume *rate.USDRate + pa -> EURVolume *rate.EURRate +
		 pa -> AUSVolume *rate.AUSRate;
		 printf("第%d位交易员的核算值为 %lf 人民币\n",i+1,sum);
		 pa++;
	 } 
	 return 0;
} 
//主函数开始
int main()
{
	struct fExchange trader[N];
	fExRate fErate;
	//输入交易员持仓
	int i;
	for(i = 0;i < N;i++)
	{
		printf("请输入第%d位交易员的美元，欧元，澳元持仓：\n",i+1);
		scanf("%f,%f,%f",&trader[i].USDVolume,&trader[i].EURVolume,&trader[i].AUSVolume);
	}
	printf("请输入美元，欧元，澳元的汇率：\n",i);
	scanf("%f,%f,%f",&fErate.USDRate,&fErate.EURRate,&fErate.AUSRate);
	//核算函数
	 calFinalValue(trader,N,fErate);
	 return 0;
 } 
