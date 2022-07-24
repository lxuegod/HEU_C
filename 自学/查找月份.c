#include <stdio.h>
char *search_name(int n);
char month[][13] = {"error","January","February","March","April","May","June","July","August","September","October","November","December"};
int main(void)
{
	int n;
	char *p;
	scanf("%d",&n);
	p = search_name(n);
	printf("It is %s.\n",p);
	return 0;
}
char *search_name(int n)
{
	if(n<1||n>12) return month[0];
	else return month[n];
}
