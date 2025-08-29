#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve(long long n) {
    vector<long long> arr;
    int i = 1;
    long long num = 1;
    while (i <= 18) {
        num = num * 10;
        arr.push_back(num + 1);
        i++;
    }
    vector<long long> res;
    i = 0;
    while (i < (int)arr.size() && n >= arr[i]) {
        if (n % arr[i] == 0)
            res.push_back(n / arr[i]);
        i++;
    }
    sort(res.begin(),res.end());
    if (res.size() >=1)
        {cout<<res.size()<<endl;
        for (auto x : res) cout << x << " ";}
    else cout << 0;

    cout << endl;
}

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        long long n; 
        cin >> n;
        solve(n);
    }
    return 0;
}
