#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
     vector<ll> arr(3);
     for(int i=0;i<3;i++) cin>>arr[i];

     sort(arr.begin(),arr.end());

     if(arr[2] > arr[0] + arr[1]){
        arr[2] = arr[0] + arr[1];
     }

     ll range = arr[2] - arr[0];

     cout<<range<<endl;

     
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