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

ll a,b,x;

bool a_check(ll mid){
    ll d = to_string(mid).size();
    if(x >= a*mid + b*d) 
        return true;
    else 
        return false;
}

int main(){
    cin >> a >> b >> x;
    ll yen=0, max=1e9+1;
    while(abs(max-yen) > 1){
        ll mid = (yen+max) / 2;
        if(a_check(mid))
            yen = mid;
        else
            max = mid;
    }
    cout << yen << endl;
    return 0;
}

