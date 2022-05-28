#include<stdio.h>
int palindrome(int n)
{
    int t,rev=0,d;
    t=n;
    while(n!=0)
    {
        d=n%10;
        n=n/10;
        rev=rev*10+d;
    }
    if(rev==t)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,t,i,d,rev,p,e,z=0,q=0;
    scanf("%d",&n);
    for(i=n-1;i>0;i--)
    {
        if(palindrome(i)==1)
        {
            p=i;
            z=n-i;
            break;
        }
    }
    for(i=n+1;i<=n+10000;i++)
    {
        if(palindrome(i)==1)
        {
            q=i;
            e=i-n;;
            break;
        }
    }
    if(z<e)
    {
        printf("%d",p);
    }
    else if(z==e)
    {
        printf("%d %d",p,q);
    }
    else
    {
        printf("%d",q);
    }
}