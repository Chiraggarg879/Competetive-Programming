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
    ll n, k;
    cin >> n >> k;
    vector<vector<ll>> arr(n, vector<ll>(n));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    ll low = 0, high = n - low - 1;
    ll count = 0;
    while (low < (n) / 2)
    {
        high = n - low - 1;
        for (ll i = 0; i < n; i++)
        {
            if (arr[low][i] != arr[high][n - i - 1])
                count++;
        }
        low++;
    }
    if (n & 1)
    {
        ll mid = n / 2;
        ll first = 0, last = n - 1;
        while (first < last)
        {
            if (arr[mid][first] != arr[mid][last])
                count++;
            first++;
            last--;
        }
    }
    // cout << count << " ";
    if (k < count)
    {
        cout << "NO\n";
    }
    else if ((k - count) % 2 == 0 || n % 2 == 1)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
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