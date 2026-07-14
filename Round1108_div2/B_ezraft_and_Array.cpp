#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    ll n;
    cin>>n;
    if(n == 1){
        cout<<1<<endl;
        return;
    }
    if(n == 2){
        cout<<-1<<endl;
        return;
    } 
    ll first = 1,second = 2;
    ll total = first + second;
    cout<<first<<" "<<second<<" ";
    for(ll i=0;i<n-2;i++){
        cout<<total<<" ";
        total = total + total;
    }
    cout<<endl;
    return;
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