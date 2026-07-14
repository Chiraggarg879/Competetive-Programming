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
    int res = 0;
    for(int i=0;i<n;i++){
        int count = 0;
        while(i < n && s[i] == '#'){
            count++;
            i++;
        }
        if(count%2 == 0)
        res = max(res,count/2);
        else res = max(res,1 + count/2);
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