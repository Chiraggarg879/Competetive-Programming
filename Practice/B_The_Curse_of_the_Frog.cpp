#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    ll n, x;
    cin >> n >> x;

    vector<array<ll, 3>> v(n);

    for (ll i = 0; i < n; i++) {
        cin >> v[i][0] >> v[i][1] >> v[i][2];
    }

    vector<ll> roll(n);
    ll wrscore = 0;

    for (ll i = 0; i < n; i++) {
        ll a = v[i][0];
        ll b = v[i][1];
        ll c = v[i][2];

        wrscore += a * (b - 1);
        roll[i] = a * b - c;
    }

    if (wrscore >= x) {
        cout << 0 << endl;
        return;
    }

    ll mx = 0;

    for (ll i = 0; i < n; i++) {
        if (roll[i] > roll[mx]) {
            mx = i;
        }
        else if (roll[i] == roll[mx]) {
            ll a = v[i][0];
            ll b = v[i][1];

            ll m = v[mx][0];
            ll p = v[mx][1];

            if (a * (b - 1) > m * (p - 1)) {
                mx = i;
            }
        }
    }

    if (roll[mx] <= 0) {
        cout << -1 << endl;
        return;
    }

    ll a = v[mx][0];
    ll b = v[mx][1];

    // wrscore -= a * (b - 1);

    ll score_needed = x - wrscore;

    ll res = (score_needed + roll[mx] -1)/ roll[mx];

    // ll rem = score_needed % roll[mx];

    // if (rem > a * (b - 1)) {
    //     res++;
    // }

    cout << res << endl;
}

int main() {
    fastio;

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
