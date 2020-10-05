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
    ll a,b,c,k;
    cin >> a >> b >> c >> k;
    b += a;
    if(a>k){
        cout << k;
    }else if(b>=k){
        cout << a;
    } else {
            c = k-b;
            cout << a-c;
    }
    return 0;
}
