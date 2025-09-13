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
        int n,m;
        cin>>n>>m;
        vector<pair<int,int>> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i].first;
            cin>>a[i].second;
        }
        sort(a.begin(),a.end());
        ll res = 0;
        int currdest = 0;
        int lastmin = 0;
        for(int i=0;i<n;i++){
            int diff = a[i].first - lastmin;
            int lastdest = a[i].second;
            int flag = currdest ^ lastdest;

            if(diff % 2 == flag){
                res += diff;
            }else {
                res += diff-1;
            }
            currdest = lastdest;
            lastmin = a[i].first;
        }

        res +=m -  a[n-1].first;
        cout<<res<<endl;


    }
    return 0;
}