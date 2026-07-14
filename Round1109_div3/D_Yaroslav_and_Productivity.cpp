#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
     ll n,m;
     cin>>n>>m;
     vector<ll> arr(n);
     vector<ll> posts(m);
     for(ll i=0;i<n;i++) cin>>arr[i];
     for(ll i=0;i<m;i++) cin>>posts[i];

     sort(posts.begin(),posts.end());
     ll sum = 0;
     ll j = 0;
     for(ll i=0;i<m;i++){
        ll post = posts[i];
        ll partSum = 0;
        while(j < post){
            partSum += arr[j];
            j++;
        }
        sum += abs(partSum);
     }
     while(j < n){
        sum += arr[j];
        j++;
     }
     cout<<sum<<endl;
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