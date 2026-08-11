#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void add(vector<ll> &f1,vector<ll> &f2){
    for(int i=0;i<26;i++){
        f1[i] += f2[i];
    }
}

ll helper(string s,vector<ll> &f1,vector<ll> &f2,ll m){
    int n = s.length();
    for(ll i=0;i<n;i++){
        f1[s[i]-'A']--;
        f2[s[i]-'A']++;
    }
    ll c=0;
    for(ll i=0;i<26;i++){
        if(f1[i]*m< f2[i]){
            add(f1,f2);
            return -1;
        }else{
            if(f1[i]!=0){
                ll copies = (f2[i]+f1[i]-1)/f1[i];
                c = max(copies,c);
            }
            
        }
    }
    add(f1,f2);
    if(c > m) return -1;
    return (m-c);
}

void solve() {
    ll n,m;
    cin>>n>>m;
    vector<string> v(n);
    for(ll i=0;i<n;i++) cin>>v[i];

    vector<ll> f1(26,0);
    
    for(ll i=0;i<n;i++){
        string word = v[i];
        for(ll j=0;j<word.length();j++){
            f1[word[j]-'A']++;
        }
    }

    vector<ll> res(n);
    for(ll i=0;i<n;i++){
        vector<ll> f2(26,0);
        res[i] = helper(v[i],f1,f2,m);
    }

    for(int i=0;i<n;i++) cout<<res[i]<<" ";
    cout<<endl;
}

int main() {
    fastio;
    int t = 1;
    
    while (t--) {
        solve();
    }
    return 0;
}