#include <iostream>
using namespace std;
int main() {
    int n, an=0, da=0;
    cin >> n;
    char a[n];
    for (int i = 0;i<n;i++)
    {
        cin >> a[i];
    }
    for (int i = 0;i<n;i++)
    {
        if (a[i]=='A')
        an +=1;
        else
        da +=1;
    }
    if (an>da)
    cout<<"Anton";
    else if (an == da)
    cout<<"Friendship";
    else
    cout<<"Danik";
}