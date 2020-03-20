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
    int n,ans=0;
    cin >> n;
    vector<int> v(n);
    vector<int> c(n);
    rep(i,n) cin >> v[i];
    rep(i,n) cin >> c[i];
    rep(i,n){
        if(v[i]-c[i]>0)
            ans += v[i]-c[i];
    }
    cout << ans << endl;
    return 0;
}
