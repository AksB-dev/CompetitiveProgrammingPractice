#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i =0;i<n;i++)
    a[i] = i+1;
    int x = 1;
    for(int i =0;i<a.size();i++)
    {
        cout<<a[x]<<"\n";
        a.erase(a.begin()+x);
        x+=2;
    }

}