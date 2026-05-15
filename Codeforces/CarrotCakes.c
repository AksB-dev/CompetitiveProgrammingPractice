#include <stdio.h>
int main ()
{
    int n, t, k, d, i, p; 
    int cakes=0, time=0;
    scanf("%d %d %d %d", &n, &t, &k, &d);
    for (int i = 1; cakes <n;i++)
    {   
        time = t*i;
        cakes = k*i;
    }
    int cakes1 = 0;
    //i=0;
    //while (cakes1<n)
    for (i = 1; cakes1 <n;i++)
    {
        //i++;
        if (i>=d)
        {
            if ((i-d)%t==0 && i%t==0)
            cakes1 = cakes1+(2*k);
            else if ((i-d)%t==0 || i%t==0)
            cakes1 = cakes1 +k;
        }
        else if (i<d)
        {
        if (i%t==0)
        cakes1 = cakes1+k;
        }
        
    }
    printf("%d %d", time, i);
}