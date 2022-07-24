#include <stdio.h>
int main()
{
	float sum(int);
	float add;
	int n;
	printf("Please input a number:\n"); 
	scanf("%d",&n);
	add = sum(n);
	printf("%e\n",add);
	return 0;
}
float sum(int n)
{
	float fac(int);
	int i;
	float s = 0;
	for(i=1;i<=n;i++)
	   s+=fac(i);
	 return s;
}
float fac(int i)
{
	float t = 1;
	int n = 1;
	do
	{
		t*=n;
		n++;
	}while(n<=i);
	return t;
}
