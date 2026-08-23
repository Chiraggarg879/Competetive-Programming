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

ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}

void solve() {
    ll a,b,c,m;
    cin>>a>>b>>c>>m;

    ll lab = lcm(a,b);
    ll lbc = lcm(b,c);
    ll lac = lcm(a,c);

    ll labc = lcm(lab,c);
    

    ll alice = 6*(m/a);
    ll bob = 6*(m/b);
    ll carol = 6*(m/c);

    alice -= 3*(m/lab) + 3*(m/lac);
    
    alice += 2*(m/labc);
     

    bob -= 3*(m/lab) + 3*(m/lbc);
    bob += 2*(m/labc);

    carol -= 3*(m/lbc) + 3*(m/lac);
    carol += 2*(m/labc);

    cout<<alice<<" "<<bob<<" "<<carol<<endl; 
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