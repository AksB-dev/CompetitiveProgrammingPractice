#include <stdio.h>
int main()
{
    int n, h, a[5000], c=0;
    scanf("%d %d", &n, &h);
    for (int i = 0; i<n;i++)
    {
        scanf("%d", &a[i]);
        if (a[i]<=h)
        c++;
        else if (a[i]>h)
        c=c+2;
    }
    printf("%d", c);
}