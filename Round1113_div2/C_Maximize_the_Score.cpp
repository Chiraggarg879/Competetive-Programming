#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
     ll n;
     cin>>n;
     vector<ll> arr(2*n);
     for(ll i=0;i<2*n;i++){
        cin>>arr[i];
     }
     unordered_map<ll,ll> mp;//el,ind
     vector<ll> dp(2*n+1,0);

     for(ll i=0;i<2*n;i++){
        if(mp.find(arr[i]) == mp.end()){
            if(i == 0){
                dp[i] = 1;
            }else{
                dp[i] = 1 + dp[i-1];
            }
            
        }else{
            ll ind = mp[arr[i]];
            dp[i] = (1 + dp[i-1]);
            ll res2 = (i - ind +1)*(i-ind+1);
            if(ind > 0) res2 += dp[ind-1];
            dp[i] = max(dp[i],res2);
        }
        mp[arr[i]] = i;
     }
     cout<<dp[2*n-1]<<endl;
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