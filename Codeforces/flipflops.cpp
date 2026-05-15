#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0;i<t;i++)
    {
        int n, c, k, sum = 0;
        cin >> n>>c>>k;
        int a[n];
        for (int j = 0;j<n;j++)
        cin >> a[j];
        for (int j = 0;j<n;j++)
        {
            if (a[j]<=c)
            {   
                c = c + a[j];
                sum = sum + a[j];
            }
        }
        if (sum>=k)
        cout<<c+k<<"\n";
        else
        cout<<c + k<<"\n";
    }
}