#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, D, weight;
    vector<vector<int>> matrix (N, vector<int>(2));
    for (int i = 0;i<N;i++)
    {
        cin>>matrix[i][0];
        cin >> matrix[i][1];
    }

    for (int j = 1;j<=D;j++)
    {   
        weight = 1;
        for (int i = 0;i<N;i++)
        {
        matrix[i][1]++;
        weight = matrix[i][0]*matrix[i][1];
        if 
        }

    }

}