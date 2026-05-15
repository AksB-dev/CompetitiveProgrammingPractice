#include <iostream>
using namespace std;
int main (){
    string s, t;
    cin >> s >>t;
    int c = 0;
    for (int i = 0; t[i]!='\0';i++)
    {
        if (s[c]==t[i])
        c++;
    }
    cout<<c+1;
}