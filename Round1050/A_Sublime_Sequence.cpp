#include<bits/stdc++.h>
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
        int x,n;
        cin>>x>>n;
        if(n%2 ==0) cout<< 0;
        else cout<< x;
        cout<<endl;
    }
    return 0;
}