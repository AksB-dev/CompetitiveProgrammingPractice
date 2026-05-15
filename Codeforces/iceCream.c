#include <stdio.h>
int main()
{
    int n, x, d=0;
    scanf("%d %d", &n, &x);
    char a[100];
    int b[100];
    for (int i = 0; i<n;i++)
    {
    scanf("%d", &b[i]);
    }
    for (int i = 0; i<n;i++)
    printf("%c %d\n", a[i], b[i]);
    /*for (int i =0;i<n;i++)
    {
        if (a[i]=='-')
        {
            if (b[i]>x)
            d++;
            else
            x = x - b[i];
        }
        else if (a[i]=='+');
        x = x + b[i];
    }
    printf("%d %d", x, d);*/
}