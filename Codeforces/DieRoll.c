#include <stdio.h>
int main()
{
    int y, w;
    scanf("%d %d", &y, &w);
    if (y>= w)
    {
        if (7-y ==1 || 7-y ==5)
        printf("%d/6", 7-y);
        else if (7-y ==3)
        printf("1/2");
        else if (7-y == 2 || 7-y ==4)
        printf("%d/3", (7-y)/2);
        else if (7-y == 6)
        printf("1/1");
    }
    else
    {
        
        if (7-w ==1 || 7-w ==5)
        printf("%d/6", 7-w);
        else if (7-w ==3)
        printf("1/2");
        else if (7-w == 2 || 7-w ==4)
        printf("%d/3", (7-w)/2);
        else if (7-w == 6)
        printf("1/1");
    }

}