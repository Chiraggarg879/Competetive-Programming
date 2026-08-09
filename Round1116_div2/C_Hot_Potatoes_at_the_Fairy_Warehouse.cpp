#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
     ll n,k;
     cin>>n>>k;
     string s;
     cin>>s;

     ll l = 1LL*2*n;
     ll red = 0;
     ll blue = 0;
     string temp = "";
     bool pass = 0;
     for(ll i=0;i<l-1;i++){
        if(s[i] == '0'){}
        else{
            if(s[i+1] == '1'){
                if((i+1) % 2 == 0){
                    red++;
                }else blue++;
            }else{
                if((i+1)%2 == 0) blue++;
                else red++;
            }
        }   
     }
     if(s[l-1] == '1'){   
        if(s[0] == '1'){
            red++;
        }else{
            blue++;
        }
     }
     cout<<red<<" "<<blue<<endl;

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