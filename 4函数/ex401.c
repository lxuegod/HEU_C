#include <stdio.h>
int main()
{
	int a;
	float b;
	float f(int a);
	scanf("%d",&a);
	b=f(a);
	printf("%.2f",b);
}
float f(int a)
{
	int i;
	float m=0,f2=2,c,f1=1;
	for(i=1;i<=a;i++)
	{
		m+=f2/f1;
		c=f2;
		f2+=f1;
		f1=c;
	}
	return m;
}
