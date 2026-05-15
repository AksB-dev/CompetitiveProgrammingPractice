#include <iostream>
using namespace std;
int main() {
    int y, w,a;
    cin >> y>>w;
    if (y>=w)
    a = 7-y;
    else
    a= 7-w;
    if (a== 1||a==5)
    cout<<a<<'/'<<6;
    else if (a==2||a==4)
    cout<<a/2<<'/'<<3;
    else if (a==3)
    cout<<"1/2";
    else
    cout<<"1/1";

    
}