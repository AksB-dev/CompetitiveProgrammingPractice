#include <stdio.h>
int main()
{
    int n, c=0, s=0, flag = 0;
    scanf("%d", &n);
    int a[1000];
    for (int i = 0; i<n;i++)
    scanf("%d", &a[i]);
    for (int i = 0; i<n;i++)
    {
        s+=a[i];
        for (int j = 0; j<s/2;j++)
        {
        if (s/j==j && s%j==0)
        {   
            if (j%2==1)
            {
            c++;
            }

        }
        }
    }
    printf("%d", c);

}