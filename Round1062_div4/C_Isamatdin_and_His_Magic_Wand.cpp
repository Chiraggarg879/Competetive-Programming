#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);


int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];

        int odd = 0, even = 0;
        for(int i=0;i<n;i++){
            if(v[i] % 2 == 0) even++;
            else odd++;
        }

        if(odd == 0 || even == 0){
            for(auto x: v) cout<<x<<" ";
        }else{
            sort(v.begin(),v.end());
            for(auto x:v) cout<<x<<" ";
        }
        cout<<endl;

    }
    return 0;
}