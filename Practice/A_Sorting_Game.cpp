#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    ll n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> ind;
    int left = 0, right = n-1;
    while(left < right){
        while(left < right){
            if(s[left] == '1') break;
            left++;
        }
        while(right > left){
            if(s[right] == '0') break;
            right--;
        }
        if(left < right){
            ind.push_back(left);
            ind.push_back(right);
            left++;
            right--;
        }else break;  
    }

    if(ind.size() == 0){
        cout<<"Bob"<<endl;
    }else{
        sort(ind.begin(),ind.end());
        cout<<"Alice"<<endl;
        cout<<ind.size()<<endl;
        for(int i=0;i<ind.size();i++){
            cout<<ind[i]+1<<" ";
        }
        cout<<endl;
    }

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