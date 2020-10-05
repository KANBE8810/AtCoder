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
ll gcd(ll a,ll b){
    return b ? gcd(b,a%b):a;
}
ll lcm(ll a,ll b){
    return a/gcd(a,b)*b;
}

ll f(ll x,int c,int d){
    ll res = x;
    res -= x/c;
    res -= x/d;
    res += x/lcm(c,d);
    return res;
}

int main(){
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    ll ans = f(b,c,d)-f(a-1,c,d);
    cout << ans << endl;
    return 0;
}

