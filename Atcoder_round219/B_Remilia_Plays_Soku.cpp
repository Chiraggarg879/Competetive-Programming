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
        ll n,x1,x2,k;
        cin>>n>>x1>>x2>>k;
        if(n == 2 || n == 3){
            cout<<1<<endl;
            continue;
        }
        ll ans = k;
        ll mn = abs(x1-x2);
        if(x2 > x1)
        mn = min(mn,abs(n - x2 + x1));
        else 
        mn = min(mn,abs(n - x1 + x2));
        ans += mn;
        cout<<ans<<endl;
    }
    return 0;
}