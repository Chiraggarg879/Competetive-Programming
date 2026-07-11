#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int main()
{
    fastio;
    int t;
    cin >> t;

    while (t--)
    {
        ll a, b;
        cin >> a >> b;

        // starting with a
        ll temp1 = 3 * a + 1;
        ll res1 = (ll)floor(log(temp1) / log(4));

        ll temp2 = 3 * (b/ 2) + 1;
        ll res2 = (ll)floor(log(temp2) / log(4));

        int ans1 = 0;
        if (res1 > res2)
            ans1 = res2 * 2 + 1;
        else if (res1 == res2)
            ans1 = res2 * 2;
        else
            ans1 = res1 * 2;

        // starting with b
        ll temp_b1 = 3 * b + 1;
        ll res_b1 = (ll)floor(log(temp_b1) / log(4));

        ll temp_b2 = 3 * (a / 2) + 1;
        ll res_b2 = (ll)floor(log(temp_b2) / log(4));

        int ans2 = 0;
        if (res_b1 > res_b2)
            ans2 = res_b2 * 2 + 1;
        else if (res_b1 == res_b2)
            ans2 = res_b2 * 2;
        else
            ans2 = res_b1 * 2;

        cout << max(ans1, ans2) << '\n';
    }
    return 0;
}
