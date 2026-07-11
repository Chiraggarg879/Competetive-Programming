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
        int n;
        cin>>n;
        deque<int> dq;
        for(int  i=0;i<n;i++){
            int temp = 0;
            cin>>temp;
            dq.push_back(temp);
        }
        int x = 0;
        while(dq.size() > 1){
            int first = dq.front();
            dq.pop_front();
            int second = dq.front();
            dq.pop_front();
            if(first >= 0 && second >=0){
                x+= first;
                dq.push_front(second);
            }else if(first <=0 && second <=0){
                x-=second;
                dq.push_front(first);
            }else if(first <=0 && second >=0){
                x+=first;
                dq.push_front(second);
            }else{
                x-=second;
                dq.push_front(first);
            }
        }
        cout<<x<<endl;
    }
    return 0;
}