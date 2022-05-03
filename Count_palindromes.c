#include<stdio.h>
int main()
{
    int n,arr[100],i,t,d,c=0,rev;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        t=arr[i];
        rev=0;
        while(arr[i]!=0)
        {
            d=arr[i]%10;
            arr[i]=arr[i]/10;
            rev=rev*10+d;
        }
    if(rev==t)
    {
        c++;
    }
    }
    printf("%d",c);
}