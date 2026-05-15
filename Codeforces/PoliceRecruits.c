#include <stdio.h>
int main()
{
    int n, a[100000], p=0, u=0;
    scanf("%d", &n);
    for (int i = 0;i<n;i++)
    {   scanf("%d", &a[i]);
        if (a[i]==-1)
        {
            if (p > 0)
            p--;
            else if (p == 0)
            u++;
        }
        else
        p = p+a[i];
        
    }
    printf("%d", u);
}