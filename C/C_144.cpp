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
    ll a,b;
    for(ll i=sqrt(n);i>=1;i--){
        if(n%i==0){
            a=i;
            b=n/i;
            break;
        }
    }
    cout << a+b-2 << endl;
    return 0;
}
