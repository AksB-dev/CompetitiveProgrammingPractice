#include <stdio.h>
int main()
{
    char a[100], u[100];
    scanf("%s",a);
    int count=1;
    while (a[count]!='\0')
    count++;
    int f = count;
    for (int i = 0; i<count;i++)
    {
        for (int j=i+1;j<count;j++)
        {
            if (a[i]==a[j])
            {
            f--;
            break;
            }
        }
    }
    if (f%2==1)
    printf("IGNORE HIM!");
    else
    printf("CHAT WITH HER!");
 
}