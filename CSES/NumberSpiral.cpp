#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    long long a[n][2];
    for (int i = 0;i<n;i++)
    {
        for (int j=0;j<2;j++)
        cin>>a[i][j];       
    }
    for (int i = 0;i<n;i++)
    {
            if (a[i][0]>a[i][1])
            {
            if (a[i][0]%2==0)
            cout<<((a[i][0]*a[i][0])-(a[i][0]-1)+(a[i][0]-a[i][1]))<<endl;
            else
            cout<<((a[i][0]*a[i][0])-(a[i][0]-1)-(a[i][0]-a[i][1]))<<endl;
            }
            else
            {
            if (a[i][1]%2==0)
            cout<<((a[i][1]*a[i][1])-(a[i][1]-1)-(a[i][1]-a[i][0]))<<endl;
            else
            cout<<((a[i][1]*a[i][1])-(a[i][1]-1)+(a[i][1]-a[i][0]))<<endl;
            }
    }
 
}