#include<stdio.h>
int main()
{
    int n,arr[1000],i,m=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            m++;
        }
    }
    if(m!=0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}