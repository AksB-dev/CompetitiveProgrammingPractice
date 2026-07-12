#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin>>N;
    vector<int> a(N-1);
    for (int i = 0;i<N-1;i++)
    cin >> a[i];
    int parent  = a[N-2];
    int ans = 1;
    while (parent!=1)
    {
        parent = a[parent-2];
        ans++;
    }
    cout<<ans;
}