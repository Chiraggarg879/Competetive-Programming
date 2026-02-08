#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
     // Your solution here
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) {
        ll n,x,y;
        cin>>n>>x>>y;
        vector<long long> arr(n,0);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        ll res = 0,maxsave = 0;
        for(int i=0;i<n;i++){
            ll temp = arr[i]/x;`
            res += temp*y;
            ll rem = arr[i] % x;
           ll currsave = temp*(x-y) + rem;
           maxsave = max(maxsave,currsave);
            
        }
        res += maxsave;
        cout<<res<<endl;

    }
    return 0;
}