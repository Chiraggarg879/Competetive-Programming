#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    // vector<int> v1;
    int odda = 0;
    int oddb = 0;
    // vector<int> v2;
    int za=0,zb=0;
    for(int i=0;i<n;i++){
        if(a[i] == '0'){
            za++;
            // v1.push_back(i);
            if(i & 1) odda++;
        }
        if(b[i] == '0'){
            zb++;
            // v2.push_back(i);
            if(i & 1) oddb++;
        }
     }

    //  int oa = n - za;
    //  int ob = n - zb;
     if(za != zb || odda != oddb){
        cout<<"NO"<<endl;
        return;
     }
     cout<<"YES"<<endl;

     

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