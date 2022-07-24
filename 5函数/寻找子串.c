#include<stdio.h>
#include<string.h>
#define N 100
void main()
{
	char a[N],b[N];    //定义数组长度 
	int i=0,j=0,t,k,l1,l2;
	gets(a);    //输入字符 
	gets(b);
	l1=strlen(a);   //字符的长度 
	l2=strlen(b);
	for(;i<l1;i++)
	{
		if(a[i]==b[j])    //判断b的第一位 
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
			t=k+1;    //记录第一个相同的字符的位置 
			break;
		}
		else  t=-1;	
	}
	printf("%d",t);
}
