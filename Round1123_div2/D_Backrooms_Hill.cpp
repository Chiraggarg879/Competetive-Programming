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
    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    if (n & 1)
    {
        arr.push_back(-1);
        n++;
    }
    vector<ll> a, b;
    for (ll i = 0; i < n; i++)
    {
        if (i & 1)
            b.push_back(arr[i]);
        else
            a.push_back(arr[i]);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    vector<ll> res(n, -1);
    ll left = 0, right = n - 1;
    for (ll i = 0; i < a.size(); i++)
    {
        if (a[i] < b[i] || left == right)
        {
            res[left] = a[i];
            res[left + 1] = b[i];
            left += 2;
        }
        else
        {
            res[right] = b[i];
            res[right - 1] = a[i];
            right -= 2;
        }
    }

    bool flag = true;
    string ans = "YES";
    for (ll i = 0; i < res.size() - 1; i++)
    {
        if (flag)
        {
            if (res[i] > res[i + 1])
            {
                flag = false;
            }
        }
        else
        {
            if (res[i] < res[i + 1])
            {
                ans = "NO";
                break;
            }
        }
    }
    cout << ans << endl;
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