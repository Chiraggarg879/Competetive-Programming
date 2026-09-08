#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nline '\n'

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(ll i = 0; i < n; i++) cin >> v[i];

    ll beg = -1, end = -1, score = -1;
    ll bsb = -1, bse = -1;

    for(ll i = 0; i < n; i++) {
        if(v[i] != 0) {
            beg = i;
            bsb = i;
            break;
        }
    }
    for(ll i = beg+1; i < n; i++) {
        if(v[i] != 0) {
            end = i;
            bse = i;
            break;
        }
    }

    if(beg == -1) {
        for(ll i : v) cout << i << " ";
        cout << endl;
        return;
    }

    if(end == -1) {
        v[beg] = 1;
        for(ll i : v) cout << i << " ";
        cout << endl;
        return;
    }

    score = -1;
    while(end < n) {
        if(v[end] == 0) {
            end++;
            continue;
        }
        if(score < end-beg+1) {
            score = end-beg+1;
            bsb = beg;
            bse = end;
        }
        if(v[end] == 1) beg = end;
        end++;
    }

    for(ll i = 0; i < n; i++) {
        if(v[i] == 0) continue;
        if(i > bsb && i < bse) v[i] = 0;
        else v[i] = 1;
    }

    v[bsb] = 1;
    v[bse] = 1;
    for(ll i : v) cout << i << " ";
    cout << endl;


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}