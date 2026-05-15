#include <stdio.h>
int main()
{
    int n, c=0;
    scanf("%d", &n);
    int a[50][50];
    for (int i = 0;i<n;i++)
    {
        for (int j = 0; j<2;j++)
        scanf("%d", &a[i][j]); 
    }
     for (int i = 0;i<n;i++)
    {
        for (int k = i+1; k<n;k++)
        {   
            if (a[i][0]==a[k][1] && a[i][1]==a[k][0])
            c = c+2;
            else if (a[i][0]==a[k][1] || a[i][1]==a[k][0])
            c++;
        }  
    }
    printf("%d", c);
}