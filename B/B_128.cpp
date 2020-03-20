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
    pair<pair<string,int>,int> p[110];
    map<string,int> memo;
    rep(i,n){
        int t;
        string m;
        cin >> m >> t;
        p[i] = make_pair(make_pair(m,-t),i);
    }
    sort(p,p+n);
    rep(i,n){
        cout << p[i].second +1 << endl;
    }
    return 0;
}
