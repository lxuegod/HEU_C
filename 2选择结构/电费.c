#include <stdio.h>
int main()
{
	int a;
	float c;
	scanf("%d",&a);
	if(a<=125)
		c=100.00;
	 else if(a<=200)
		     c=0.8*a;
		   else if(a<=300)
		       c=160+0.9*(a-200);
	             else if(a<=450)
	                c=a-50;
	                else c=1.15*(a-50);
	printf("%.2f",c);
}
