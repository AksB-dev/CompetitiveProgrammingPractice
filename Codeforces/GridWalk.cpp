#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int H, W, Si, Sj;
    string instructions;
    cin >> H >> W >> Si >> Sj;
    Si = Si-1; Sj = Sj-1;
    vector <vector<char>> matrix(H, vector<char>(W));
    for (int i = 0;i<H;i++)
    {
        for (int j = 0;j<W;j++)
        cin >> matrix[i][j];
    }
    cin >> instructions;
    int len = instructions.length();
    for (int i =0;i<len;i++)
    {
        if (instructions[i]=='L')
        {
            if (Sj-1>=0. && matrix[Si][Sj-1]!='#')
            Sj = Sj-1;
        }
        else if (instructions[i]=='R')
        {
            if ( Sj+1<H && matrix[Si][Sj+1]!='#')
            Sj = Sj+1;
        }
        else if (instructions[i]=='U')
        {
            if (Si-1>=0&& matrix[Si-1][Sj]!='#')
            Si = Si-1;
        }
        else if (instructions[i]=='D')
        {
            if (Si+1<W && matrix[Si+1][Sj]!='#')
            Si = Si+1;
        }
        
    }
    cout<<Si+1<<" "<<Sj+1;
}