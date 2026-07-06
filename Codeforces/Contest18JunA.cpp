#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, total;
    cin>>t;
    for (int i = 0;i<t;i++)
    {
        cin >> n;
        vector<int> a(n);
        for (int j = 0;j<n;j++)
        cin >> a[j];
        for (int j = 0;j<n-1;j++)
        {
            if (a[j+1]>a[j])
            a[j+1]=a[j];
        }
        total = 0;
        for (int j = 0;j<n;j++)
        total +=a[j];
        cout<<total<<"\n";
    }

}