#include<stdio.h>
int main()
{
    char str[100];
    int i,m=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>m)
        {
            m=str[i];
        }
    }
    printf("%c",m);
}