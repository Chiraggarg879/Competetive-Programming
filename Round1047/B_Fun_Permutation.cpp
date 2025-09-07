#include<vector>
#include<iostream>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++) cin >> p[i];

        vector<int> q(n);

        for(int i=0;i<n;i++){
            q[i] = n - p[i] +1;
        }

        for(auto x:q) cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}
