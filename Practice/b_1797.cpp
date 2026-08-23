#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    ll n,k;
    cin>>n>>k;
    vector<vector<ll>> arr(n,vector<ll>(n));
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    ll low = 0, high = n-1;
    ll count = 0;
    while(low < high){
        for(ll i=0;i<n;i++){
            if(arr[low][i] != arr[high][i]) count++;
        }
        low++;
        high--;
    }
    if(count < k || (count-k) & 1 ){
        cout<<"NO"<<endl;
    }else cout<<"YES"<<endl;
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