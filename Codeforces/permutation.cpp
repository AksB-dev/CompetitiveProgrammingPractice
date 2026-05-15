#include <iostream>
using namespace std;
int main (){
    int t;
    cin >> t;
    for (int i = 0; i<t;i++)
    {
        int n, temp;
        cin >> n;
        int a[n];
        for (int j = 0; j<n;j++)
        cin >> a[j];
        for (int j = 0;j<n;j++)
        {   
            int placeholder = a[j];
            for (int k = j+1;k<n;k++)
            {
                if (a[k]>a[j])
                {
                temp = a[k];
                a[k] = a[j];
                a[j] = temp;
                break;
                }
            if (a[j] == placeholder)
    }
}

