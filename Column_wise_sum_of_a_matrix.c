#include <stdio.h>

int main()
{
    int i, j, m, n;
    int matrix[10][20];
    int sumR, sumC;
    scanf("%d", &m);
    scanf("%d", &n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        sumC = 0;
        for (j = 0; j < m; j++)
        {
            sumC += matrix[j][i];
        }
        printf("%d ", sumC);
    }

    return 0;
}