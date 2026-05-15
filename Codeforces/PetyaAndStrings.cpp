#include <iostream>
using namespace std;
int main() {
    char a[2][101];
    int flag = 0;
    for (int i = 0; i<2;i++)
    cin >> a[i];
    for (int i = 0; i<2;i++)
    {
        for (int j = 0;j<101;j++)
        {
            if (a[i][j] >= 65 && a[i][j] <= 90 )
            a[i][j] += 32;
        }
    }
    for (int i = 0; i<101;i++)
    {
       if (a[0][i]>a[1][i])
       {
       flag = 1;
       break;
       }
       else if (a[0][i]<a[1][i])
       {
        flag = -1;
        break;
       }
       if (a[0][i]=='\0')
       break;
    }
    cout<<flag;

}