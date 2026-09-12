#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    ll n,k;
    cin>>n>>k;
    if(k<n || k == 2*n){
        cout<<-1<<endl;
        return;
    }
    int num = 1;
    vector<vector<int>> mat(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            mat[i][j] = num;
            num++;
        }   
    }
    k-=n;
    k = n-k-1;
    int ind = 1;
    while(k>0){
        swap(mat[ind][ind],mat[0][ind]);
        k--;
        ind++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }   
        cout<<endl;
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