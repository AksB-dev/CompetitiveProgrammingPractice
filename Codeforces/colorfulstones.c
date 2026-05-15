#include <stdio.h>
int main()
{
    char a[100], b[100];
    int l=0, pos=0;
    scanf("%s",a);
    scanf("%s", b);
    int count =1;
    while (b[count]!='\0')
    count++;
    for (int i = 0; i<count;i++)
    {   
        if (a[pos]==b[i])
            pos++;
    }
    printf("%d", pos+1);
}