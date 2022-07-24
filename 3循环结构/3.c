#include<stdio.h>
int main()
{
	int a,t,b,c,d;
    a=100;
    for(t=a;t<1000;t=++a){
    	b=t/100;
    	t%=100;
    	c=t/10;
    	t%=10;
    	d=t/1;
    	if(a==b*b*b+c*c*c+d*d*d){
		printf("%d\n",a);
		}
    }
    return 0;	
}


