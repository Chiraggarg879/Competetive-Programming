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
    int zero = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i] == 0) zero++;
    }
    if(zero == 1){
        cout<<"NO"<<endl;
        return;
    }

    string s;
    for(int i=0;i<n;i++) s += 'C';

    int flag = 0;

    for(int i=0;i<n;i++){
        if(arr[i] == 0){
            if(flag == 0) s[i] = 'A';
            else s[i] = 'B';
            flag = !flag;
        }
    }
    cout<<"YES"<<endl;
    cout<<s<<endl;
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