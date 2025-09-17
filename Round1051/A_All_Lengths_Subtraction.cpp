#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

string solve() {
    int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        int el = n;
        for(int k = 1;k<=n;k++){
            for(int i=0;i<n;i++){
                if(v[i] == el){
                    int temp = k;
                    int ind = i;
                    while(temp--){
                        if(ind > n-1 || v[ind] != el){
                            return "NO";
                        }
                        v[ind]--;
                        ind++;
                    }
                }
            }
            el--;
        }
        return "YES";
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) {
        cout<<solve();
        cout<<endl;
    }
    return 0;
}