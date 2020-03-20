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
    int n,m;
    cin >> n >> m;
    vector<int> ct(m,0);
    rep(i,n){
        int nu;
        cin >> nu;
        rep(j,nu){
            int an;
            cin >>an;
            ct[an-1]++;
        }
    }
    int ans=0;
    rep(i,m){
        if(ct[i]==n)
            ans++;
    }
    cout << ans << endl;

    return 0;
}
