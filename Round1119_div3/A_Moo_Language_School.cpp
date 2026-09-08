#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int res = 0;
    for(ll i=0;i<n;i+=k){
        int count = 0;
        for(ll j=i;j<i+k;j++){
            if(s[j] == '0') count++;
        }
        if(count == 0) res++;
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