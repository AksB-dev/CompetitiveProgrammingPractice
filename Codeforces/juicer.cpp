#include <iostream>
using namespace std;
int main () {
    int n, b, d, o=0;
    cin >> n >> b >> d;
    int a[n];
    for (int i = 0;i<n;i++)
    cin >> a[i];
    int w = 0;
    for (int i = 0;i<n;i++)
    {
        if (a[i]<=b)
        o += a[i];
        if (o > d)
        {
        w++;
        o = 0;
        }
    }
    cout<<w;
}