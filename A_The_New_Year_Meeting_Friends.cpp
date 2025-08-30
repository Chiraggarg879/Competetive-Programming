#include<iostream>
#include<math.h>
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

    int x,y,z;
    cin>>x>>y>>z;
    int mx = max(x,max(y,z));
    int mn = min(y,min(x,z));
    cout<<(mx - mn);
    return 0;
}