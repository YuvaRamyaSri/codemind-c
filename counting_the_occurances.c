#include<stdio.h>
int main()
{
    char str[1000],k;
    int c=0,i;
    scanf("%[^
]s",str);
    scanf(" %c",&k);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==k)
        {
            c++;
        }
    }
    if(c!=0)
    {
        printf("%d",c);
    }
    else
    {
        printf("-1");
    }
}