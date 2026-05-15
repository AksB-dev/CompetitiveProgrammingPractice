#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i= 0;i<n;i++)
    cin >> a[i];
    int b[n];
    for (int i= 0;i<n;i++)
    {
        for (int j = 0;j<n;j++)
        {
            if ((i+1)==a[j])
            b[i] = j+1;
        }
    }
    for (int i= 0;i<n;i++)
    cout<<b[i]<<' ';
}