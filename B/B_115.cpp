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
    int n;
    cin >> n;
    vector<int> P(n);
    rep(i,n) cin >> P[i];
    sort(P.begin(),P.end());
    int ans = P[n-1]/2;
    rep(i,n-1) ans+=P[i];
    cout << ans << endl;
    return 0;
}
