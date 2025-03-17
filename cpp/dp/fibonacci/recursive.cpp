//By Adrian Ruiz

#include <bits/stdc++.h>
using namespace std;

const char nl = '\n';

int fib(int n){
    if(n<=1) return n;
    return fib(n-1) + fib(n-2);
}

int main() {
    int n;cin>>n;
    cout<<fib(n)<<nl;
    return 0;
}
