#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    ll n,k; cin>>n>>k;
    vector<ll> arr(n); for(ll i=0;i<n;i++) cin>>arr[i];
    ll idx; cin>>idx;
    idx--;
    ll count=0;
    ll spl_idx = 0;
    for(ll i=0;i<n;i++){ 
        if(i == 0 || arr[i] != arr[i-1]) count++;
        if(i == idx){
            spl_idx = count;
        }
    }
    if(count==1){
        cout<<0<<endl;
        return;
    }
    ll first_count = spl_idx-1;
    ll second_count = count-spl_idx;
    ll mx = max(first_count,second_count);
    
    if(mx & 1) mx++;
    cout<<mx<<endl;
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