#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++) cin>>a[i];

    ll res = 0;
    ll reseven = 0;
    ll reseven2 = 0;
    for(ll i=0;i<n;i++){
        if(a[i] & 1) res++;
        else{
            if((a[i]/2) & 1){
                reseven++;
            }else reseven2++;
        }
        
    }

    res = max(res,max(reseven,reseven2));

    cout<<res<<endl;
    
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