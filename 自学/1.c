#include <stdio.h>
#include <string.h>
#define N 200
int main()
{
	char a[N],k;
	int i,l,j;
	gets(a);
	l = strlen(a);
	for(i = 0,j = l-1;a[i]!='\0';i++,j--)
	{
		*(a+i) = k;*(a+i) = *(a+j);*(a+j) = k;
	}
	puts(a);
	return 0;
}
