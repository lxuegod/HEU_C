#include <stdio.h>
int main()
{
	int n,m=0;
	for(n=100;n<=150;n++)
	{
		if(n%3==0)
		continue;
		printf("%8d",n);
			m=m+1;
		if(m%4==0)
		printf("\n");
	}
	return 0;
}
