#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);


bool isPrime(int n){
    if(n ==2) return true;
    for(int i=2;i*i<=n;i++){
        if(n % i ==0) return false;
    }
    return true;
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
        
        int i=2;
        while(true){
            if(isPrime(i)){
                int flag = 0;
                for(int j=0;j<n;j++){
                    if(v[j] % i != 0){
                        flag = 1;
                        break;
                    }
                }
                if(flag == 1)
                {
                    cout<<i<<endl;
                    break;
                }
            }
            i++;
        }
    
    }
    return 0;
}