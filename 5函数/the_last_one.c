#include<stdio.h>
#include<string.h>
#define H 100            //�����ַ������Ȳ��� 
int  main()
{   //����������������飺 
	char s1[H];
	char s2[H]; 
	int i,j;
	//�����ַ����� 
	gets(s1);
	gets(s2);
	//ͨ��ѭ����ʶ��ɸѡժ���� 
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


