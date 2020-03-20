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
    vector<P> p(m);
    rep(i,m) cin >> p[i].first >> p[i].second;
    rep(x,1000){
        int k = 1;
        int nx = x / 10;
        vector<int> d(1,x%10);
        while(nx){
            k++;
            d.push_back(nx%10);
            nx /= 10;
        }
        if(k != n) continue;
        bool ok = true;
        reverse(d.begin(), d.end());
        rep(i,m){
            if(d[p[i].first-1] != p[i].second) ok = false;
        }
        if(ok){
            cout << x << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
