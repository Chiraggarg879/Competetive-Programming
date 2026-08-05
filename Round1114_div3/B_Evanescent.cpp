#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
     int n;
     cin>>n;
     string s;
     cin>>s;
    int res = 1;
    int i=1;
    int diff = 0;
     while(i < n-1){
        if(s[i] != s[i+1] && s[i] != s[i-1]){
            if(s[i+1] == s[i-1]){
                diff = 2;
                break;
            }else diff = 1;
        }
        i++;
     }
     for(int i=1;i<n;i++){
        if(s[i] == s[i-1]) continue;
        res++;
     }

     cout<<res-diff<<endl;
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