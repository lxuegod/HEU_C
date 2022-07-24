#include <stdio.h>
int main()
{
	int i,j;
	int a[3][3],b[3][3];
	for(i=0;i<3;i++)
	   for(j=0;j<3;j++)
	  {
	  	scanf("%d",&a[i][j]);
	  	b[j][i]=a[i][j];
	  }
	for(i=0;i<3;i++)
	  {
	  	 for(j=0;j<3;j++)
	  	 printf("%2d",b[i][j]);
	  	 printf("\n");
	  }
	  return 0;
}
