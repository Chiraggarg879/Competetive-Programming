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

    vector<ll> freq(101,0);
    for(ll i=0;i<n;i++) freq[arr[i]]++;

    ll i = 100;
    while(i>0){
        if(freq[i] <= 0){
            i--;
            continue;
        }
        for(ll j = i;j>0;j--){
            if(freq[j] > 0){
                cout<<j<<" ";
                freq[j]--;
            }
        }
        if(freq[i] == 0) i--;
    }
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