#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 0;i<n;i++)
    {
        int t;
        cin >> t;
        int a[t];
        int max = 0;
        for (int j = 0;j<t;j++)
        cin >> a[j];
        for (int j = 0;j<t;j++)
        {
            if (a[j]>max)
            max = a[j];  
        }
        max = max *t;
        cout<<max<<endl;
    }
}