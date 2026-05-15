#include <stdio.h>
int main()
{
    int n, count =0;
    char a[50];
    scanf("%d", &n);
    scanf("%s", a);
    for (int i = 0; i<n; i++)
    {
        if (a[i]==a[i+1])
        count++;
    }
    printf("%d", count);
}