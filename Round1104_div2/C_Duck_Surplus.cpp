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
     for(int i=0;i<n;i++) cin>>a[i];

     ll res = a[0];
     for(int i=1;i<n;i++){
        if(a[i] < a[i-1]){
            res = max(res,a[i] + a[i-1]);
            a[i] = a[i-1] + a[i];
        }
        res = max(res,a[i]);
        // cout<<res<<" ";
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