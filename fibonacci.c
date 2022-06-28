#include<stdio.h>
int main()
{
    int n,a,b,c,i;
    scanf("%d",&n);
    a=0;
    b=1;
    c=0;
    for(i=0;i<n;i++)
    {
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
    }
}