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
    int n;
    cin >> n;
    vector<pair<double,string>> oto(n);
    rep(i,n) cin >> oto[i].first >> oto[i].second;
    double ans=0;
    rep(i,n){
        if(oto[i].second == "BTC")
            oto[i].first *= 380000.0;
        ans += oto[i].first;
    }
    cout << ans << endl;
    return 0;
}

