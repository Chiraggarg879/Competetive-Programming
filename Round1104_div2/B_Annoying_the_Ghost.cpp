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
    vector<ll> a(n);
    vector<ll> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    ll res = 0;
    for(int i=0;i<n;i++){
        int j = i;
        for(;j<n && a[j] > b[i];j++){}
        if(j == n){
            res = -1;
            break;
        }
        for(;j>i;j--){
            swap(a[j],a[j-1]);
            res++;
        } 
    }
    cout<<res<<endl;
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