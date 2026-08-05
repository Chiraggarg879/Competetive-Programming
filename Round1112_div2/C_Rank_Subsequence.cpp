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
    int n;
    cin >> n;
    vector<vector<int>> vec;
    for (int i = 0; i < n; i++)
    {
        int l, r, u, v;
        cin >> l >> r >> u >> v;
        vec.push_back({l, r, u, v});
    }
    int res = 0;
    for (int m = n; m > 0; m--)
    {
        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            auto &cur = vec[i - 1];
            int l = cur[0];
            int r = cur[1];
            int u = cur[2];
            int v = cur[3];
            if ((count+1 < l || count+1 > r) && (count+1 < m + 1 - v || count+1 > m + 1 - u))
                count++;
        }
        if (count >= m)
        {
            res = m;
            break;
        }
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