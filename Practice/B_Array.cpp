#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    for(int i=0;i<n;i++){
        int less = 0,great = 0;
        for(int j = i+1;j<n;j++){
            if(v[i] > v[j]) great++;
            else if(v[i]<v[j])less++;
        }
        cout<<max(less,great)<<" ";
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