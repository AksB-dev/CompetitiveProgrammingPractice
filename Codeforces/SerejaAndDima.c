#include <stdio.h>
int main()
{
    int n, s=0, d=0;
    scanf("%d", &n);
    int a[4000];
    for (int i = 0; i<n;i++)
    scanf("%d", &a[i]);
    for (int i = 0; i<n;i++)
    {
    if ((i+1)%2==1)
    {
        if (a[i]>=a[n-i-1])
        {
        s = s + a[i];
        for (int j = i;j<n-1;j++)
        a[j] = a[j+1];
        }
        else 
        {
        s = s + a[n-i-1];
        for (int j = n-i-1;j>0;j--)
        a[j] = a[j-1];
        }

    }
    else if ((i+1)%2==0)
    {
        if (a[i]>=a[n-i-1])
        {
        d = d + a[i];
        for (int j = i;j<n-1;j++)
        a[j] = a[j+1];
        }
        else 
        {
        d = d + a[n-i-1];
        for (int j = n-i-1;j>0;j--)
        a[j] = a[j-1];
        }
    }
    }
    printf("%d %d", s, d);

}