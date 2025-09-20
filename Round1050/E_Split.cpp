#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) cin >> a[i];

    unordered_map<ll, ll> mp;
    for (ll i = 0; i < n; i++) {
        mp[a[i]]++;
    }

    for (auto x : mp) {
        if (x.second % k != 0) {
            cout << 0 << "\n";
            return;
        }
    }

    ll r = 0;
    unordered_map<ll, ll> curr;
    ll res = 0;

    for (ll l = 0; l < n; l++) {
        while (r < n) {
            if (curr[a[r]] < mp[a[r]] / k) {
                curr[a[r]]++;
                r++;
            } else break;
        }
        res += (r - l);
        curr[a[l]]--;
        
    }

    cout << res << "\n";
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
