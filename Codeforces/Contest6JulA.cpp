#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0;i<t;i++)
    {   

        int k, x = 0, flag = 1;
        cin>>k;
        vector<int>a(k);
        for (int j = 0;j<k;j++)
        cin>>a[j];
        for (int j = 0;j<k;j++)
        {
        if (a[j]>2)
        {   
            flag = 0;
            break;
        }
        else if(a[j]==2)
        {
            x++;
            if (x==2)
            {   
                flag=0;
                break;
            }
        }
        }
        if (flag==0)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    
}