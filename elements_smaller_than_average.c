#include<stdio.h>
int main()
{
    int n,a[100],c=0,i,s=0,avrg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
    {
       s=s+a[i];
    }
    avrg=s/n;
    for(i=0;i<n;i++)
    {
        if(a[i]<=avrg)
        {
            c++;
        }
    }
    printf("%d",c);
}