#include <stdio.h>
int main()
{
    int k, r, s=0, i, flag = 0;
    scanf("%d %d", &k, &r);
    int price = k;
    for (i = 1; s!=k;i++)
    {   
        if (flag==1)
        break;
        flag = 0;
        k = price*i;
        for (int j = 1;s<=k;j++)
        {   
            s = 10*j;
            if (s+r==k || s==k)
            {
                flag = 1;
                break;
            }
        }
        

    }
    printf("%d", s/price);
}
