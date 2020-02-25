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
    ll n,y;
    cin >> n >> y;
    vector<int> a(n,0);

    while(1){
        while(y>10000){
            y-=10000;
            a[0]++;
        }
        while(y>1000){
            y-=1000;
            a[2]++;
        }
    }

    return 0;
}
