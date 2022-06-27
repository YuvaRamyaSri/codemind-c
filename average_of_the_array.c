#include<stdio.h>
int main()
{
    int n,arr[1000],i;
    float s=0,avrg=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
       s=s+arr[i];
    }
    avrg=s/n;
    printf("%.2f",avrg);
}