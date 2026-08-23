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
    vector<ll> p(n), a(n);
    for (ll i = 0; i < n; i++)
        cin >> p[i];
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    ll next = -1;
    for (ll i = 0; i < n; i++)
    {   
        if(next != -1 && p[i] != next){
            if(a[i] != a[i-1]){
                cout<<"NO"<<endl;
                return;
            }
        }else next = -1;
        if(p[i] != a[i]){
             if(i == 0 || (a[i] != a[i-1] && a[i] != p[i-1])){
                next = a[i];
            }
        }else next = -1;
    }
    cout<<"YES"<<endl;
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