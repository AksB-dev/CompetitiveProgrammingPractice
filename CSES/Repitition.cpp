#include <iostream>
using namespace std;
int main (){
    string s;
    int max, reps=1;
    cin >> s;
    for (int i = 0;s[i]!='\0';i++)
    {   
        
        if (s[i]==s[i+1])
            reps++;
        else
        {
        reps = 1;
        }
        if (reps>max)
        max = reps; 
    }
    cout<<max;
}