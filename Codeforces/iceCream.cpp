#include <iostream>
using namespace std;
int main() {
    int n, c=0;
    long long x, ice;
    cin >> n >>x;
    char op;
    for (int i = 0;i<n;i++)
    {
        cin >> op >> ice;
        if (op=='+')
        x+=ice;
        else
        {
            if (x>=ice)
            x-=ice;
            else
            c++;
        }
    }
    cout<<x<<' '<<c;

}