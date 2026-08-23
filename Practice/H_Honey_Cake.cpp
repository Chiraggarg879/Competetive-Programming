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
    ll a, b, c, n;
    cin >> a >> b >> c >> n;
    ll d = a, e = b, f = c;
    ll temp = sqrt(n);
    for (ll i = 2; i <= n && i <= temp; i++)
    {
        while (n % i == 0)
        {
            // i is factor
            n /= i;
            if (a % i == 0)
            {
                a /= i;
            }
            else if (b % i == 0)
            {
                b /= i;
            }
            else if (c % i == 0)
            {
                c /= i;
            }
            else
            {
                cout << -1 << endl;
                return;
            }
        }
    }
    if (n > 1)
{
    if (a % n == 0)
        a /= n;
    else if (b % n == 0)
        b /= n;
    else if (c % n == 0)
        c /= n;
    else
    {
        cout << -1 << endl;
        return;
    }
}
    ll p1 = d / a, p2 = e / b, p3 = f / c;
    cout << p1 - 1 << " " << p2 - 1 << " " << p3 - 1 << endl;
}

int main()
{
    fastio;
    int t = 1;

    while (t--)
    {
        solve();
    }
    return 0;
}