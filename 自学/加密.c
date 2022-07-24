#include <stdio.h>
int main()
{
	char a,b,c,d,e;
	scanf("%c%c%c%c%c",&a,&b,&c,&d,&e);
	a = (a-'a'+4)%26+'a';
	b = (b-'a'+4)%26+'a';
	c = (c-'a'+4)%26+'a';
	d = (d-'a'+4)%26+'a';
	e = (e-'a'+4)%26+'a';
	printf("%c%c%c%c%c",a,b,c,d,e);
}
