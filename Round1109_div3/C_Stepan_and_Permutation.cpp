#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

int gcd(int a,int b){
    if(b == 0) return a;
    else return gcd(b,a%b);
}

void solve() {
    int n,x,y;
    cin>>n>>x>>y;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> s = arr;
    int g = gcd(x,y);
    string res = "YES";
    for(int i=0;i<n;i++){
        int diff = arr[i] - (i+1);
        if(diff % g != 0){
            res = "NO";
        }
    }
    cout <<res<<endl;
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