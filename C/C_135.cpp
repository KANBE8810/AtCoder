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
    vector<ll> A(n+1);
    vector<ll> B(n);

    rep(i,n+1) cin >> A[i];
    rep(i,n) cin >> B[i];
    ll ans = 0;
    rep(i,n){
        if(A[i]>B[i]){
            ans+=B[i];
        } else {
            if(A[i+1]<=B[i]-A[i]){
                ans+=A[i]+A[i+1];
                A[i+1]=0;
            } else {
                ans+=B[i];
                A[i+1]-=B[i]-A[i];
            }
        }
    }
    cout << ans << endl;

    return 0;
}
