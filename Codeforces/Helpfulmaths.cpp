#include <iostream>
using namespace std;
int main () {
    string s;
    cin >> s;
    int c=1;
    char temp;
    while(s[c]!='\0')
    c++;
    for (int i = 0; i<c;i = i + 2)
    {
        for (int j = 0;j<c - i - 2; j = j+2)
        {
            if (s[j]>s[j+2])
            {
            temp = s[j];
            s[j] = s[j+2];
            s[j+2] = temp; 
            }
        }
    }
    cout<<s;
}