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
    ll n, k, x;
    cin >> n >> k >> x;
    vector<ll> arr(n);

    ll sm = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        sm += arr[i];
    }

    ll pos = (x + sm - 1) / sm;
    if (x <= sm)
        pos = 1;

    if (pos > k)
    {
        cout << 0 << endl;
        return;
    }
    if(x % sm == 0){
        cout<<1 + (k -pos)*n <<endl;
        return;
    }
    x = x % sm;
    
    ll skip = 0;
    for (ll i = n - 1; i >= 0; i--)
    {
        if (x > arr[i])
        {
            skip++;
            x -= arr[i];
        }
        else
            break;
    }
    ll left = k - pos;
    ll res = left * n;

    res += (n - skip);

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