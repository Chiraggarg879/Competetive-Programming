#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
     int a,b,c;
     cin>>a>>b>>c;
     int res = 0;
     while(a != b && b != c && a!= c){
        res++;
        if(a > b &&  a > c){
            if(b < c){
                a--;
                b++;
            }else{
                a--;
                c++;
            }
        }
        else if(b > a && b > c){
            if(a < c){
                b--;
                a++;
            }else{
                b--;
                c++;
            }
        }else{
            c--;
            if(b < a) b++;
            else a++;
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