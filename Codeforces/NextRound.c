#include <stdio.h>

int main() {
    int num1, num2, count =0;
    int a[100];
    // Read the two integers separated by a space
    scanf("%d %d", &num1, &num2);
    for (int i = 0; i<num1; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i<num1;i++)
    {
        if (a[i]>=a[num2-1]&&a[i]>0)
        count++;
    }
    printf("%d", count);
    
    return 0;
}


