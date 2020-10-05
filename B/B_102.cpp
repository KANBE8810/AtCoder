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
    vector<ll> A(n);
    rep(i,n) cin >> A[i];
    sort(A.begin(),A.end());
    cout << A[n-1] - A[0] << endl;
    return 0;
}
