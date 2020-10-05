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
    ll n,ans=0;
    cin >> n;
    for(int i=1; i<=n; i++){
        if(i%3!=0 && i%5!=0)
            ans+=i;
    }
    cout << ans << endl;
    return 0;
}

