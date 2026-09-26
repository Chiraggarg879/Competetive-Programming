#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    ll n;
    char c;
    cin>>n>>c;
    string s;
    cin>>s;
    ll left = 0, right = n-1;
    ll res = 0;
    while(left <  right){
        if(s[left] == s[right]){
            left++;
            right--;
        }else{
            if(s[left] != c) res++;
            if(s[right] != c) res++;
            left++;
            right--;
        }
    }
    cout<<res<<endl;
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