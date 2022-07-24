#include <stdio.h>
int main()
{
	int a,b,i,k=0;
	scanf("%d",&a);
	if(a>=3&&a<=10)
    {
		for(i=0;i<=5;i++)
		{
			b=a+3*i;
			k+=b*b*b*b;
		}
		printf("%d",k);
	}
	else printf("error");
}
