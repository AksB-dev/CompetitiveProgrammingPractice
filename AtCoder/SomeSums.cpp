#include <bits/stdc++.h>
using namespace std;
int digitsum(int x) {
    int digitsum1=0;
    while (x>0)
    {
        digitsum1 += x%10;
        x = x/10;
    }
    return digitsum1;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a,b, sum=0;
    cin >> n>>a>>b;
    for (int i=1;i<=n;i++)
    {
        if (digitsum(i)>=a && digitsum(i)<=b)
        {
            sum +=  i;
        }
    }
    cout<<sum;
}