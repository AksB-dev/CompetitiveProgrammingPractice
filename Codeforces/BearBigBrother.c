#include <stdio.h>
int main()
{
    int a, b;
    int i=0;
    scanf("%d %d", &a, &b);
    while (b>=a)
    {
        a = 3*a;
        b = 2*b;
        i++;
    }
    printf("%d", i);

}