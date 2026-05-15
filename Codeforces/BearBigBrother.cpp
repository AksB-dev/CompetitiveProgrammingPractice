#include <iostream>
using namespace std;
int main() {
    int a, b, i;
    cin >> a >>b;
    for (i = 0; a<=b;i++)
    {
        a = 3*a;
        b = 2*b;
    }
    cout<<i;
}