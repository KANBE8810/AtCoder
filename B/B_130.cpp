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
    int n,x,ans=0,ct=0;
    cin >> n >> x;
    vector<int> L(n);
    rep(i,n) cin >> L[i];

    rep(i,n+1){
        ans+=L[i];
        ct++;
        if(ans > x)
            break;
    }

    cout << ct << endl;
    return 0;
}
