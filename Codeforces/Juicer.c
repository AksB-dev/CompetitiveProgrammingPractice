#include <stdio.h>
int main()
{
    int n, b, d, a[400000], s=0, l=0;
    scanf("%d %d %d", &n, &b, &d);
    for (int i = 0; i<n; i++)
    scanf("%d", &a[i]);
    for (int i = 0; i<n; i++)
    {
        if (a[i]<=b)
        {
            s = s+ a[i];
            if (s>d)
            {
                l++;
                s = 0;
            }
        }
    }
    printf("%d", l);
}