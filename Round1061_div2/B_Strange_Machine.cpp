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
        int n,q;
        cin>>n>>q;
        string str;
        cin>>str;
        vector<int> arr(q);
        for(int i=0;i<q;i++) cin>>arr[i];
        
        for(int i=0;i<q;i++){
            int a = arr[i];
            int res = 0;
            int ind = 0;
            while(a>0){
                ind = ind % n;
                if(str[ind] == 'A') a--;
                else a/=2;
                ind++;
                res++;
            }
            cout<<res<<endl;
        }
    }
    return 0;
}