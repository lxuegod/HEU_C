#include <stdio.h>
#include <string.h>
#define N 255
int main()
{
	char str1[N],str2[N];
	gets(str1);   
	gets(str2);        
    char *p;
    while(p = strstr(str1,str2))
    {
    	int l = strlen(str2);
    	char t[N];
    	strcpy(t,p+l);
    	strcpy(p,t);
	}
	puts(str1);
	return 0;
}
