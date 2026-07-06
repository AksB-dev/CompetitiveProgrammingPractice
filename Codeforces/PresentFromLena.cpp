#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i, j,k, x; cin>>n;
    for (i = 0;i<n+1;i++)
    {
        for (int m = 0;m<n-i;m++)
        cout<<"  ";
        for (j = 0;j<=i;j++)
        {   
            if (i!=0)
            cout<<j<<" ";
            else
            cout<<0;
        }
        for (k = i-1;k>=0;k--)
        {   if (k!=0)
            cout<<k<<" ";
            else
            cout<<k;
        }
        cout<<"\n";
    }
    for (x=n-1;x>=0;x--)
    {
        for (int m = 0;m<n-x;m++)
        cout<<"  ";
        for (int y = 0;y<=x;y++)
        {   
            if (x!=0)
            cout<<y<<" ";
            else
            cout<<0;
        }
        for (int t = x - 1;t>=0;t--)
        {
            if(t!=0)
            cout<<t<<" ";
            else
            cout<<t;
        }
        cout<<"\n";
    }
}