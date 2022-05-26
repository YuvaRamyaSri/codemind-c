#include<stdio.h>
int main()
{
    int n,m,i,s=0,c=0,t,d;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        t=i;
        s=0;
        c=0;
        while(t!=0)
        {
            d=t%10;
            t=t/10;
            s++;
            if(d==0)
            {
                break;
            }
            else
            {
            if(i%d==0)
            {
                c++;
            }
            }
        }
        if(s==c)
        {
            printf("%d ",i);
        }
    }
}