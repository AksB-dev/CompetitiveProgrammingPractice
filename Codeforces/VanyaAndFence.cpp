#include <iostream>
using namespace std;
int main() {
    int n, h, sum=0;
    cin >> n >> h;
    int a[n];
    for (int i = 0; i<n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i<n; i++) {
        if (a[i]<=h)
        sum += 1;
        else
        sum += 2;
    }
    cout<<sum;

}
