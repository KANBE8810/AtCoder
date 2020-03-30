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
    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    sort(a.begin(),a.end());
    map<ll,ll> m;
    ll memo=a[0];
    m.insert(make_pair(a[0],1));
    rep(i,n){
        if(a[i]!=memo)
            m.insert(make_pair(a[i],1));
        else 
            m[a[i]]++;
    }
    return 0;
}
