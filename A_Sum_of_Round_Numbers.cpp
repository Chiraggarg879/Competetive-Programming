#include <iostream>
#include <vector>
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
        int n;
        cin >> n;
        vector<int> v;
        int count = 0;
        int zero = 0;
        while (n)
        {
            int d = n % 10;
            if (d != 0)
                count++;
            int num = d * (int)round(pow(10, zero));

            if (num != 0)
                v.push_back(num);
            zero++;
            n /= 10;
        }
        cout << count << endl;
        for (int x : v)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}