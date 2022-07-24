#include <stdio.h>
int main()
{
	float a,b;
	scanf("%f",&a);
	if(a<=500)
	   b=a;
	   else if(a<=1000)
	      b=0.9*a;
		  else 
		     b=0.8*a;
	printf("%.2f",b);
	return 0;	
}
