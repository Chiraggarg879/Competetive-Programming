#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
     int n,k;
     cin>>n>>k;
     int zeroes = (n+1)/2;
     int ones = n/2;
     if(ones + zeroes -2 < k){
        cout<<"-1"<<endl;
        return;
     }

     int z = (k+1)/2;
     int o = (k)/2;
     string s  = "";
     for(int i=0;i<=o;i++){
        s+="1";
     }
     for(int i=0;i<=z;i++){
        s+="0";
     } 
     
     for( int i=0;i<(n-(o+1+z+1));i++){
        if(s.length() == 0 || s[s.length()-1] == '1') s+="0";
        else s+="1";
     }

     cout<<s<<endl;  
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