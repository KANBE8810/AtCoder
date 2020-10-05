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
    ll n;
    cin >> n;
    vector<ll> H(n);
    rep(i,n) cin >> H[i];
    ll memo=H[0];
    ll cnt=0;
    ll ans=0;
    for(int i=1;i<n;i++){
        if(memo>=H[i])
            cnt++;
        else{
            if(ans<cnt)
                ans=cnt;
            cnt=0;
        }
        memo=H[i];
    }
    if(ans<cnt)
        ans=cnt;
    cout << ans << endl;
    return 0;
}
