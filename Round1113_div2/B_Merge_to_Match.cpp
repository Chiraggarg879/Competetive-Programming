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
    int n;
    int m;
    cin >> n >> m;
    
    vector<int> a(n);
    vector<int> b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int j = 0; j < m; j++)
        cin >> b[j];

    if(n < 2*m){
        cout<<"NO"<<endl;
        return;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    bool res = true;
    for (int i = 0; i < m; i++)
    {
        int shouldg = m - i;
        int shouldl = i + 1;
        int num = b[i];
        int idx = lower_bound(a.begin(), a.end(), num) - a.begin();
        // cout<<idx<<" ";
        int actg = n - idx;
        int actl = idx;
        if (actl < shouldl || actg < shouldg)
        {
            res = false;
            break;
        }
    }
    if (res)
        cout << "YES";
    else
        cout << "NO";
    cout << '\n';
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