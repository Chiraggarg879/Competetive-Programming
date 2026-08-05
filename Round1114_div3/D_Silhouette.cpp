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
    vector<ll> b(n);
    for (ll i = 0; i < n; i++)
        cin >> b[i];
    vector<ll> a = b;
    sort(b.begin(), b.end());
    if (b[0] != 0) { cout << -1 << endl; return; }
    ll tot = 0;
    ll prev = b[0];
    ll prev_count = 1;
    ll temp = 0;
    unordered_map<ll, ll> mp;
    for (ll i = 1; i < n; i++)
    {
        if (b[i] == b[i - 1])
        {
            prev_count++;
        }
        else
        {
            ll num = b[i];
            ll val = b[i] - tot;

            if (val % prev_count == 0)
            {
                val /= prev_count;
                if(val <= temp){
                    cout<<-1<<endl;
                    return;
                }
                mp[prev] = val;
            }
            else
            {
                cout << -1 << endl;
                return;
            }
            temp = val;
            tot += val * prev_count;
            prev = b[i];
            prev_count = 1;
        }
    }
    if(b[n-1] == tot){
        mp[b[n - 1]] = 1+temp;
    }else{
        cout<<-1<<endl;
        return;
    }
    
    for (ll i = 0; i < n; i++)
    {
        cout << mp[a[i]] << " ";
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