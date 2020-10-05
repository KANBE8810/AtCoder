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
    int n,m;
    cin >> n >> m;
    int maxl=0,minr=1e9;
    for(int i=0; i<m; i++){
        int l,r;
        cin >> l >> r;
        maxl=max(l,maxl);
        minr=min(r,minr);
    }
    int cnt=0;
    for(int i=1; i<=n; i++){
        if(i>=maxl && i <= minr)
            cnt++;
    }
    cout << cnt;
    return 0;
}
