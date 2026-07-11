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
        string s;
        cin>>s;
       while(s.length() > 1){
        int n= s.length();
        //index  n-1 and n-2
        char last = s[n-1];
        char lastsecond = s[n-2];
        int newchar = 'N';
        if(last == 'Y' && lastsecond == 'Y'){
            break;
        }else if(last == 'Y' || lastsecond == 'Y'){
            newchar = 'Y';
        }
        s.pop_back();
        s.pop_back();
        s+=newchar;
       }
       if(s.length() == 1) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
    return 0;
}