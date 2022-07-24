#include <stdio.h>
int main()
{
	float f(int n,int x);
	int x,n;
	scanf("%d,%d",&n,&x);
	if(n<0) printf("error");
	else printf("%.2f",f(n,x));
	return 0;
}
float f(int n,int x)
{
	float b;
	if(n==0) b=1;
	else if(n==1) b=x;
	else b=((2*n-1)*x-f((n-1),x)-(n-1)*f((n-2),x))/n;
	return b;
}
