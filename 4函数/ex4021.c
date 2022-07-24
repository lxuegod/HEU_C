#include <stdio.h>
void sushu(int ,int)
int main()
{
	int m,n,
	scanf("%d,%d",&m,&n);
	sushu(m,n);
}
void sushu(int m,int n)
{
	int i;
	int a;
	int o=0,p=0;
	m>n?a=m,m=n,n=a:m;
	for(;m<=n;m++)
	{
		o=0;
		p=0;
		for(i=2;i<m;i++)
		{
			m%i==0?o=1:o;	
		}
		if(o==0)
		{
			for(i=2;i<m+2;i++)
			{
				(m+2)%i==0?p=1:p;
			}
			if(p==0)
			{
				printf("%d,%d\n",m,m+2);
			}
		}
	}
}
