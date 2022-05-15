#include<stdio.h>
int main()
{
    int a,b,arr[100][100],i,j,s=0;
    scanf("%d %d",&a,&b);
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(i==j || i+j==b-1)
            {
                s=s+arr[i][j];
            }
        }
    }
    printf("%d",s);
}