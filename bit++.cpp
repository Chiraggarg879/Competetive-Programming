#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
     // Your solution here
}

int main() {
    fastio;
    int n;
    cin >> n;
    int res = 0;
    while (n--) {
        string str;
        cin >> str;
        if (str == "X++" || str == "++X") res++;
        else res--;
    }
    cout<<res;
    return 0;
}