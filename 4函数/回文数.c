#include<stdio.h>
int main()
{
	int a,sum=0,m,b=0,c;
	scanf("%d",&c);
	for(m=0;m<=c;m++)
	{
		a=m;
		while(a!=0)
		{
			sum=sum*10+a%10;
			a/=10;
		}
		if(sum==m)
		{
			b=b+1;
			printf("%d,",m);
			if(b%10==0) printf("\n");
		}
		sum=0;
	}
	return 0;
}

