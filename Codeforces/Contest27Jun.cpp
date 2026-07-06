#include <bits/stdc++.h>
using namespace std;
int popcont(int x)
{
    int ans=0;
    while (x>0)
    {
        if (x%2==1)
        ans++;
        x=x/2;
    }
    return ans;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, k;
    for (int i = 0;i<t;i++)
    {
        cin >> n>>k;
        if (n<=k)
        cout<<n;
        else
        {
            
        }
    }
}
