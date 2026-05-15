#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, max=0, min=0, sum = 0;
    cin >> n;
    int a[n];
    for (int i= 0;i<n;i++)
    {
    cin >> a[i];
    sum += a[i];
    }
    float avg = sum/n;
    for (int i= 0;i<n;i++)
    {
        if (a[i]>max)
        max = a[i];
        if (a[i]<min)
        min = a[i];
    }
    cout<<min<<' '<<max<<endl;
    for (int i= 0;i<n;i++)
    {

        if (a[i]>avg)
        cout<<abs(max-a[i])<<' '<<abs(a[i] - min)<<endl;
        else
        cout<<abs(a[i]-min)<<' '<<abs(max - a[i])<<endl;
    }
    /
}

