#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
//Not working
void solve(int n, vector<int> &arr) {
     // Your solution here
    int res = 0;
    for(int i=1;i<n;i+=2){
        int sodd = arr[i-1];
        if(i<n-1) sodd += arr[i+1];
        int diff = sodd - arr[i];
        if(diff > 0){
            res += diff;
        }
        if(i<n-1) arr[i+1] -= diff;
        if(i<n-1 && arr[i+1] <0) arr[i+1] = 0;
    }
    cout<<res<<endl;
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        
        
        solve(n,arr);
        
      
    }
    return 0;
}