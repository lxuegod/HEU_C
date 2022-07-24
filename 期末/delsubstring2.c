#include <stdio.h>
#include <string.h>
#define N 255
int main()
{
	char str1[N],str2[N];
	int i,j,l1,l2;
	gets(str1);   
	gets(str2);     
	l1=strlen(str1);   
	l2=strlen(str2);     
	for(i=0;i<l1;i++)   
	{
		int m=0;
		for(j=0;j<l2;j++)  
		{
			if(str1[i] == str2[j])   
			{
				m=1;
				break;
			}	
		}
		if(m==0)
		printf("%c",str1[i]);  
	}
}
