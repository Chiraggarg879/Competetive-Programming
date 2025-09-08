#include <iostream>
#include<vector>
#include<algorithm>
#include<math.h>
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
        ll n,m;
        cin>>n>>m;
        vector<ll> v(n);
        for(int i=0;i<n;i++) cin>>v[i];

        sort(v.begin(),v.end(),greater<ll> ());
        ll res = 0;
        vector<ll> lastpicked(n,0);
        ll curr_time = 1;
        int ind = 0;
        ll rem = m%n;
        m = m - rem;
        while(rem > 0){
            int ind = rem -1;
            res += v[ind]*(curr_time - lastpicked[ind]);
            lastpicked[ind] = curr_time;
            curr_time++;
            rem--;
        }
        int rounds = m/n;
            for(int i=n-1;i>=0;i--){
                if(rounds <=0) continue;
                res += v[i]*(curr_time - lastpicked[i]);
                lastpicked[i] = curr_time;
                curr_time++;
            }  
        
        
        for(int i=0;i<n;i++){
            if(rounds <=0) continue;
            res += v[i] * (n)* (rounds-1);
        }

        cout<<res<<endl;
    }
    return 0;
}