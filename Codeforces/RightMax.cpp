#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >>t;
    for (int i = 0;i<t;i++)
    {   
        int ops=0;
        int n;
        cin >> n;
        int a[n];
        for (int j = 0; j<n;j++)
        cin >> a[j];
        while (true)
        {
            int max = -1, index = -1;
            for (int j = 0;j<n;j++)
            {
                if (a[j]>=max)
                {
                max = a[j];
                index = j;
                }
               
                ops++;
            }
            if (index == 0)
            break;
            n = index;
        } 
        cout<<ops<<endl;

    }
}