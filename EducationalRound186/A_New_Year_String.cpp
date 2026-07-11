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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int res = 0;
        if(s.find("2025")!=string::npos){
            res = 1;
            
        }
        if(s.find("2026") != string::npos){
            res = 0;
        }
        cout<<res<<endl;
        
    }
    return 0;
}