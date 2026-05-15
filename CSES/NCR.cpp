#include <iostream>
using namespace std;
/*int NCR (){
    long long N, R;
    cin >> N >> R;
    for ()
}*/
/*int fact(int x){
    if (x==1)
    return 1;
    else
    return x*fact(x-1);
}*/
int fact (int x){
    int ans=1;
    for (int i = 1;i<=x;i++)
    ans = ans*i;
    return ans;
}
int main (){
    int n;
    cin >> n;
    cout<<fact(n);
}