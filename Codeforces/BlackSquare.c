#include <stdio.h>
int main()
{
    int a[50];
    long int n,s=0;
    for (int i = 0;i<4;i++)
    scanf("%d", &a[i]);
    scanf("%ld", &n);
    for (int j = 0; j<4;j++)
    {
        if (a[j] == 0)
        continue;
        else
        {
        for (int i= n;n>0;n=n/10)
        s = s + (a[(n%10)-1]);    
        }
    }
    printf("%ld", s);
    
}
