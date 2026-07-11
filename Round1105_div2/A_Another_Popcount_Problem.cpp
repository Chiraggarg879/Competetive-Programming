#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
     // Your solution here
     int n,k;
     cin>>n>>k;
     int temp = 1;
     int res = 0;
     while(n){
        if(n >= k*temp){
            n -= k*temp;
            temp = temp<<1;
            res += k;
        }else{
            res += n/temp;
            break;
        }
     }
     cout<<res<<'\n';
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