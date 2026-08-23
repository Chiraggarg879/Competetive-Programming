#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

ll gcd(ll a,ll b){
    if(b == 0) return a;
    else return gcd(b,a%b);
}

void solve() {
    ll n;
    cin>>n;
    vector<ll> arr(n);
    ll mn = LLONG_MAX;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        mn = min(mn,arr[i]);
    }
    ll mnfreq = 0;
    vector<ll> temp;
    for(ll i=0;i<n;i++){
        if(arr[i] == mn){
            mnfreq++;
        }else{
            if(arr[i] % mn == 0){
                temp.push_back(arr[i]);
            }
        }
    }
    
    if(mnfreq >= 2){
        cout<<"YES"<<endl;
    }
    else {
        if(temp.size() >= 2){
            ll g = temp[0];
            for(int i=1;i<temp.size();i++) g = gcd(g,temp[i]);

            if(g == mn){
                cout<<"YES"<<endl;
                return;
            }
        }
        cout<<"NO"<<endl;
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