#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
ll mod = 9984244353;

void solve()
{
    // Your solution here
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll Xor = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        Xor = Xor ^ a[i];
    }
    if(n == 1){
        cout<<0<<'\n';
        return;
    }
    if(Xor == 0){
        cout<<1<<'\n';
        return;
    }
    ll res = 0;
    for(int i=0;i<n;i++){
        if((Xor ^ a[i]) < a[i]) res++;
    }
    cout<<res<<'\n';
    return;
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