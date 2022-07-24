#include <stdio.h>
int main()
{
	int i=1,sum=0,n;
	scanf("%d",&n);
	for(;i<=n;i++)
	{
		sum +=i;
	}
	printf("\nthe sum is %d",sum);
	return 0;
}
