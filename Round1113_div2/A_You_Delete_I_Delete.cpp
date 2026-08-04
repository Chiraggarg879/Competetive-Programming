#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void solve()
{

    string s;
    cin >> s;
    int n = s.length();
    string res = "";
    int one = 1, zero = 1;
    for (int i = 0; i < n; i++)
    {
        if(zero == 1 && s[i] == '0'){
            zero--;
        }else res += s[i];
    }
    string res1 = "";
    for(int i=0;i<res.length();i++){
        if(one == 1 && res[i] == '1'){
            one--;
        }else res1 += res[i];
    }
    cout <<res1<<endl;
}

int main()
{
    fastio;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}