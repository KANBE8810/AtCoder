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
    ll L,R;
    cin >> L >> R;
    if(R-L>=2019)
        cout << 0 << endl;
    else {
        ll memo=2018;
        for(ll i=L;i<R;i++){
            for(ll j=i+1;j<=R;j++)
                memo=min(memo,(i*j)%2019);

        }
        cout << memo << endl;
    }

    return 0;
}
