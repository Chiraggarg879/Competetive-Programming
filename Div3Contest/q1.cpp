#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    int n;
    cin >> n;
    string a;
    cin >> a;
    int m;
    cin >> m;
    string b;
    cin >> b;
    string c;
    cin >> c;

    string ans = a;  // Start with initial string a

    for (int i = 0; i < m; i++) {
        if (c[i] == 'V') {
            ans = string(1, b[i]) + ans;  // prepend character
        } else {
            ans = ans + string(1, b[i]);  // append character
        }
    }

    cout << ans << endl;
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
