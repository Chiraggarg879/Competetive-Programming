#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
     ll n;
     cin>>n;
     vector<ll> a(n);
     vector<ll> b(n);
     vector<ll> c(n);
     for(ll i=0;i<n;i++) cin>>a[i];
     for(ll i=0;i<n;i++) cin>>b[i];
     for(ll i=0;i<n;i++) cin>>c[i];

     //find valid i,k with j = 1 
     ll validi=0,validk=0;
     for(ll i=0;i<n;i++){
        int count = 0;
        validi++;
        int x = i;
        while(count < n){
            x = i + count;
            x=x%n;
            
            if(a[x] >= b[count]){
                validi--;
                break;
            }
            count++;
        }
     }

     for(ll k=0;k<n;k++){
        int count = 0;
        validk++;
        int x = k;
        while(count < n){
            x = k + count;
            x=x%n;
            if(c[x] <= b[count]){
                validk--;
                break;
            }
            count++;
        }
     }

     cout<< (validi* validk * n)<<endl;
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