#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
//wrong solution done during contest correct it
void solve() {
     // Your solution here
     int n;
     cin>>n;
     vector<int> indegree(n,0);
     for(int i=0;i<n-1;i++){
        int u,v,x,y;
        cin>>u>>v>>x>>y;
        if(x > y){
            indegree[u-1] +=(x-y); 
        }else {
            indegree[v-1] += (y-x);
        }
     }
     vector<int> res(n,0);
     multimap<int,int> mp;
     for(int i=0;i<n;i++){
        if(indegree[i]!=0){
            mp.insert({indegree[i],i});
        }
     }
     int el = n;
      for (auto it = mp.rbegin(); it != mp.rend(); ++it) {
        // cout << it->first << " -> " << it->second << "\n";
        res[it->second] = el;
        el--;
    }
    for(int i=0;i<n;i++){
        if(res[i] == 0){
            res[i] = el;
            el--;
        }
    }
    for(int x:res) cout<<x<<" ";
    cout<<endl;
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