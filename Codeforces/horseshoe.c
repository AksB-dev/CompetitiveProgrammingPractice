#include <stdio.h>
int main()
{
    int a[20], c=4;
    for (int i = 0; i<4;i++)
    scanf("%d", &a[i]);
    for (int i = 0; i<4;i++)
    {
        for (int j = i+1;j<4;j++)
        if (a[i]==a[j])
        {
            c--;
            break;
        }
    }
    printf("%d", 4-c);

}