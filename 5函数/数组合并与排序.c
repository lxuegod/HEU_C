#include <stdio.h>
int main()
{
	int a[5],b[5],c[10];
	int i,j,t;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		c[i]=a[i];    //�ϲ���һ������ 
	}
	for(i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
		j=i+5;
		c[j]=b[i];    //�ϲ��ڶ������� 
	}
	for(j=0;j<9;j++)
	{
		printf("%d,",c[j]);
	}
	printf("%d\n",c[9]);   //����ϲ�������� 
	
	
	for(i=0;i<10;i++)    //ð�ݷ���С�������� 
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

