#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    ll n,c;
    cin>>n>>c;
    vector<ll> a(n);
    for(ll i=0;i<n;i++) cin>>a[i];

    vector<ll> el;
    ll tot = 0,small = 0;
    for(ll i=0;i<n;i++){
        if(a[i] < c) {
            el.push_back(a[i]);
            small+= a[i];
        }

        tot += a[i];
    }
    ll s = el.size();
    ll g = n - s;
    ll diff = (g-s);
    ll res = (tot - small) - (g*c);
    if(diff<0){
        sort(el.begin(),el.end());
        diff = abs(diff);
        diff = (1+diff)/2;
        ll j = el.size()-1;
        while(diff--){
            res += el[j--] - c;
        }
    }
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