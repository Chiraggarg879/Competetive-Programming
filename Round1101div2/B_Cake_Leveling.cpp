#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
     // Your solution here
}

int main() {
    fastio;
    ll t = 1;
    cin >> t;
    while (t--) {
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        vector<ll> res(n,0);
        res[0] = a[0];
        ll prevmin = a[0];
        ll cakeLeft = 0;
        ll prefsum = a[0];
        for(ll i=1;i<n;i++){
            prefsum += a[i];
            res[i] = min(prevmin,prefsum/(i+1));
            prevmin = min(prevmin,res[i]);
        }
        
        for(ll i=0;i<n;i++) cout<<res[i]<<" ";
        cout<<endl;

    }
    return 0;
}