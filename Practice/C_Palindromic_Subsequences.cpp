#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    ll n;
    cin>>n;
    if(n==6){
        cout<<"1 1 2 3 1 2"<<endl;
    }else{
        for(int i=1;i<=n-2;i++){
            cout<<i<<" ";
        }
        cout<<"1 2"<<endl;
    }
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