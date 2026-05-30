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
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(), a.end());
        int low = 0,high = n-1;
        int mid = low + (high-low)/2;
        int res = 0;
        while(low < high){
            if(a[low] != a[mid] ||  a[high] != a[mid]){
                res++;
            }
            low++;
            high--;
        }
        cout<<res<<endl;
    }
    return 0;
}