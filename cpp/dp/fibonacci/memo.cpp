//By Adrian Ruiz

#include <bits/stdc++.h>
using namespace std;

const char nl = '\n';

int memo[1000];

int fib(int n){
    if(memo[n] != -1){
	return memo[n];
    }
	
    if(n <= 1) memo[n] = n;
    else memo[n] = fib(n-1) + fib(n-2);	
    return memo[n];
}

int main() {
    int n;cin>>n;
    fill(begin(memo),end(memo),-1);
    cout<<fib(n)<<nl;
    return 0;
}
