//By Adrian Ruiz

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

#define fori(i, a, b) for (int i=(a); i<(b); i++)
#define forn(a,x) for (auto& a : x)
#define fil(v) forn(a,v) cin>>a

#define len(x) (int)(x).size()
#define pb push_back
#define ins insert
#define f first
#define s second
#define mp make_pair
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

template<class T> bool ckmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
template<class T> bool ckmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }

#define fast_io ios::sync_with_stdio(0); cin.tie(0); cin.exceptions(cin.failbit);

const char nl = '\n';

void solve() {

}

int main() {
    fast_io;

    int T = 1;
    cin >> T;
    while(T--) {
        solve();
    }

    return 0;
}
