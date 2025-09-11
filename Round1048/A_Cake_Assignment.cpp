#include<iostream>
using namespace std;
#include<vector>
#include<math.h>
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

vector<int> solve(ll k, ll x) {
     // Your solution here
     vector<int> res;//print reverse of this result
     ll fin = 1LL << k;
     while(x!= fin){
        if(x < fin){
            x = 1LL*x*2;
            res.push_back(1);
            
        }else{
            x = 2*x - fin*2;
            res.push_back(2);
        }
     }
     return res;
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) {
        ll k,x;
        cin>>k>>x;
        vector<int> res = solve(k,x);
        cout<<res.size()<<endl;
        for(int i=res.size()-1;i>=0;i--){
            cout<<res[i]<<" ";
        }

        cout<<endl;

    }
    return 0;
}