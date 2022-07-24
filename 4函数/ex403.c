#include<stdio.h>
#define Q 12
int main()
{
 int x;
 int i;
 scanf("%d",&x);
 int r=0;
 for(i=0;i<=x;i++)
 {
  int q=0;
  int o=i;
  while(o>0)
  {
   o/=10;q++;
  }
  int a[q];
  o=i;
  int w=0;
  for(w=0;w<q;w++)
  {
   a[w]=o%10;o/=10;
  }
  int e=0;
  for(w=0;w<q/2;w++)
  {
   if(a[q-1-w]!=a[w])
   e=1;
  }
 
  if(e==0)
  {
  printf("%d,",i);r++;
  }
  if(r==10)
  {
   printf("\n");
   r=0;
  }
 }
} 
