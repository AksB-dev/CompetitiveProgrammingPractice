#include <stdio.h>
int main()
{
    char a[1005];
    fgets(a, sizeof(a), stdin);
    int count = 0;
    int k = 0;
    while (a[k]!='\0')
    {
        if (a[k]>=97 && a[k]<=122)
        count++;
        k++;
        
    }
    int u = count;
    for (int i = 1; i<k; i=i+3)
    {
        for (int j = i+3; j<k;j=j+3)
        {
            if (a[i]==a[j])
            {
                u--;
                break;
            }
        }
    } 
    printf("%d", u);
}