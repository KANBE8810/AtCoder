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
    int n; cin >> n;
    vector<double> v(n);
    rep(i,n) cin >> v[i];

    while(n>1){
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        double memo=(v[n-1]+v[n-2])/2;
        v[n-2]=memo;
        v.pop_back();
        n--;
    }
    cout << v[0] << endl;
    return 0;
}
