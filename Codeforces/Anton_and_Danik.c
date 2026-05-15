#include <stdio.h>
int main()
{
    int n, A= 0, D=0;
    scanf("%d", &n);
    char a[5000];
    scanf("%s", a);
    for (int i = 0; i<n;i++)
    {
    if (a[i]=='A')
    A++;
    else if (a[i]=='D')
    D++;
    }
    if (D>A)
    printf("Danik");
    else if (A>D)
    printf("Anton");
    else if (A==D)
    printf("Friendship");
}