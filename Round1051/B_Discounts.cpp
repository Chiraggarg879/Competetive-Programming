#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
     // Your solution here
     ll n,k;
     cin>>n>>k;
     vector<int> coins(n);
     vector<int> dis(k);
     for(int i=0;i<n;i++) cin>>coins[i];
     for(int i=0;i<k;i++) cin>>dis[i];
     sort(coins.begin(),coins.end(),greater<int> ());
     sort(dis.begin(),dis.end());

     int i = 0,j = 0;
    ll res = 0;
     while(i < n && j < k){
        ll diff = dis[j]-1;
        while(i < n && diff--){
            res += coins[i];
            i++;
        }
        i++;
        j++;
     }
     while(i<n){
        res += coins[i];
        i++;
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