#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0;i<N;i++)
    cin >> a[i];
    for (int i = 0;i<N-1;i++)
    {
        for (int j = 0;j<N-i-1;j++)
        {
            if (a[j]>a[j+1])
            {
            a[j] = a[j] + a[j+1];
            a[j+1] = a[j] - a[j+1];
            a[j] = a[j]-a[j+1];
            }
        }
    }
}