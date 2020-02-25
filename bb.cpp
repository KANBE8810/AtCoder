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
using P = pair<double,int>;

int main(){
    ll q,h,s,d;
    cin >> q >> h >> s >> d;
    int n;
    cin >> n;
    h = min(h,q*2);
    s = min(s,h*2);
    d = min(d,s*2);

    if(n%2==0){
        cout << n/2*d << endl;
        return 0;
    } else {
        cout << n/2*d + s << endl;
    }
    return 0;
}
