//By Adrian Ruiz

#include <bits/stdc++.h>
using namespace std;

const char nl = '\n';

int lcs(string &x, string &y){
    int n = (int)x.size(), m = (int)y.size();
    vector<vector<int>> dp(n+1, vector<int>(m+1, 0)); //Matriz de (n+1)*(m+1) llena de 0
    
    for(int i=1; i<=n; i++){
	for(int j=1; j<=m; j++){
	    if(x[i-1] == y[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
	    else dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
	}
    }
    return dp[n][m];
}


int main() {
    string x,y;
    cout<<"Ingrese la primera subsecuencia: ";cin>>x;
    cout<<"Ingrese la segunda subscuencia: ";cin>>y; 

    cout<<lcs(x,y)<<endl;
    
    return 0;
}
