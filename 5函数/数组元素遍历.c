#include <stdio.h>
int main()
{
	int i,sum=0,a[10],t;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);     //输入数组 
		sum+=a[i];           //计算总和 
	}
	t=sum/10;    //计算平均值 
	for(i=0;i<9;i++)
	{
		printf("%d,",a[i]);   //输出数组 
	}
	printf("%d",t);   //输出平均值 
	return 0;
}
