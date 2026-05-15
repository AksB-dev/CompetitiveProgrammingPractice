
 #include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char s[n][200];
    int a[n];
    for (int i = 0; i<n;i++)
    scanf("%s", s[i]);
    for (int i = 0; i<n;i++)
    {
        for (int j = 0; s[i][j]!='\0';j++)
        a[i] = j;
    }
    for (int i = 0; i<n;i++)
    {
        if (a[i]+1<=10)
        printf("%s\n", s[i]);
        else
        printf("%c%d%c\n", s[i][0], a[i]-1, s[i][a[i]]);
    }
 
 
}