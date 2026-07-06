#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);


int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) {
        int k;
        cin>>k;
        vector<int> arr(k);
        for(int i=0;i<k;i++){
            cin>>arr[i];
        }
        int res = 0;
        int count = 0;
        for(int i=0;i<k;i++){
            if(arr[i] >= 3){
                res = 1;
            }else if(arr[i] == 2) {
                count++;
            }
        }
        if(count >=2){
            res = 1;
        }
        if(res == 1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    return 0;
}