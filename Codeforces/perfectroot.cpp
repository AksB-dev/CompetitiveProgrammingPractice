#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i<n;i++)
    cin >> a[i];
    for (int i = 0;i<n;i++)
    {
        for (int j = 1; j<a[i]+1;j++)
        cout<<j<<" ";
        cout<<endl;
    }

}
