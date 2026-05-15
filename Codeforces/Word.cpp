#include <iostream>
using namespace std;
int main() {
    char a[101];
    cin>> a;
    int u = 0, l=0;
    for (int i = 0; a[i]!='\0';i++)
    {
        if (a[i]>=65 && a[i] <= 90)
        u++;
        else if (a[i]>=97 && a[i] <= 122)
        l++;
    }
    if (u>l)
    {
        for (int i = 0; a[i]!='\0';i++)
        {
            if (a[i]>=97 && a[i] <= 122)
            a[i] -= 32;
        }
    }
    else
    {
        for (int i = 0; a[i]!='\0';i++)
        {
            if (a[i]>=65 && a[i] <= 90)
            a[i] += 32;
        }
    }
    cout<<a;
}