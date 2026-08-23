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
    ll n;
    cin >> n;

    const int MAX = 200000;

    vector<bool> prime(MAX, true);

    for (int i = 2; i * i < MAX; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j < MAX; j += i)
                prime[j] = false;
        }
    }

    vector<int> primes;
    for (int i = 1; i < MAX; i++)
    {
        if (prime[i])
            primes.push_back(i);
    }

    ll prev = 1;
    ll curr = 0;

    for (int i = 0; i < n; i++)
    {
        cout << 1LL*prev * primes[curr] << " ";
        prev = primes[curr];
        curr++;
    }

    cout << endl;
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