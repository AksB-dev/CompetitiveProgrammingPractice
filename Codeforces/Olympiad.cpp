#include <iostream>
using namespace std;
int main () {
    int n, program=0, math=0, pe=0;
    cin >> n;
    int a[n];
    for (int i = 0;i<n;i++)
    {
    cin >> a[i];
    if (a[i]==1)
    program++;
    else if (a[i]==2)
    math++;
    else if (a[i]==3)
    pe++;
    }
    int w = ((program>=math)? ((pe >= math)?math:pe):((pe>=program)?program:pe));
    cout<<w<<endl;
    if (w>0){
    int p[program], m[math], pee[pe];
    for (int i = 0;i<n;i++)
    {
    if (a[i]==1)
    {
        for (int j = 0;j<program;j++)
        p[j] = i+1;
    }
    else if (a[i]==2)
    {
        for (int j = 0;j<math;j++)
        m[j] = i+1;
    }
    else if (a[i]==3)
    {
        for (int j = 0;j<pe;j++)
        pee[j] = i+1;
    }
    }
    for (int i = 0;i<w;i++)
    {
        cout<<p[i]<<' '<<m[i]<<' '<<pee[i]<<endl;
    }
    }
}