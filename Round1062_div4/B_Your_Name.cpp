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
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
            mp[b[i]]--;
        }
        int flag = 0;
        for(auto x:mp){
            if(x.second != 0) flag =1 ;
        }
        if(flag == 0)
        cout<<"YES";
        else cout<<"NO";
        cout<<endl;
        
    }
    return 0;
}