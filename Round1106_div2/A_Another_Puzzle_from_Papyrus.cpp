#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
     int n,c;
     cin>>n>>c;
     vector<int> a(n);
     vector<int> b(n);
     for(int i=0;i<n;i++){
        cin>>a[i];
     }
     for(int i=0;i<n;i++){
        cin>>b[i];
     }
     //cost without sorting 
     int cost = 0;
     for(int i=0;i<n;i++){
        if(a[i] < b[i]){
            cost = -1;
            break;
        }else{
            cost += a[i] - b[i];
        }
     }
     //cost with sorting
     int costs = c;
     sort(a.begin(),a.end());
     sort(b.begin(),b.end());
     for(int i=0;i<n;i++){
        if(a[i] < b[i]){
            costs = -1;
            break;
        }else{
            costs += (a[i] - b[i]);
        }
     }

     if(cost == -1 && costs == -1) cout<<-1<<endl;
     else if(cost != -1 && costs != -1) cout<<min(cost,costs)<<endl;
     else{
        if(cost == -1) cout<<costs<<endl;
        else cout<<cost<<endl;
     }
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