#include <stdio.h>
#include <string.h>
#define N 255
int main()
{
	char str1[N],str2[N];
	int i,j,l1,l2;
	gets(str1);   // 输入原始字符串 
	gets(str2);   // 输入需要删减的字符串  
	l1=strlen(str1);   //原始字符串长度 
	l2=strlen(str2);    //要删减的字符串的长度 
	for(i=0;i<l1;i++)    //遍历原始字符串 
	{
		int m=0;
		for(j=0;j<l2;j++)  //遍历需要删减的字符串
		{
			if(str1[i] == str2[j])   
			{
				m=1;
				break;
			}	
		}
		if(m==0)
		printf("%c",str1[i]);   //输出处理后的字符串 
	}
}
