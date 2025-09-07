#include <iostream>
#include <math.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void solve()
{
    // Your solution here
}

int main()
{
    fastio;
    int t = 1;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll res = 0;
        if(a % 2 != 0 && b%2 != 0){
            res = a*b +1;
        }else if(a %2 == 0 && b%2 ==0){
            res += a*b/2;
            res += 2;
        }else if(a % 2 != 0 && b%2 ==0){
            if(b %4 ==0){
                res += a*b/2;
                res +=2;
            }
        }
        if(res > 0)
        cout<<res<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}