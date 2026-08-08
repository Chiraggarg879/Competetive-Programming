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

    vector<pair<ll, ll>> b(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> b[i].first;
        b[i].second = i;
    }

    sort(b.begin(), b.end());

    if (b[0].first != 0)
    {
        cout << -1 << '\n';
        return;
    }

    vector<ll> ans(n);

    ll tot = 0;
    ll prev = b[0].first;
    ll prev_count = 1;
    ll temp = 0;

    for (ll i = 1; i < n; i++)
    {
        if (b[i].first == b[i - 1].first)
        {
            prev_count++;
        }
        else
        {
            ll num = b[i].first;
            ll val = num - tot;

            if (val % prev_count != 0)
            {
                cout << -1 << '\n';
                return;
            }

            val /= prev_count;

            if (val <= temp)
            {
                cout << -1 << '\n';
                return;
            }

            // All elements having value prev get val
            for (ll j = i - prev_count; j < i; j++)
                ans[b[j].second] = val;

            temp = val;
            tot += val * prev_count;

            prev = b[i].first;
            prev_count = 1;
        }
    }

    if (b[n - 1].first != tot)
    {
        cout << -1 << '\n';
        return;
    }

    // Last group
    for (ll j = n - prev_count; j < n; j++)
        ans[b[j].second] = temp + 1;

    for (ll x : ans)
        cout << x << " ";

    cout << '\n';
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