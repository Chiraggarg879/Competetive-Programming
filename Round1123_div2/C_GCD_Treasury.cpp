#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

ll gcd(ll a,ll b){
    if(b == 0) return a;
    else return gcd(b,a%b);
}

bool isPrime(ll n) {
    if (n < 2) return false;

    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}

void solve() {
    ll n,x;
    cin>>n>>x;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++) cin>>arr[i];
    ll res = 0;
    for (ll p = 2; p * p <= x; p++) {
        while (x % p == 0) {
            ll curr = 0;
            for(ll i=0;i<n;i++){
                if(gcd(p,arr[i]) > 1){
                    curr += arr[i];
                }
            }
            res = max(res,curr);
            x /= p;
        }
    }
    if(isPrime(x)){
         ll curr = 0;
            for(ll i=0;i<n;i++){
                if(gcd(x,arr[i]) > 1){
                    curr += arr[i];
                }
            }
            res = max(res,curr);
    }
    cout<<res<<endl;
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}