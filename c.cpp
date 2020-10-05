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

int a[12][12];
const int INF=1001001001;
int main(){
    ll n,m,x;
    cin >> n >> m >> x;
    vector<int> c(n);
    rep(i,n){
        cin >> c[i];
        rep(j,m)
            cin >> a[i][j];
    }
    int ans = INF;
    rep(s,1<<n){
        int cost=0;
        vector<int> d(m);
        rep(i,n){
            if(s>>i&1){
                cost +=c[i];
                rep(j,m) d[j]+=a[i][j];
            }
        }
        bool ok=true;
        rep(j,m) if(d[j]<x)ok=false;
        if(ok) ans =min(ans,cost);
    }
    if(ans==INF) cout << -1 << endl;
    else cout << ans << endl;
    return 0;
}
