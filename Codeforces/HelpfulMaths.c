#include <stdio.h>
int main()
{
    char s[100];
    int n = 1;
    int temp;
    scanf("%s", s);
    while (s[n]!='\0')
    n++;
    for (int i = 0; i<n; i = i+ 2)
    {   for (int j = 0; j<n-i-2; j = j+2)
        {
        if (s[j]>s[j+2])
        {
        temp = s[j];
        s[j] = s[j+2];
        s[j+2] = temp;
        }
        }
    }
    printf("%s", s);

}