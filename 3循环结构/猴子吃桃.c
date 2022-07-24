#include <stdio.h>
int main()
{
	int x,i;
	x=1,i=0;
	for(;i<9;i++)
	{
		x=2*(x+1);
	}
	printf("%d",x);
	return 0;
}
