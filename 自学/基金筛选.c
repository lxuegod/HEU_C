#include <stdio.h>
#include <stdlib.h>
#define SIZE 3
//基金信息
struct fund_Info
{
	char name[20];
	double rate;
};
//基金经理信息 
struct fund_manager
{
	int fund_num;     //管理基金的数量 
	char managerName[20];
	struct fund_Info fund[3];   //假设最多管理3只
	float average;      //平均收益 
 } manager[SIZE];
 //输入基金经理的信息
 void inputProductInfo()
 {
 	int i,j;
 	double sum = 0;
 	for(i = 0;i < SIZE;i++)
 	{
 		printf("第%d个基金经理的基金数量：\n",i+1);
 		scanf("%d",&manager[i].fund_num);
 		printf("第%d个基金经理的姓名：\n",i+1);
 		scanf("%s",&manager[i].managerName);
 		printf("请依次输入产品名称及收益：\n");
 		sum = 0;
 		for(j = 0;j <manager[i].fund_num;j++)
 		{
 			scanf("%s%lf",manager[i].fund[j].name,&manager[i].fund[j].rate);
 			sum +=manager[i].fund[j].rate;
		 }
		 manager[i].average = sum/manager[i].fund_num;
	 }
  } 
  //输出但只产品最好的基金经理的信息
  void outputBestProduct()
  {
  	int i,j,bestManID,bestProductID = 0;
  	double maxRate = -1.0;
  	for(i = 0;i < SIZE;i++)
  	{
  		for(j = 0;j < manager[i].fund_num;j++)
  		{
  			//记录单只产品最好的基金经理的信息
			  if(manager[i].fund[j].rate > maxRate)
			  {
			  	maxRate = manager[i].fund[j].rate;
			  	bestManID = i;
			  	bestProductID = j;
			   } 
		  }
	  }
	  printf("\n单只产品最好的基金经理信息\n%s产品名称%s收益%lf\n",manager[bestManID].managerName, 
	  manager[bestManID].fund[bestProductID].name,manager[bestManID].fund[bestProductID].rate);
   } 
   //排序输出最高分的基金经理的信息
   void outputBestManager()
   {
   	int i,j;
   	struct fund_manager temp;
   	for(i = 0;i < SIZE;i++)
   	{
   		for(j = 0;j <SIZE-i-1;j++)
   		{
   			if(manager[j].average < manager[j+1].average)
   			{
   				temp = manager[j];
   				manager[j] = manager[j+1];
   				manager[j+1] = temp;
			   }
		   }
	   }
	   printf("\n业绩最好的基金经理是%s平均收益%6.2f\n",manager[0].managerName,manager[0].average);
	} 
	//主函数开始
	int main()
	{
		inputProductInfo();
		outputBestProduct();
		outputBestManager();
		return 0;
	 } 
