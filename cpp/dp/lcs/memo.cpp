//By Adrian Ruiz

#include <bits/stdc++.h>
using namespace std;

const char nl = '\n';

int lcs_aux(int i, int j, string &x, string &y, vector<vector<int>> &memo){
    if(memo[i][j] != -1) return memo[i][j];
    if(i==0 or j==0) return 0;
    if(x[i-1] == y[j-1]) return memo[i][j] = lcs_aux(i-1,j-1,x,y,memo) + 1; 
    else return memo[i][j] = max(lcs_aux(i,j-1,x,y,memo) , lcs_aux(i-1,j,x,y,memo));
}


int lcs(string &x, string &y){
    int n = (int)x.size(), m = (int)y.size();
    vector<vector<int>> memo(n+1, vector<int>(m+1, -1)); //Matriz de (n+1)*(m+1) llena de -1
    return lcs_aux(n,m,x,y,memo);
}


int main() {
    string x,y;
    cout<<"Ingrese la primera subsecuencia: ";cin>>x;
    cout<<"Ingrese la segunda subscuencia: ";cin>>y; 

    cout<<lcs(x,y)<<endl;
    
    return 0;
}
