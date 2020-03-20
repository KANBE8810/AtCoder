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
    ll h,w;
    cin >> h >> w;
    ll ans=(h*w);
    if(h==1 || w == 1){
        cout << 1 << endl;
        return 0;
    }
    if(ans%2==0){
        cout << ans/2 << endl;
        return 0;
    }else
        cout << ans/2+1 << endl;
    return 0;
}
