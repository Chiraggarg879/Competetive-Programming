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
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        vector<int> a(n);
        vector<int> b(m);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++) cin>>b[i];
        int res = 0;
        for(int i=0;i<n;i++){
            if(a[i] < y){
                res++;
            }else break;
        }
        for(int i=0;i<m;i++){
            if(b[i] < x){
                res++;
            }else break;
        }
        cout<< res<<endl;;
    }
    return 0;
}