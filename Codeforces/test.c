#include<stdio.h>
int main()
{
    int n, temp, a[100];
    printf("Enter size of the array\n");
    scanf("%d", &n);
    printf("Enter elements of the array\n");
    for (int i = 0; i<n;i++)
    scanf("%d", &a[i]);
    for (int i = n-1; i>=0;i--)
    {
        for (int j = i; j>=0;j--)
        {
            if (a[j]<a[j-1])
            {
                temp = a[j];
                a[j] = a[j-1];
                a[j-1] = a[j];
            }
        }
    }
    printf("The sorted array is\n");
    for (int k = 0; k<n; k++)
    printf("%d\n", a[k]);
}