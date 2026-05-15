#include <iostream>
using namespace std;
int main (){
    long long n, moves=0;
    cin >> n;
    long long a[n];
    for (int i = 0;i<n;i++)
    cin >> a[i];
    for (int j = 1;j<n;j++)
    {
        if (a[j]<a[j-1])
        {
            while (a[j]<a[j-1])
            {
            a[j]++;
            moves++;
            }
        }
    }
    cout<<moves;
}