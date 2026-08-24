#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    ll n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    if(n == 1){
        cout<<(a[0] != b[0])<<endl;
        return;
    }
    vector<ll> dp(n,LLONG_MAX);
    dp[0] = (a[0] != b[0]);
    dp[1] = (a[0] != a[0+1]) + (b[0] != b[0+1]);
    for(ll i=1;i<n;i++){
        dp[i] = min(dp[i],dp[i-1] + (a[i] != b[i]));
        if(i+1 < n){
            dp[i+1] = min(dp[i+1],dp[i-1] + (a[i] != a[i+1]) + (b[i] != b[i+1]));
        }
    }
    cout<<dp[n-1]<<endl;
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