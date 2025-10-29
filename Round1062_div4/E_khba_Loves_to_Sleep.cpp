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
        int n,k,x;
        cin>>n>>k>>x;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        sort(a.begin(),a.end());

        vector<int> v(x+1);

        int first = a[0];
        for(int i = 0;i<a[0];i++){
            v[i] = a[0] - i;
        }

        for(int i=1;i<n-1;i++){
            int left = a[i];
            int right = a[i+1];
            
            int j = left;
            while(j<right){
                v[j] = min(j - left, right - j);
                j++;
            }
        }

        int last = a[n-1];
        int j = a[n-1];
        while(j <=x){
            v[j] = j - a[n-1];
            j++;
        }

        map<int,int> mp;
        for(int i=0;i<=x;i++){
                
        }
    }
    return 0;
}