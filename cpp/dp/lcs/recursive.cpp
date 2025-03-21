//By Adrian Ruiz

#include <bits/stdc++.h>
using namespace std;

const char nl = '\n';

int lcs_aux(int i, int j, string &x, string &y){
    if(i==0 or j==0) return 0;
    else if(x[i-1] == x[j-1]) return lcs_aux(i-1,j-1,x,y) + 1; 
    else return max(lcs_aux(i,j-1,x,y) , lcs_aux(i-1,j,x,y));
}


int lcs(string &x, string &y){
    int n = (int)x.size(), m = (int)y.size();
    return lcs_aux(n,m,x,y);
}


int main() {
    string x,y;
    cout<<"Ingrese la primera subsecuencia: ";cin>>x;
    cout<<"Ingrese la segunda subscuencia: ";cin>>y; 

    cout<<lcs(x,y)<<endl;
    
    return 0;
}
