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
    string n;
    cin >> n;
    int ans=10000;
    rep(i,n.size()-2){
        int memo=(n[i]-'0')*100+(n[i+1]-'0')*10+(n[i+2]-'0');
        ans = min(ans,abs(memo-753));
    }
    cout << ans << endl;
    return 0;
}
