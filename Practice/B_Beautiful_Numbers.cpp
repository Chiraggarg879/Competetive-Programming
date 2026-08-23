#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    string s;
    cin >> s;

    ll sum = 0;
    for (char c : s)
        sum += c - '0';

    if (sum <= 9) {
        cout << 0 << '\n';
        return;
    }

    vector<ll> reduction;
    for (ll i = 1; i < s.size(); i++) {
        reduction.push_back(s[i] - '0');
    }
    reduction.push_back((s[0] - '0') - 1);

    sort(reduction.rbegin(), reduction.rend());

    ll ans = 0;

    for (ll r : reduction) {
        if (sum <= 9) break;

        sum -= r;
        ans++;
    }

    cout << ans << '\n';
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