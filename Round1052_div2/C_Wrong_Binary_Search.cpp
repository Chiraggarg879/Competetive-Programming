#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
// wrong solution
void solve()
{
    // Your solution here
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> res(n);
    for (int i = 0; i < n; i++)
    {
        res[i] = i + 1;
    }
    int flag = 0;
    int first = -1, second = -1;
    for (int i = 0; i < n; i++)
    {

        while (i < n && s[i] == '0')
        {
            if (first == -1)
            {
                first = i;
                second = i;
            }
            else
            {
                second = i;
            }
            i++;
        }

        if (first != -1 && second != -1)
        {
            if (first == second)
            {
                cout << "NO\n";
                return;
            }
            else
            {
                swap(res[first], res[second]);
                i--;
            }
        }
        first = -1;
    second = -1;
    }

    cout << "YES\n";
    for (auto x : res)
        cout << x << " ";
    cout << endl;
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