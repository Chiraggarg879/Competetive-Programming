#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
     ll n,m;
     cin>>n>>m;
     vector<ll> a(n),b(m);
     for(ll i=0;i<n;i++) cin>>a[i];
     for(ll i=0;i<m;i++) cin>>b[i];

     ll s1 = 0,s2 = 0;
     for(ll i=0;i<n-1;i++){
        s1 += a[i] - a[i+1] + 1;
     }
     s1 += a[n-1];
     for(ll i=0;i<m-1;i++){
        s2 += b[i] - b[i+1] + 1;
     }
     s2 += b[m-1];

     if(s1 < s2){
        cout<<2;
     }else {
        cout<<1;
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