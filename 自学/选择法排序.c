#include <stdio.h>
#define N 10
int main()
{
	int a[N],i,j,k,t;
	for(i=0;i<N;i++)
	  scanf("%d",&a[i]);
	for(i=0;i<N-1;i++)
	{
		k=i;
		for(j=i;j<N;j++)
		   if(a[k]>a[j])  k=j;
		if(k!=i)
		{
			t=a[k],a[k]=a[i],a[i]=t;
		}
	}
	for(i=0;i<N;i++)  printf("%d ",a[i]);
     return 0;
}
