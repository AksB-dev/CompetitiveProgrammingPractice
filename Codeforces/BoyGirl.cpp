#include <iostream>
using namespace std;
int main() {
    char a[100];
    cin >> a;
    int d = 1;
    while (a[d]!='\0')
    d++;
    int j = d;
    for (int i = 0;i<d;i++)
    {
        for (int k = i + 1;k<d;k++)
        {
            if (a[i]==a[k])
            {
                j--;
                break;
            }
        }
    }
    if (j%2==0)
    cout<<"CHAT WITH HER!";
    else
    cout<<"IGNORE HIM!";
}