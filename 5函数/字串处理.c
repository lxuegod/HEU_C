#include <stdio.h>
#include <string.h>
#define N 255
int main()
{
	char str1[N],str2[N];
	int i,j,l1,l2;
	gets(str1);   // ����ԭʼ�ַ��� 
	gets(str2);   // ������Ҫɾ�����ַ���  
	l1=strlen(str1);   //ԭʼ�ַ������� 
	l2=strlen(str2);    //Ҫɾ�����ַ����ĳ��� 
	for(i=0;i<l1;i++)    //����ԭʼ�ַ��� 
	{
		int m=0;
		for(j=0;j<l2;j++)  //������Ҫɾ�����ַ���
		{
			if(str1[i] == str2[j])   
			{
				m=1;
				break;
			}	
		}
		if(m==0)
		printf("%c",str1[i]);   //����������ַ��� 
	}
}
