#include <iostream>
using namespace std;
int main (){
    int n;
    cin >> n;
    string a;
    for (int i = 0;i<n;i++)
    {
        cin >> a;
        int c = 1;
        while (a[c]!='\0')
        c++;
        if (c<=10)
        cout<<a<<endl;
        else
        cout<<a[0]<<c-2<<a[c-1]<<endl;
    }

}