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
    int a,b,ans;
    cin >> a >> b;
    if(a == b) ans = a+b;
    else ans = max(a,b)*2-1;
    cout << ans << endl;
    return 0;
}
