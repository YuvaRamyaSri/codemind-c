#include<stdio.h>
int main()
{
    char str[100];
    int i,j,c=0,f=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        c=0;
        for(j=0;str[j]!=NULL;j++)
        {
            if(str[i]==str[j] && i!=j)
            {
                c++;
            }
        }
        if(c==0)
        {
            f=1;
            printf("%c",str[i]);
            break;
        }
    }
    if(f==0)
    {
        printf("-1");
    }
}