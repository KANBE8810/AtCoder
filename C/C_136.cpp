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
    int n; cin >> n;
    // vector<ll> H(n);
    // rep(i,n) cin >> n;
    string ans = "Yes";
    ll a; cin >> a;
    for(int i=1; i<n; i++){
        ll memo;
        cin >> memo;
        if(a>memo){
            if(a-1>memo)
                ans = "No";
        }
        if(a<memo)
            a = memo;
    }
    cout << ans << endl;
    return 0;
}
