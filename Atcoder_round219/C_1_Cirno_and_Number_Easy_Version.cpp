#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void solve(ll a, ll d1, ll d2, ll &ans, ll i, ll num,ll n)
{
    // Your solution here
    if (i == 19 || i > n+1)
    {
        return;
    }
    if (num > ULLONG_MAX / 10)
        return;
    // choose d1
    ll new_num = num * 10 + d1;
    if (new_num > a)
    {
        ans = min(ans, new_num - a);
    }
    else
    {
        ans = min(ans, a - new_num);
    }
    // choose d2
    new_num = num * 10 + d2;
    if (new_num > a)
    
        ans = min(ans, new_num - a);
        else ans = min(ans, a - new_num);
        
        solve(a, d1, d2, ans, i + 1, num * 10 + d1, n);
        if(d1 != d2)
        solve(a, d1, d2, ans, i + 1, num * 10 + d2, n);
    }

    int main()
    {
        fastio;
        int t = 1;
        cin >> t;
        while (t--)
        {
            ll a, n;
            cin >> a >> n;
            ll d1, d2;
            cin >> d1 >> d2;
            unsigned long long ans = ULLONG_MAX;
            ll count=0;
            ll temp = a;
            while (temp > 0)
            {
                count++;
                temp /= 10;
            }
            solve(a, d1, d2, ans, 1, 0, count);

            cout << ans << endl;
        }
        return 0;
    }