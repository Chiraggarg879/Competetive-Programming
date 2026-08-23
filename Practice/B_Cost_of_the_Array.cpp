#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n);
    for(ll i=0;i<n;i++) cin>>a[i];

    ll od = (n+1)/2;
    ll ev = n/2;
    if(k <= od){
        cout<<1<<endl;
        return;
    }

    
    if(n-k+1 >=2){
        if(a[1] == 1) cout<<2<<endl;
        else cout<<1<<endl;
        return;
    }
    ll res = 1;
    for(ll i=1;i<n;i+=2){
        if(a[i] == res){
            res++;
        }else{
            cout<<res<<endl;
            return;
        }
    }
    cout<<res<<endl;
    return;
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