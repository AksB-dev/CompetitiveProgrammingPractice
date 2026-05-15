#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for (int i = 0;i<t;i++)
    {   
        int ans = 1;
        int n;
        cin>>n;
        string s;
        cin >> s;
        for (int j = 0;j<n;j++)
        {
            if (s[j]=='R')
            ans++;
            else
            break;
        }
        cout<<ans<<endl;
    }
}