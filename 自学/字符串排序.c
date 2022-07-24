#include <stdio.h>
#include <string.h>
void sort(char *pname[],int n)
{
	char *temp;
	int i,j,k;
	for(i = 0;i < n-1;i++)
	{
		k = i;
		for(j = i+1;j < n;j++)
		  if(strcmp(pname[k],pname[j]) > 0)  k = j;
		if(k != j)
		{
			temp = pname[i];pname[i] = pname[k]; pname[k] = temp;
		}
	}
}
void print(char *pname[],int n)
{
	int i;
	for(i = 0;i < n;i++)
	printf("%s\n",pname[i]);
}
int main()
{
	char *name[4] = {"Pascal","Word","C programing","Basic"};
	int n = 4;
	sort(name,n);
	print(name,n);
	return 0;
}
