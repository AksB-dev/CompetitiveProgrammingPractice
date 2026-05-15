#include <iostream>
using namespace std;
int main () {
    int a[4], c=0;
    for (int i = 0;i<4;i++)
    cin>>a[i];
    string s;
    cin >> s;
    for (int i = 0;s[i]!='\0';i++)
    {
        c += a[(s[i]-'0')-1];
    }


    /*int n;
    cin >> n;
    for (int i = 0;i<)
    while (n!=0)
    {
        c+=a[n%10-1];
        n = n/10;
    }*/
    cout<<c;
}