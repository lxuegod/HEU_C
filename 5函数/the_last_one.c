#include<stdio.h>
#include<string.h>
#define H 100            //定义字符串长度参数 
int  main()
{   //定义所需变量及数组： 
	char s1[H];
	char s2[H]; 
	int i,j;
	//输入字符串： 
	gets(s1);
	gets(s2);
	//通过循环体识别筛选摘除： 
	for(i = 0; i < strlen(s1); i++) 
	{
		int m = 0;
		for(j = 0; j < strlen(s2); j++) 
		{
			if(s1[i] == s2[j]) 
			{
				m=1;
				break;
			}	
		}
		if(m==0)
		printf("%c",s1[i]);
	}
	return 0;
}


