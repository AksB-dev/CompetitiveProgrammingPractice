#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, Y, flag=0,x,y,z;
    cin >> n>>Y;
    for (z = 0;z<=n;z++)
    {
        for (y = 0;y<=n-z;y++)
        {
            for (x= 0;x<=n-z-y;x++)
            {
                if ((x+y+z==n) && ((10000*x)+(5000*y)+(1000*z)==Y))
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            break;
        }
        if (flag==1)
        break;
    }
    if (flag==1)
    cout<<x<<" "<<y<<" "<<z;
    else
    cout<<-1<<" "<<-1<<' '<<-1;
}