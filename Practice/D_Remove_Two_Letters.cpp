#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    ll n;
     cin>>n;
    string s;
    cin>>s;
    ll count = 0;
    for(int i=0;i<n-2;i++){
        if(s[i] == s[i+2]) count++;
    }
    ll res = n - 1 - count;
    cout<<res<<endl;
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}