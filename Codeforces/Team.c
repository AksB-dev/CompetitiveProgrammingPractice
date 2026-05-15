#include <stdio.h>
int main()
{
    int n, c=0, b;
    scanf("%d", &n);
    int a[50][50];
    for (int i = 0; i<n;i++)
    {
        for (int j = 0; j<3;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i<n;i++)
    {   b=0;
        for (int j = 0; j<3;j++)
        {
        if (a[i][j]==1)
        b++;
        }
        if (b>=2)
        c++;
    }
    printf("%d", c);
}   