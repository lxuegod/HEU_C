#include <stdio.h>
#define N 10
int main()
{
	int i,j,t,a[N];
	for(i=0;i<N;i++)
	  scanf("%d",&a[i]);
	for(i=0;i<N;i++)
	{
		for(j=0;j<N-1;j++)
		  if(a[j]>a[i])
		  {
		  	t=a[j];a[j]=a[i];a[i]=t;
		  }
	}
	for(i=0;i<N;i++)
	   printf("%2d",a[i]);
	return 0;
}
