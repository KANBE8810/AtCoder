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
    vector<int> B(n-1);
    rep(i,n-1) cin >> B[i];
    vector<int> A(n);
    A[0]=B[0];
    for(int i=1;i<=n-2;i++){
        A[i]=min(B[i],B[i-1]);
    }
    A[n-1]=B[n-2];
    int ans=0;
    rep(i,n) ans+=A[i];
    cout << ans << endl;
    return 0;
}
