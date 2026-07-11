#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
ll mod = 998244353;
ll power(ll a,ll b){
    if(b == 0) return 1;


    if(b & 1){
        ll res = a %mod;
        res = (res * power(a,b-1)) %mod;
        return res;
    }else{
        ll res = power(a,b/2)%mod;
        return (res*res)%mod;
    }
}
void solve() {
     // Your solution here
     ll n,m,r,c;
     cin>>n>>m>>r>>c;
     ll exp = (r-1)*m + (c-1)*n - (r-1)*(c-1);

     cout<<power(2,exp)<<'\n';
}

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}