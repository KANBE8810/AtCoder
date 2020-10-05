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
    int n,t,a;
    cin >> n >> t >> a;
    int h[n],m=0;
    double p[n];
    rep(i,n){
        cin >> h[i];
        p[i] =abs(a-(t-h[i]*0.006));
        if(p[i]<p[m]) m=i;
    }
    cout << m+1 << endl;
    return 0;
}
