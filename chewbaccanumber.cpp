#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll x;
    cin >> x;

    // store digits in reverse while transforming
    vector<int> digits;
    while (x > 0) {
        digits.push_back(x % 10);
        x /= 10;
    }
    reverse(digits.begin(), digits.end());

    // process digits
    for (int i = 0; i < (int)digits.size(); i++) {
        int d = digits[i];
        if (i == 0 && d == 9) continue;   // don't flip leading 9
        digits[i] = min(d, 9 - d);
    }

    // rebuild number
    ll ans = 0;
    for (int d : digits) {
        ans = ans * 10 + d;
    }

    cout << ans << "\n";
    
    return 0;
}
