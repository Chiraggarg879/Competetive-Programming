#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
     // Your solution here
     int n;
     cin>>n;
     vector<int> arr(n);
     for(int i=0;i<n;i++) cin>>arr[i];

     unordered_map<int,int> mp;
     vector<pair<int,int>> v;
     for(int i=0;i<n;i++) mp[arr[i]]++;
     for(auto x:mp){
        v.push_back({x.second,x.first});//freq , el
     }
     sort(v.begin(),v.end());
     int sz = mp.size();
     int res = 0;
     for(int i=0;i<v.size();i++){
        res = max(res,v[i].first*sz);
        sz--;
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