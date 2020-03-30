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
    ll n,k,q;
    cin >> n >> k >> q;
    map<ll,ll> m;
    // rep(i,n) m[i+1] = k;
    rep(i,q){
        int a; cin >> a;
        m[a]++;
    }
    rep(i,n){ 
        if(m[i+1] > q-k)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
