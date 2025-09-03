#include <vector>
#include <iostream>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
  
// Updated to use long long
void solve(int n, vector<ll> &arr) {
    ll res = 0;
    for (int i = 1; i < n; i += 2) {
        ll sodd = arr[i - 1];
        if (i < n - 1) sodd += arr[i + 1];
        ll diff = sodd - arr[i];
        if (diff > 0) {
            res += diff;
        }
        if (i < n - 1 && diff >0) arr[i + 1] -= diff;
        if (i < n - 1 && arr[i + 1] < 0) arr[i + 1] = 0;
    }
    cout << res << "\n";
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        solve(n, arr);
    }
    return 0;
}
