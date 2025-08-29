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
        int n,a,b;
        cin>>n>>a>>b;
        if(b>=a){
            if(n%2 == b%2){
                cout<<"YES";
            }else cout<<"No";
        }else{
            if(n%2 == a%2 && n%2 == b%2 ){
                cout<<"YES";
            }else cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}