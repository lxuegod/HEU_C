#include <stdio.h>
#define N 10
void inv(int *x,int n)
{
	int i,j,t;
	for(i = 0,j = n-1;i < j;i++,j--)
	{
		t = *(x+i);*(x+i) = *(x+j);*(x+j) = t;
	}
}
int main()
{
	int i,a[N];
	for(i = 0;i < N;i++)  scanf("%d",&a[i]);
	int *p = a;
	inv(p,N);
	for(p = a;p < a+N;p++) printf("%d ",*p);
	return 0;
}
