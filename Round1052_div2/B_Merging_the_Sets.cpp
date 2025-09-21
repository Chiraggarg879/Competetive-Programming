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
    int n, m;
    cin >> n >> m;
    vector<unordered_set<int>> s(n);
    for (int i = 0; i < n; i++)
    {
        int l;
        cin >> l; // size of each set
        for (int j = 0; j < l; j++)
        {
            int temp;
            cin >> temp;
            s[i].insert(temp);
        }
    }

    // traverse all the subsets and create a freq map;
    vector<int> freq(m+1, 0);
    for (int i = 0; i < n; i++)
    {
        for (auto x : s[i])
        {
            freq[x]++;
        }
    }
    //
    for (int i = 1; i <= m; i++)
    {
        if (freq[i] == 0)
        {
            cout << "NO"<<endl;
            return;
        }
    }
    int count = 0; // stores no. of unwanted sets
    for (int i = 0; i < n; i++)
    {
        int flag = 0;
        for (auto x : s[i])
        {
            freq[x]--;
            if (freq[x] < 1 && (x >= 1 && x <= m))
            {
                flag = 1;
            }
            freq[x]++;
        }
        if (!flag)
            count++;
    }
    if (count < 2)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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