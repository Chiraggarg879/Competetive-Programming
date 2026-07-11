#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int main()
{
    fastio;
    int t = 1;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        string temp = "";
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '4')
            {
                res++;
            }
            else
            {
                temp += s[i];
            }
        }
        n = temp.length();
        if (n == 0)
        {
            cout << res << endl;
            continue;
        }
        vector<int> pre(n+1, 0);
        pre[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            pre[i] = pre[i - 1] + (temp[i-1] != '2' ? 1 : 0);
        }
        vector<int> suff(n+1, 0);
        suff[n - 1] = temp[n - 1] == '2' ? 1 : 0;
        for (int i = n - 1; i >= 0; i--)
        {
            suff[i] = suff[i + 1] + (temp[i] == '2' ? 1 : 0);
        }
        int ans = INT_MAX;
        for (int i = 0; i <=n; i++)
        {
            ans = min(ans, pre[i] + suff[i]);
        }
        res += ans;
        cout << res << endl;
    }
    return 0;
}