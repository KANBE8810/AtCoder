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
    int n,m,c,ans=0;
    cin >> n >> m >> c;
    vector<int> b(m);
    vector<vector<int>> a(n,vector<int>(m));
    rep(i,m) cin >> b[i];
    rep(i,n){
        rep(j,m){
            cin >> a[i][j];
        }
    }
    rep(i,n){
        int sum=0;
        rep(j,m){
            sum+=a[i][j]*b[j];
        }
        if(sum+c>0){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
