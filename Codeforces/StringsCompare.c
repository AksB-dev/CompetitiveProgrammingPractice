#include <stdio.h>
int main()
{
    char a[100], b[100];
    int c = 0;
    scanf("%s\n%s", a, b);
    for (int i = 0;a[i]!='\0';i++)
    {   
        if (a[i]>= 65 && a[i]<=90)
        a[i] = a[i] + 32;
    }
    for (int i = 0;b[i]!='\0';i++)
    {
    if (b[i]>= 65 && b[i]<=90)
        b[i] = b[i] + 32;
    }
    
    for (int i = 0;a[i]!=0||b[i]!=0;i++)
    {
        if (a[i]>b[i])
        {
        printf("1");
        c=1;
        break;
        }
        else if (a[i]<b[i])
        {
        printf("-1");
        c=1;
        break;
        }
        else 
        c=0;
    }
    if (c==0)
    printf("0");
}