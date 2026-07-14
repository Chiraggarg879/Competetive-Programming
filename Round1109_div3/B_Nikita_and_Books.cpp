#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    string res = "YES";
    ll mxbooks = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        mxbooks += arr[i];
        if (mxbooks <= i)
            res = "NO";
        mxbooks -= i + 1;
    }
    cout << res << endl;
}

int main()
{
    fastio;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}