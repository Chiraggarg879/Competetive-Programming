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
    ll n, m;
    cin >> n >> m;
    vector<ll> arr(n), ind(m);
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
    for (ll i = 0; i < m; i++)
        cin >> ind[i];

    ll od = 0, ev = 0;
    for (ll i = 0; i < m; i++)
    {
        if ((ind[i] - 1) & 1)
            od++;
        else
            ev++;
    }

    vector<ll> even, odd;
    for (ll i = 0; i < n; i++)
    {
        if (i & 1)
            odd.push_back(arr[i]);
        else
            even.push_back(arr[i]);
    }
    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());

    ll oddSum = 0, evenSum = 0;
    for(ll i=0;i<odd.size();i++){
        if(odd[i] < 0) oddSum += odd[i];
    }

    for(ll i=0;i<even.size();i++){
        if(even[i] < 0) evenSum += even[i];
    }
    if(od > 0){
        if(odd[odd.size()-1] < 0) oddSum -= odd[odd.size()-1];
    }
    if(ev > 0){
        if(even[even.size()-1] < 0) evenSum -= even[even.size()-1];
    }
    
    cout << oddSum + evenSum << endl;
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