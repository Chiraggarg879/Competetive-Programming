#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

ll intPow(ll base, ll exp) {
    ll result = 1;
    while (exp > 0) {
        if (exp & 1) result *= base;
        base *= base;
        exp >>= 1;
    }
    return result;
}

void solve(ll n, ll k) {
    ll num = 1;
    ll x = 0;
    while (num < n) {
        num *= 3;
        x++;
    }
    ll deals = 0;
    ll coins = 0;
    vector<ll> mp(x + 1, 0);  // use long long for counts
    
    while (n > 0) {
        ll take = n / num;
        deals += take;
        mp[x] += take;
        n = n % num;

        while (num > n && num > 1) {
            num /= 3;
            x--;
        }
    }

    ll diff = k - deals; // deals left
    for (ll i = (ll)mp.size() - 1; i > 0; i--) {  // use ll for loop
        ll max_deals_transferable = diff / 2;
        if (mp[i] < max_deals_transferable) {
            mp[i - 1] += 3 * mp[i];
            diff -= 2 * mp[i];
            mp[i] = 0;
        } else {
            mp[i - 1] += 3 * max_deals_transferable;
            diff -= 2 * max_deals_transferable;
            mp[i] -= max_deals_transferable;
            break;
        }
    }

    for (ll i = 0; i < (ll)mp.size(); i++) {
        if (i == 0) {
            coins += mp[i] * intPow(3, 1);  // avoid i-1 when i=0
        } else {
            coins += mp[i] * (intPow(3, i + 1) + i * intPow(3, i - 1));
        }
    }

    if (deals <= k)
        cout << coins << "\n";
    else
        cout << -1 << "\n";
}

int main() {
    fastio;
    ll t; 
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        solve(n, k);
    }
    return 0;
}
