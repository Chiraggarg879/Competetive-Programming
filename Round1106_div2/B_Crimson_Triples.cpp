#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
     ll n;
     cin>>n;
     long long res = 0;
     for(ll i=1;i<=n;i++){
        ll k = n/i;
        res += (k*k);
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