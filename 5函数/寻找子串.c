#include<stdio.h>
#include<string.h>
#define N 100
void main()
{
	char a[N],b[N];    //�������鳤�� 
	int i=0,j=0,t,k,l1,l2;
	gets(a);    //�����ַ� 
	gets(b);
	l1=strlen(a);   //�ַ��ĳ��� 
	l2=strlen(b);
	for(;i<l1;i++)
	{
		if(a[i]==b[j])    //�ж�b�ĵ�һλ 
		{
			k=i;
			for(;j<l2;i++,j++)
			{
				if(a[i]!=b[j]||a[i]==0) 
				{
				   t=-1;break;	
				}
				t=1;
			}
			j=0;	
		}
		if(t>0)
		{
			t=k+1;    //��¼��һ����ͬ���ַ���λ�� 
			break;
		}
		else  t=-1;	
	}
	printf("%d",t);
}
