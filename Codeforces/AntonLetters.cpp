#include <iostream>
using namespace std;
int main (){
    string s;
    getline(cin, s);
    int c = 0;
    int common = 0;
    for (int i = 0; i<s.size();i++)
    {
        if (s[i]>='a' && s[i]<='z')
        c++;
    }
    for (int i = 1; i<s.size()-1;i = i+3)
    {   
        for (int j = i+3;j<s.size()-1; j = j+3)
        {
            if (s[i] == s[j])
            {
                common++;
                break;
            }
        }
    }
    cout<<c - common;
}