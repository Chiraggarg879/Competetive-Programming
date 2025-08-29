#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

// integer power function for long long
ll intPow(ll base, ll exp) {
    ll result = 1;
    while (exp > 0) {
        if (exp & 1) result *= base;
        base *= base;
        exp >>= 1;
    }
    return result;
}

void solve(long long n) {
    ll num = 1;
    ll x = 0;
    while (num < n) {
        num *= 3;
        x++;
    }

    ll coins = 0;
    while (n > 0) {
        coins += (n / num) * (intPow(3, x + 1) + x * intPow(3, x - 1));
        n = n % num;

        while (num > n && num > 1) {
            num /= 3;
            x--;
        }
    }

    cout << coins << endl;
}

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        solve(n);
    }
    return 0;
}
