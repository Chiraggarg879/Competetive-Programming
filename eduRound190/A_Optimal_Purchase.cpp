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
    // Your solution here
}

int main()
{
    fastio;
    int t = 1;
    cin >> t;
    while (t--)
    {
        ll n, a, b;
        cin >> n >> a >> b;
        ll ans = 0;
        if (a <= b / 3)
        {
            ans = a * n;
        }
        else
        {
            ans += n / 3 * b;
            n %= 3;
            if (a * n <= b)
            {
                ans += a * n;
            }
            else
                ans += b;
        }
        cout << ans << endl;
    }
    return 0;
}