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
using P = pair<ll,ll>;

int main(){
    ll n; cin >> n;
    vector<P> cls(n);
    rep(i,n) {
        cls[i].second = i+1;
        cin >>cls[i].first;
    }
    sort(cls.begin(),cls.end());
    rep(i,n)
        cout << cls[i].second << " ";
    return 0;
}
