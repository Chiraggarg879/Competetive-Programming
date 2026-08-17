#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);


void solve() {
    ll n,m;
    cin>>n;
    vector<ll> a(n-1);
    for(ll i=0;i<n-1;i++)cin>>a[i];
    cin>>m;
    unordered_set<ll> s;
    vector<ll> dam(m,0);
    for(ll i=0;i<m;i++) {
        cin>>dam[i];
        s.insert(dam[i]);
    }

    cout<<m-1<<" ";
    bool skip = true;
    sort(dam.begin(),dam.end());
    ll i=0;
    if(dam[0]==1){
        skip = false;
        i++;
    }

    while(i<m-1){
        if(s.find(a[dam[i]-2]) != s.end()){
              cout<<dam[i]<<" "; 
        }
        else{
            if(skip){
                skip = false;
                i++;
                continue;
            }
            cout<<dam[i]<<" ";
        }
        i++;       
    }
    if(!skip && i < m) cout<<dam[m-1]<<" ";
    cout<<endl;
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