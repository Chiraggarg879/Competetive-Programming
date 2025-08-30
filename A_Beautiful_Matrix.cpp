#include<vector>
#include<iostream>
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
   vector<vector<int>> mat(5, vector<int>(5));
   for(int i=0;i<5;i++){
       for(int j=0;j<5;j++){
           cin>>mat[i][j];
       }}
       int x,y;
       for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(mat[i][j] == 1){
                x = i;
                y = j;
            }
        }
       }
       cout<<abs(2-x) + abs(2-y);
       return 0;
    }