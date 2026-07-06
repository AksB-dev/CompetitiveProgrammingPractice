#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    vector <long long> a(N);
    long long total = 1;
    long long num = 1000000000000000000;
    for (int i = 0;i<N;i++)
    {
    cin >> a[i];
    if (a[i]==0)
        {
        cout<<0;
        return 0;
        }
    }
    for (int i = 0;i<N;i++)
    {
        if (total>num/a[i])
        {
            cout<<-1;
            return 0;
        }
    total = total*a[i];
    }
    cout<<total;
    return 0;
}
  