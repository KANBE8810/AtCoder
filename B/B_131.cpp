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
    int n,l,ans=0,ab;
    cin >> n >> l;
    vector<int> app(n);
    rep(i,n) app[i] = l+i; 

    sort(app.begin(),app.end());

    ab = app[0];

    rep(i,n){
       ab = min(abs(ab),abs(app[i]));
       ans += app[i];
    }

    rep(i,n){
        if(ab==abs(app[i]))
            ab=app[i];
    }

    cout << ans-ab << endl;
    return 0;
}
