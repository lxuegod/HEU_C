#include <stdio.h>
#include <math.h>
int isprime(int);
int main()
{
	int i,a,s,n,m=0;
	scanf("%d",&n);
	float b,c;
	int add(int);
	float mul(int);
	for(i=2;i<=n;i++)
	{
		s=isprime(i);
		if(s)
		{
			m++;
			printf("%d,",i);
			if(m%10==0) printf("\n");
		}
	}
	a=add(n);
	b=mul(n);
	c=b/a;
	printf("\nc =%7.0f\n",c);
	return 0;
 }
 int add(int n)
 {
 	int i,s,sum=0;
 	for(i=2;i<=n;i++)
 	{
 		s=isprime(i);
 		if(s) sum+=i;
	 }
	 return sum;
 }
 float mul(int n)
 {
 	int i,s;
 	float t=1.0;
 	for(i=2;i<=n;i++)
 	{
 		s=isprime(i);
 		if(s) t*=i;
	 }
	 return t;
 }
 int isprime(int m)
 {
 	int i;
 	for(i=2;i<=sqrt(m);i++)
 	    if(m%i==0) return 0;
		     return 1; 
 }
