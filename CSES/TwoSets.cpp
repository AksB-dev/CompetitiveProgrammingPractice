#include <iostream>
using namespace std;
int main (){
    long long n;
    cin>>n;
    long long sum = (n*(n+1))/2;
    if (sum%2==0)
    {
        cout<<"YES"<<endl;
        if (n%4==0)
        {
            cout<<n/2<<endl;
            for (long long i = 1;i<=(n/4);i++)
            cout<<i<<' '<<n-i+1<<' ';
            cout<<endl;
            cout<<n/2<<endl;
            for (long long i = (n/4)+1;i<=(n/2);i++)
            cout<<i<<' '<<n-i+1<<' ';
        }
        else
        {
            cout<<(n+1)/2<<endl;
            cout<<"1 2 ";
            for (long long i = 4;i<=(4+(n-3)/4);i++)
            cout<<i<<' '<<(n-3)-i+1<<' ';
            cout<<"\n"<<(n-1)/2<<endl;
            cout<<"3 ";
            for (long long i = ((n-3)/4)+1;i<=((n-3)/2);i++)
            cout<<i<<' '<<(n-3)-i+1<<' ';
        }

    }
    else
    cout<<"NO";
}