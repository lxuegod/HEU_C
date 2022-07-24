#include <stdio.h>
#include <string.h>
#define ROWS 5
#define COLUMNS 20
void assign(char (*arr)[COLUMNS],int rows)
{
	int i;
	for(i = 0;i < rows;i++)
	scanf("%s",(arr+i));
}
void show(char (*arr)[COLUMNS],int rows)
{
	int i;
	for(i = 0;i < rows;i++)
	printf("%s\n",*(arr+i));
}
void sort(char (*arr)[COLUMNS],int rows)
{
	int i,j,k;
	char ch[rows][COLUMNS],(*a)[COLUMNS];
	a = ch;
	for(i = 0;i < rows;i++)
	for(j = 0;j < COLUMNS;j++)
	{
		ch[i][j] = *(*(arr+i)+j);
	}
	for(i = 0;i < rows;i++)
	{
		k = 0;
		for(j = 0;j < rows;j++)
		{
			if(*(*(a+i)) > *(*(a+j)))
			k++;
		}
		for(j = 0;j < COLUMNS;j++)
		*(*(arr+k)+j) = *(*(a+i)+j);
	}
}
void main()
{
	char ch[ROWS][COLUMNS];
	char (*arr)[COLUMNS] = ch;
	assign(arr,ROWS);
	sort(arr,ROWS);
    show(arr,ROWS);
}
