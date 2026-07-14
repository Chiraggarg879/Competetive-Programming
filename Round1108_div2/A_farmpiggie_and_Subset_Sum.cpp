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
     for(int i=1;i<=n;i+=2){
        cout<<i+1<<" "<<i<<" ";
     }
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
        cout<<endl;

    }
    return 0;
}