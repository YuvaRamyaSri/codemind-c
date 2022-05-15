#include<stdio.h>
int main()
{
    int n,arr[100],k,i,m=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(m<arr[i])
        {
            m=arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]+k>=m)
        {
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
}