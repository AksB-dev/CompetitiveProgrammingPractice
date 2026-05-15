#include<iostream>
using namespace std;
int main() {
    int n, s= 0, d=0;
    cin >> n;
    int a[n];
    for (int i = 0; i<n;i++)
    cin >> a[i];
    int right = n-1, left = 0;
    for (int i = 0; i<n;i++)
    {   
        if (i%2==0)
        {
            if (a[right] > a[left])
            {
                s+=a[right];
                right = right -1;
            }
            else
            {
                s+=a[left];
                left++;
            }
        }
        else
        {
            if (a[right] > a[left])
            {
                d+=a[right];
                right = right - 1;
            }
            else
            {
                d+=a[left];
                left++;
            }
        }
    }
    cout<<s<<' '<<d;
}