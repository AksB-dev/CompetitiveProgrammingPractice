#include <iostream>
using namespace std;
int main (){
    long long n, sum = 0;
    cin >> n;
    int a[n];
    for (int i =0;i<n-1;i++)
    {
    cin >> a[i];
    sum+=a[i];
    }

    cout<<((n*(n+1))/2)-sum;
}