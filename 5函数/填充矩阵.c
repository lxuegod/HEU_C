#include<stdio.h>
#define N 100
int main()
{
    int n,a[N][N],i,j;
    scanf("%d",&n);
    int p=n-1,q=0;
    int k=0;
    while(k<n*n)  
    {
        for(i=p;i>=q;i--)
            {a[q][i]=k+1;k++;} 
 
        for(i=q+1;i<=p;i++)
            {a[i][q]=k+1;k++;} 
 
        for(i=q+1;i<=p;i++)
            {a[p][i]=k+1;k++;}
 
        for(i=p-1;i>=q+1;i--)
            {a[i][p]=k+1;k++;}
            p--;
            q++;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            {printf("%3d ",a[i][j]);}
             printf("\n");
    }
    return 0;
}
