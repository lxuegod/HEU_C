#include <stdio.h>
#define N 3
#define M 4
void main()
{
	int a[N][M];
	int max,col,row,i,j;
	int (*p)[M];
	p = a;
	for(i = 0;i < N;i++)
	  for(j = 0;j < M;j++)
	    scanf("%d",&a[i][j]);
    max = * *p,col = 0;row = 0;
    for(i = 0;i < N;i++)
    {
    	for(j = 0;j < M;j++)
    	if(max < *(*p + j))
    	{
    		max = *(*p + j);
    		row = i;
    		col = j;
		}
		p++;
	}
	printf("\nmax = %dÐÐ%dÁÐ = %d",row+1,col+1,max);
}
