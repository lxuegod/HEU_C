#include<stdio.h>
int main()
{
	int m,n;
	m>n?m=n:m;
	scanf("%d,%d",&m,&n);
	if(m<1||m>9999||n<1||n>9999)
	printf("error");
	else
	{
		for(m;m<=n;m++)
		{
			int i=1;
			int M=0;
			for(i;i<m;i++)
			{
				if(m%i==0)
				M+=i;
			}
			if(M==m)
			printf("%d,",m);
		}
		
	}
}

