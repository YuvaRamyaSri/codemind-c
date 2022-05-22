#include<stdio.h>
int digit_count(int n)
{
    int dc=0,d;
    if(n==0)
    {
        return 1;
    }
    while(n!=0)
    {
        d=n%10;
        n=n/10;
        dc++;
    }
    return dc;
}
int main()
{
    int n,arr[1000],dc,i,c=0,k;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        dc=0;
        dc=digit_count(arr[i]);
        if(digit_count(arr[i])==k)
        {
            c++;
        }
    }
    printf("%d",c);
}