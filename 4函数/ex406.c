#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d",&a);
	b=f(a);
	if(b==0)
	printf("%d is not a leap year",a);
    else printf("%d is a leap year",a);
}
int f(int a)
{
	int c;
	if(a%4!=0)
	c=0;
	else if(a%100!=0)
	c=1;
	else if(a%400!=0)
	c=0;
	else c=1;
	return c;

}
