#include <stdio.h>
#include <stdlib.h>
#define SIZE 3
//������Ϣ
struct fund_Info
{
	char name[20];
	double rate;
};
//��������Ϣ 
struct fund_manager
{
	int fund_num;     //������������ 
	char managerName[20];
	struct fund_Info fund[3];   //����������3ֻ
	float average;      //ƽ������ 
 } manager[SIZE];
 //������������Ϣ
 void inputProductInfo()
 {
 	int i,j;
 	double sum = 0;
 	for(i = 0;i < SIZE;i++)
 	{
 		printf("��%d��������Ļ���������\n",i+1);
 		scanf("%d",&manager[i].fund_num);
 		printf("��%d���������������\n",i+1);
 		scanf("%s",&manager[i].managerName);
 		printf("�����������Ʒ���Ƽ����棺\n");
 		sum = 0;
 		for(j = 0;j <manager[i].fund_num;j++)
 		{
 			scanf("%s%lf",manager[i].fund[j].name,&manager[i].fund[j].rate);
 			sum +=manager[i].fund[j].rate;
		 }
		 manager[i].average = sum/manager[i].fund_num;
	 }
  } 
  //�����ֻ��Ʒ��õĻ��������Ϣ
  void outputBestProduct()
  {
  	int i,j,bestManID,bestProductID = 0;
  	double maxRate = -1.0;
  	for(i = 0;i < SIZE;i++)
  	{
  		for(j = 0;j < manager[i].fund_num;j++)
  		{
  			//��¼��ֻ��Ʒ��õĻ��������Ϣ
			  if(manager[i].fund[j].rate > maxRate)
			  {
			  	maxRate = manager[i].fund[j].rate;
			  	bestManID = i;
			  	bestProductID = j;
			   } 
		  }
	  }
	  printf("\n��ֻ��Ʒ��õĻ�������Ϣ\n%s��Ʒ����%s����%lf\n",manager[bestManID].managerName, 
	  manager[bestManID].fund[bestProductID].name,manager[bestManID].fund[bestProductID].rate);
   } 
   //���������߷ֵĻ��������Ϣ
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
	   printf("\nҵ����õĻ�������%sƽ������%6.2f\n",manager[0].managerName,manager[0].average);
	} 
	//��������ʼ
	int main()
	{
		inputProductInfo();
		outputBestProduct();
		outputBestManager();
		return 0;
	 } 
