#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, ans = 1;
    cin>>n;
    for (int i = 0;i<n;i++)
    ans = (ans*2)%1000000007;
    cout<<ans;
} 