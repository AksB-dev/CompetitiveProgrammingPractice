#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,i=0;
    cin >> a>>b;
    int x = 1;
    while (x<b)
    {
        x = x +(a-1);
        i++;
    }
    cout<<i;

}