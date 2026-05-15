#include <iostream>
using namespace std;
int main() {
    int n, p=0;
    cin >>n;
    int a[n][3];
    for (int i = 0;i<n;i++)
    {
        for (int j = 0; j<3;j++)
        cin >> a[i][j];
    }
    for (int i = 0;i<n;i++)
    {   
        int s = 0;
        for (int j = 0; j<3;j++)
        {
            if (a[i][j]==1)
            s+=1;
        }
        if (s>=2)
        p+=1;
    }
    cout <<p;

}