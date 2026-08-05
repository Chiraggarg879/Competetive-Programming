#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    ll n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    vector<ll> v1;
    ll odda = 0;
    ll oddb = 0;
    vector<ll> v2;
    ll za=0,zb=0;
    for(ll i=0;i<n;i++){
        if(a[i] == '0'){
            za++;
            v1.push_back(i);
            if(i & 1) odda++;
        }
        if(b[i] == '0'){
            zb++;
            v2.push_back(i);
            if(i & 1) oddb++;
        }
     }

    //  ll oa = n - za;
    //  ll ob = n - zb;
     if(za != zb || odda != oddb){
        cout<<-1<<endl;
        return;
     }
     ll jo = 0,je = 0;
     ll m = v1.size();
     ll res = 0;
     for(ll i=0;i<m;i++){
        while(jo < m && (v2[jo] & 1) == 0) jo++;
        while(je < m && (v2[je] & 1) == 1) je++;
        if(v1[i] & 1){
            res += abs(v1[i]-v2[jo])/2;
            jo++;
        }else{
            res += abs(v1[i]-v2[je])/2;
            je++;
        }
     }
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