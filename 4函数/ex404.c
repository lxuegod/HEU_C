#include <stdio.h>
int main()
{
	int a,c;
	float b,s;
	float f(int,float,int);
	scanf("%d,%f,%d",&a,&b,&c);
	s=f(a,b,c);
	printf("%.2f",s);
}
float f(int a,float b,int c)
{
	int i=1;
	float m=0.0;
	for(;i<=c;i++)
	{
		m=(m+a)*(1+b/12);
	}
	return m;
}
