#include <stdio.h>
int main()
{
    char a[100];
    int n, u=0, l=0;
    scanf("%s", a);
    while (a[n]!='\0')
    n++;
    for (int i = 0;i<n;i++)
    {
        if (a[i]>=65 && a[i]<=90)
        u++;
        else 
        l++;
    }
    if (l>=u)
    {
        for (int i = 0;i<n;i++)
        {
            if (a[i]>=65 && a[i]<=90)
            a[i] = a[i] +32;
        }
    }
    else
    {
        for (int i = 0;i<n;i++)
        {
            if (a[i]>=97 && a[i]<=122)
            a[i] = a[i] - 32;
        }
    }
    printf("%s", a);
}