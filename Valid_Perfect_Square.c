#include<stdio.h>
int main()
{
    int n,arr[100],i,j,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=1;j<arr[i];j++)
        {
            if(j*j==arr[i])
            {
                printf("True
");
                c=1;
                break;
            }
        }
        if(c==0)
        {
            printf("False
");
        }
    }
}