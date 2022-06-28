#include<stdio.h>
int main()
{
    int n,arr[1000],i,a,b,m=100,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d %d",&a,&b);
    for(i=0;i<n;i++)
    {
        if((arr[i]<=a&&arr[i]>=b)||(arr[i]>=a&&arr[i]<=b))
        {
            c=1;
            printf("%d ",arr[i]);
        }
    }
    if(c==0)
    {
        printf("-1");
    }
}