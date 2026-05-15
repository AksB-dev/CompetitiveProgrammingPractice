#include <iostream>
using namespace std;
int main (){
    string s;
    cin >> s;
    int ans = ((s[0]-'a') > (26 - (s[0]-'a'))) ? (26 - (s[0]-'a')) : (s[0]-'a');
    int c = 1;
    while (s[c] != '\0')
    c++;
    for (int i = 0; i<c-1;i++)
    {   

        if (abs(s[i]-s[i+1]) < (26-abs(s[i]-s[i+1])))
        {
            ans += abs(s[i]-s[i+1]);
        }
        else
        {
            ans += (26-abs(s[i]-s[i+1]));
        }

    }
    cout<<ans;
    
}