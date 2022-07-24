#include <stdio.h>
int main()
{
	int a[5],b[5],c[10];
	int i,j,t;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		c[i]=a[i];    //合并第一个数组 
	}
	for(i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
		j=i+5;
		c[j]=b[i];    //合并第二个数组 
	}
	for(j=0;j<9;j++)
	{
		printf("%d,",c[j]);
	}
	printf("%d\n",c[9]);   //输出合并后的数组 
	
	
	for(i=0;i<10;i++)    //冒泡法从小到大排序 
	{
			for(j=0;j<9;j++)
		  if(c[j]>c[i])
		  {
		  	t=c[j];c[j]=c[i];c[i]=t;
		  }
	}
	for(i=0;i<9;i++)
	{
		 printf("%d,",c[i]);
	}
	printf("%d",c[9]);
	return 0;
}

