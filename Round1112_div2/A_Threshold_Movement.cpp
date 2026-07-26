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
    int flag = 0;
    if(n & 1){
        cout<<"NO"<<endl;
        return ;
    } 
    
    
    int mn = INT_MIN,mx = INT_MAX;
    for(int i=0;i<n;i+=2){
       if(arr[i] < arr[i+1]){
        cout<<"NO"<<endl;
        return;
       }
       else{
        mn= max(mn,arr[i+1]);
        mx = min(mx,arr[i]);
       }
    }
    if(mx - mn > 1) 
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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