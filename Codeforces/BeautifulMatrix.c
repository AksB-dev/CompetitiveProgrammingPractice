#include <stdio.h>
int main()
{   
    int a[50][50], count =0;
    int i, j;
    for (int i = 0; i<5;i++)
    {
        for (int j = 0; j<5;j++)
        scanf("%d", &a[i][j]);
    }
    for (i = 0; i<5;i++)
    {
        for (j = 0; j<5;j++)
        {
            if (a[i][j]==1)
            {
            if (i >= 2 && j>=2) 
            count = (i-2) + (j-2);
            else if (i >= 2 && j<2) 
            count = (i-2) + (2-j);
            else if (i < 2 && j<2) 
            count = (2-i) + (2-j);
            else if (i < 2 && j>=2) 
            count = (2-i) + (j-2);
            }
        }
    }
    printf("%d", count);
}