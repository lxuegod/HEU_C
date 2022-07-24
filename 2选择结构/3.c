#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d", &a);
	if (a >= 0)
	{
		if (a % 2 > 0)
		  b = a / 2;
	    else
		  b = a * a;
	}
	else 
	  b = a * a;
	printf("%d", b);
 } 
