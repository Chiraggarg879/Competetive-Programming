#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

// dfs will return height
int dfs(int node, vector<vector<int>> &adj, int &res)
{
    int mx = 0; // represents height
    int mn = INT_MAX;
    priority_queue<int> pq;

    for (int child : adj[node])
    {
        int height = dfs(child, adj, res);
        pq.push(height);
        mx = max(mx, height);
    }
    if(pq.size() >= 2){
        pq.pop();
        res += pq.top(); 
    }

    res++;
    return 1 + mx;
}

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> adj(n + 1);
    for (int i = 2; i <= n; i++)
    {
        int p;
        cin >> p;
        adj[p].push_back(i);
    }
    int res = 0;
    dfs(1, adj, res);
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