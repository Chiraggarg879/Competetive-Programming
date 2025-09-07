#include<iostream>
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
        ll k,x;
        cin>>k>>x;
        while(k){
            x=(1LL)*x*2;
            k--;
        }
        cout<<x<<endl;
    }
    return 0;
}