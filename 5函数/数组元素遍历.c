#include <stdio.h>
int main()
{
	int i,sum=0,a[10],t;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);     //�������� 
		sum+=a[i];           //�����ܺ� 
	}
	t=sum/10;    //����ƽ��ֵ 
	for(i=0;i<9;i++)
	{
		printf("%d,",a[i]);   //������� 
	}
	printf("%d",t);   //���ƽ��ֵ 
	return 0;
}
