#include <iostream>
using namespace std;
int main () {
    string a = "abcdefghijklmnopqrstuvwxyz";
    int n,k;
    cin >> n >> k;
    char s[n];
    for (int i = 0;i<n;i++)
    s[i] = a[i%k];
    for (int i = 0;i<n;i++)
    cout<<s[i];
}