#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    int N,Q;
    cin >> N>>Q;
    cin >> s;
    vector<int>a;
    for (int i = 0;i<N-1;i++)
    {
        if (s[i]==s[i+1])
        a.push_back(i);
    }
    for (int i = 0;i<Q;i++)
    {
        int l,r,ans=0;
        cin >> l>>r;
        for (int j = 0;j<a.size();j++)
        {
            if ((a[j]>=l-1)&&(a[j]<=r-2))
            ans++;
        }
        cout<<ans<<"\n";
}
}