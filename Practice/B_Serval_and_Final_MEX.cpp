#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    ll n;
    cin>>n;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++) cin>>arr[i];

    vector<pair<ll,ll>> res;
    ll count = 0;
    bool flag = false;
    for(ll j = n-1;j>0;j--){
        if(arr[j] == 0){
            if(j == 1){
                flag = true;
            }
            res.push_back({j,j+1});
            // cout<<j<<" "<<j+1<<endl;
            j--;
            count++;
        }
    }
    if(flag == false && arr[0] == 0){
        res.push_back({1,2});
        // cout<<1<<" "<<2<<endl;
        count++;
    }
    ll last = n - count;
    res.push_back({1,last});
    cout<<res.size()<<endl;
    for(auto x : res){
        cout<<x.first<<" "<<x.second<<endl;
    }
    
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