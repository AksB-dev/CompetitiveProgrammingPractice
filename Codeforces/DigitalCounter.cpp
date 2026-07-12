#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> a ={2, 7, 2, 3, 3,  4, 2, 5, 1, 2};
    int n;
    cin >>n;
    cout<<a[n/10]*a[n%10];
}a