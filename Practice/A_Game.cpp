#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    ll k, a1, b1, a2, b2;
    cin >> k;
    cin >> a1 >> b1;
    cin >> a2 >> b2;

    int alice =0;
    if(a1 > b1) alice++;
    if(a2 > b2) alice++;

    if(a1+a2 > b1+b2 + k){
        cout<<"NO"<<endl;
    }else if(a1+a2 == b1+b2 + k){
        if(alice == 2) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }else cout<<"YES"<<endl;
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