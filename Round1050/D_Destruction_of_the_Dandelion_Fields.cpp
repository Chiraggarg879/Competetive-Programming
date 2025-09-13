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
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<ll> odd;
        ll res = 0;
        ll seven = 0;
        for(int i=0;i<n;i++){
            if(a[i] % 2==0){
                seven+= a[i];
            }else {
                odd.pb(a[i]);
            }
        }
        if(odd.size() == 0){
            cout<<0<<endl;
            continue;
        }
        else{
            res += seven;
            int j = 0;
            if(odd.size() % 2 ==0){
                 j = odd.size()/2;
            }else {
                j =1+ odd.size()/2; 
            }
            sort(odd.begin(),odd.end());
            int p = odd.size()-1;
            while(j--){
                res += odd[p];
                p--;
            }
        }
        cout<<res<<endl;

    }
    return 0;
}