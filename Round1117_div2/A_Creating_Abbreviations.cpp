#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    ll n,m;
    cin>>n>>m;
    vector<string> v(n);
    vector<string> a(m);
    for(ll i=0;i<n;i++) cin>>v[i];
    for(ll i=0;i<m;i++) cin>>a[i];

    vector<ll> freq(26,0);
    for(ll i=0;i<n;i++){
        char ch = v[i][0];
        freq[ch-'a']++;
    }

    for(ll i=0;i<m;i++){
        for(int k=0;k<a[i].length();k++){
            int c = a[i][k] - 'A';
            if(freq[c] == 0){
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
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