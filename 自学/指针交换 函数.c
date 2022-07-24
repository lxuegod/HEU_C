#include <stdio.h>
void swap(int *p1,int *p2)
{
	int p;
	p = *p1;
	*p1 = *p2;
	*p2 = p;
}
int main()
{
	int a,b,*pa,*pb;
	scanf("%d%d",&a,&b);
	pa = &a;
	pb = &b;
	if(a<b)  swap(pa,pb);
	printf("%d %d\n",a,b);
	return 0;
}
