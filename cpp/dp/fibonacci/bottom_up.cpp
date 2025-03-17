//By Adrian Ruiz

#include <bits/stdc++.h>
using namespace std;

const char nl = '\n';

int memo[1000];

int fib(int n){
    memo[0]=0;
    memo[1]=1;
    for(int i=2;i<=n;i++){
	memo[i]=memo[i-1]+memo[i-2];
    }
    return memo[n];
}

int main() {
    int n;cin>>n;
    fill(begin(memo),end(memo), -1);
    cout<<fib(n)<<nl;
    return 0;
}
