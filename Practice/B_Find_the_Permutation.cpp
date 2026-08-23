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
    vector<string> arr(n);
    for (ll i = 0; i < n; i++)
        cin>>arr[i];

    vector<vector<ll>> adj(n);
    vector<ll> in(n, 0);
    for (ll i = 0; i < n; i++)
    {
        for (ll j = n-1; j >=i+1 ;j--)
        {
            if (arr[i][j] == '1')
            {   
                // cout<<i<<j<<" ";
                adj[i].push_back(j);
                in[j]++;
            }
        }
    }
    priority_queue<ll> q;
    for (ll i = 0; i < n; i++)
        if (in[i] == 0){
            // cout<<"hello"<<i;
            q.push(i);
        }

    while (!q.empty())
    {
        ll sz = q.size();
        for (ll i = 0; i < sz; i++)
        {
            ll tp = q.top();
            q.pop();
            cout <<( tp + 1) << " ";

            for (ll x : adj[tp])
            {
                in[x]--;
                if (in[x] == 0)
                    q.push(x);
            }
        }
    }
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