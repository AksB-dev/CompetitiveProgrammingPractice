#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x = n;
    int a = 0;
    while (x!=1)
    {
        x = x/2;
        a = a+x;
    }
    cout<<a;
}
