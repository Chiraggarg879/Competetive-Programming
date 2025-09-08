#include <iostream>
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
        int a,b;
        cin>>a>>b;
        if(a==b){
            cout<<0<<endl;
        }else if(a%b == 0 || b%a==0){
            cout<<1<<endl;
        }
        else cout<<2<<endl;
    }
    return 0;
}