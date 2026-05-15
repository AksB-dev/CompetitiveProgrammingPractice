#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a;
    int p = 0, c= 0, u= 0;
    for (int i = 0;i<n;i++) {
        cin >> a;
        if (a==-1)
        {
            if (p == 0)
            u++;
            else
            p--;
        }
        else
        p = p + a;
    }
    cout<<u;
}
