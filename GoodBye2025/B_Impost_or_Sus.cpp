#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

int solve(string s) {
     // Your solution here
     int op = 0;
     int n=s.length();
     if(s[0] == 'u'){
        s[0] = 's';
        op++;
     }
     if(s[n-1] == 'u'){
        s[n-1] == 's';
        op++;
     }
     for(int i=1;i<n-1;i++){
        if(s[i] == 'u' && s[i-1] == 'u'){
            s[i] = 's';
            op++;
        }
     }
     return op;
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) {
        string s;
        cin>>s;

        int res = solve(s);
        cout<<res<<endl;
    }
    return 0;
}