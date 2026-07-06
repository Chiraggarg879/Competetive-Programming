#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

string solve()
{
    // Your solution here
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int count1 = 0, count2 = 0, count3 = 0;
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
            count1++;
        else if (arr[i] == 2)
            count2++;
        else if (arr[i] == 3)
            count3++;

        if (count1 >= count2 + count3)
        {
            s.insert(i);
        }
    }

    count1 = 0, count2 = 0, count3 = 0;
    int i = n - 1;
    while (i >= 0 && arr[i] == 3)
        i--;
    if (i == n - 1)
        i--;
    while (i >= 0 && arr[i] == 3)
        i--;
    for (; i >= 0; i--)
    {
        if (arr[i] == 1)
            count1++;
        else if (arr[i] == 2)
            count2++;
        else if (arr[i] == 3)
            count3++;
        if(count3 > count1 + count2){
            count1=0,count2=0,count3=0;
            continue;
        }
        if (count1 + count2 >= count3)
        {
            if (s.find(i - 1) != s.end())
            {
                return "YES";
            }
        }
    }
    return "NO";
}

int main()
{
    fastio;
    int t = 1;
    cin >> t;
    while (t--)
    {
        string res = solve();
        cout << res << endl;
    }
    return 0;
}