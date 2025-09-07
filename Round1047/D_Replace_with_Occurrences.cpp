#include<vector>
#include<iostream>
#include<unordered_set>
using namespace std;
//This solution is wrong 
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
        int flag = 0;
        int n;
        cin>>n;
        vector<int> b(n);
        for(int i=0;i<n;i++) cin>>b[i];
        unordered_set<int> s;
        for(int x:b) s.insert(x);
        int sm = 0;
        for(auto x:s){
            sm +=x;
        }

        if(sm == n){
            
        }else {
            cout<<-1;
        }
        cout<<endl;
    }
    return 0;
}