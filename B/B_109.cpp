#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<utility>
#include<iomanip>
#include<map>
#include<cmath>
#include<cstdio>
#define rep(i,n) for(int i=0; i<(n); ++i)
using namespace std;
using ll =long long;
using P = pair<int,int>;

int main(){
    string ans="Yes";
    int n;
    cin >> n;
    vector<string> w(n);
    rep(i,n) cin >> w[i];
    rep(i,n-1){
        if(w[i+1][0]!=w[i][w[i].size()-1]){
            ans="No";
        }
    }
    sort(w.begin(),w.end());
    rep(i,n-1){
        if(w[i]==w[i+1])
            ans="No";
    }
    cout << ans << endl;
    return 0;
}
