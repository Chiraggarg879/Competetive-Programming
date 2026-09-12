#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    ll n;
    cin>>n;
    vector<ll> arr(n);
    ll one = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i] == 1) one++;
        else one--;
    }

    if(one >=0) cout<< "Bessie"<<endl;
    else cout<<"Elsie"<<endl;


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