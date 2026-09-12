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

    vector<ll> freq(n,0);

    for(ll i=0;i<n;i++){
        ll div = i+1;
        if((arr[i]*div) < n) freq[arr[i]*div]++;
        if((arr[i]*div + div) < n){
            freq[(arr[i]*div) + div]--;
        }
    }
    for(int i=1;i<n;i++){
        freq[i] = freq[i]+freq[i-1];
    }
    vector<int> res;
    for(int i=0;i<n;i++){
        if(freq[i] == 0) res.push_back(i);
    }
    cout<<res.size()<<endl;
    for(int i=0;i<res.size();i++) cout<<res[i]<<" ";
    cout<<endl;
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