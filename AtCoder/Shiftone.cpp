#include <bits/stdc++.h>
using namespace std;
int ones(int x){
    int ans=0;
    while (x%2==0)
    {
        x=x/2;
        ans++;
    }
    return ans;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, ans=1000000;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i<N;i++)
    {  
        cin >> a[i];
        if (ones(a[i])<ans)
        ans=ones(a[i]);
    }
    cout<<ans;
}