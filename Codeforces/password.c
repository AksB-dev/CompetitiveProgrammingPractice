#include <stdio.h>
int main()
{
    int n, k, u=0;
    scanf("%d %d", &n, &k);
    char letters[] = "abcdefghijklmnopqrstuvwxyz", a[n];
    for (int i = 0; i<n; i++,u++)
    {   
        if (u==k)
        {
            for (int j = 0;j<sizeof(a); j++)
            {
                a[i] = a[j];
            }
        }
        else
        a[i] = letters[i];
    }
    printf("%s", a);

}