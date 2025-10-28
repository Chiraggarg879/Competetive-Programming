#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);


vector<int> getPrimeFactors(int n) {
    vector<int> factors;

    if (n % 2 == 0) {
        factors.push_back(2);
        while (n % 2 == 0)
            n /= 2;
    }
    else return {2};
    for (int i = 3; i * i <= n; i += 2) {
        
        if (n % i == 0) {
            factors.push_back(i);
            while (n % i == 0)
                n /= i;
        }
    }

    if (n > 2)
        factors.push_back(n);

    return factors;
}
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
        vector<long long> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        
        long long  mn = 1e18;
        for(int i=0;i<n;i++){
            vector<int> f = getPrimeFactors(v[i]);


        }
    }
    return 0;
}