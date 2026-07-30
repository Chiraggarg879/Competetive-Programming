#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
     int n;
     cin>>n;
     vector<int> arr(n);
     for(int i=0;i<n;i++) cin>>arr[i];
     int res = 0;
     int mn = INT_MAX;
     for(int i=0;i<n;i++){
        mn = min(arr[i],mn);
        res += mn;
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