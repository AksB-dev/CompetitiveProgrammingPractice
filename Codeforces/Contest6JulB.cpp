#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0;i<t;i++)
    {
        int n, One=0, Three=0;
        cin >> n;
        vector<int> a(n);
        for (int j = 0;j<n;j++)
        {
        cin >> a[j];
        if (a[j]==1)
        One++;
        else if (a[j]==3)
        Three++;
        }
        if (Three==0||((n==3)&&(Three+One==3)))
        cout <<"NO\n";
        else  if ((2*One)>=(2*Three))
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}