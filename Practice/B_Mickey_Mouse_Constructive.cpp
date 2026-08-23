#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

ll mod = 676767677;
ll factors(ll n)
{
    if(n == 0) return 1;
    ll count = 0;
    for (ll i = 1; i <= n; i++)
    {
        if (n % i == 0)
            count++;
    }
    return count;
}
void solve()
{
    ll x, y;
    cin >> x >> y;
    ll diff = abs(x - y);

    ll fa = factors(diff);
    fa = fa % mod;
    cout << fa << endl;
 
    for (ll i = 0; i < x; i++)
        cout << 1 << " ";
    for (ll i = 0; i < y; i++)
        cout << -1 << " ";
    cout<<endl;
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