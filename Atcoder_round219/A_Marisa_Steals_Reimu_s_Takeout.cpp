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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<int> count(3, 0);
        for (int i = 0; i < n; i++)
        {
            count[a[i]]++;
        }
        int res = 0;
        res += count[0];
        res += min(count[1], count[2]);
        int mn = min(count[1], count[2]);
        count[1] -= mn;
        count[2] -= mn;
        if (count[1] > 0)
        {
            res += count[1] / 3;
        }
        if (count[2] > 0)
        {
            res += count[2] / 3;
        }
        cout << res << endl;
    }
    return 0;
}