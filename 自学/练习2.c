#include<stdio.h>
void main()
{
    int i,j,a[100][100],n,k;
    printf("����n��ֵ��");
    scanf("%d",&n);
    k=1;
    for(i=1;i<=n/2;i=i+1)
    {
        for(j=i;j<=n-i;j=j+1)    //�Ϸ�   
        {
            a[i][j]=k;
            k=k+1;
        }
        for(j=i;j<=n-i;j=j+1)    //�Ҳ�
        {
            a[j][n-i+1]=k;
            k=k+1;
        }
        for(j=n-i+1;j>=i+1;j=j-1)    //�·�
        {
            a[n-i+1][j]=k;
            k=k+1;
        }
        for(j=n-i+1;j>=i+1;j=j-1)    //���
        {
            a[j][i]=k;
            k=k+1;
        }
    }
    if(n%2==1)
    {
        i=(n+1)/2;
        a[i][i]=n*n;
    }
    for(i=1;i<=n;i=i+1)
    {
        for(j=1;j<=n;j=j+1)
            printf("%4d",a[i][j]);
        printf("\n");
    }
    printf("\n");
}

