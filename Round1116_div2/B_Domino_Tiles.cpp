#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

ll MOD = 998244353;

ll helper(string &s, ll i,ll prevel,ll prevdomino, vector<vector<vector<ll>>> &dp){
    if(i >= s.length()) return 1;
    if(dp[i][prevel][prevdomino] != -1) return dp[i][prevel][prevdomino];
    if(prevdomino == 0 && prevel == 0){
        if(s[i] == '1' || s[i] == '?'){
            return dp[i][prevel][prevdomino] = helper(s,i+1,1,1,dp);
        }else{
            return 0;
        }
    }
    else if(prevdomino == 1 && prevel == 1){
        if(s[i] == '1' || s[i] == '?'){
            return dp[i][prevel][prevdomino] = helper(s,i+1,1,2,dp);
        }else return 0;
    }
    else if(prevdomino == 1 && prevel == 0){
        if(s[i] == '0' || s[i] == '?'){
            return dp[i][prevel][prevdomino] = helper(s,i+1,0,0,dp);
        }else return 0;
    }else if(prevdomino == 2 && prevel == 1){
        if(s[i] == '0' || s[i] == '?') return dp[i][prevel][prevdomino] = helper(s,i+1,0,1,dp);
        return 0;
    }

}

void solve() {
    ll n;
    cin>>n;
    string s;
    cin>>s;
    vector<vector<vector<ll>>> dp(n+1,vector<vector<ll>>(2,vector<ll>(3,-1)));
    ll f = s[0]-'0';
    ll ss = s[1]-'0';
    ll res = 0;

    if(s[0] != '?' && s[1] != '?'){
        res += helper(s,2,ss,(f+ss),dp) %MOD;
    }
    else if(s[0] == '?' && s[1] == '?'){
        for(int i=0;i<=1;i++){
            for(int j=0;j<=1;j++){
                res += helper(s,2,j,i+j,dp) %MOD;
            }
        }
    }
    else{
        if(s[0] == '?'){
            res += helper(s,2,ss,ss + 0,dp) %MOD;
            res += helper(s,2,ss,ss+1,dp) %MOD;
        }else{
            res += helper(s,2,0,0+f,dp) %MOD;
            res += helper(s,2,1,1+f,dp) %MOD;
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