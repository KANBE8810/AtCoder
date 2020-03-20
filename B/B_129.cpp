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
    int n,ans=0,memo=0,ab=0;
    cin >> n;
    vector<ll> W(n);
    
    rep(i,n) {
        cin >> W[i];
        ans+=W[i];
    }
    
    ab=ans;

    rep(i,n){
        ans-=W[i];
        memo+=W[i];
        if(ab >= abs(ans - memo))
            ab = abs(ans - memo);
    }

    cout << ab << endl;

    return 0;
}
