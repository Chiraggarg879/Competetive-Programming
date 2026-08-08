#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

pair<ll,ll> findMinMax(vector<ll> &arr){
    ll mn= 0;
    ll mx = 0;
    for(ll i=1;i<arr.size();i++) {
        if(arr[mn] > arr[i]) mn = i;
        if(arr[mx] < arr[i]) mx = i;
    }
    return {mn,mx};
}

void solve() {
    ll n;
    cin>>n;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++) {
        cin>>arr[i];
    }
    pair<ll,ll> p = findMinMax(arr);
    
    vector<pair<ll,ll>> q;
    while(arr[p.first] != arr[p.second]){
        ll mn = p.first;
        if(arr[mn] == 1){
            cout<<-1<<endl;
            return;
        }
        for(ll i=0;i<n;i++){
            while(i != mn && arr[i] > arr[mn]){
                if(arr[i] % arr[mn] == 0) arr[i]/=arr[mn];
                else arr[i] = arr[i]/arr[mn] + 1;
                q.push_back({i+1,mn+1});
            }
        }
        p = findMinMax(arr);
    }

    cout<<q.size()<<endl;
    for(ll i=0;i<q.size();i++){
        cout<<q[i].first<<" "<<q[i].second<<endl;
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