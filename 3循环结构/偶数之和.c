#include <stdio.h>
int main()
{
	int a[7],k=0,i=0;
	for(;i<8;i++)
	{
		scanf("%d",&a[i]);
		if( a[i]%2==0)
		k+=a[i];
	}
	printf("%d",k);
	return 0;
}
