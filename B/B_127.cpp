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
    int r,d,x;
    cin >> r >> d >> x;
    rep(i,10){
        x = x*r - d;
        cout << x << endl;
    }
    return 0;
}
