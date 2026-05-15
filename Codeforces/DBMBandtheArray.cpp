#include <iostream>
using namespace std;
int main (){
    int p;
    cin >> p;
    for (int i = 0; i<p;i++)
    {
        int n, s, x, sum = 0;
        cin >> n >> s >> x;
        int a[n];
        for (int j = 0;j<n;j++)
        {
            cin >> a[j];
            sum += a[j];
        }
        if (sum == s)
        {
            cout<<"YES"<<endl;
            continue;
        }
        for (int k = 0; k<100;k++)
        {
            sum += x;
            if (sum==s)
            {
                cout<<"YES"<<endl;
                break;
            }
            else if (sum > s)
            {
                cout<<"NO"<<endl;
                break;
            }
        }
    }
}