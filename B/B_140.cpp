#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include <utility>
#define rep(i,n) for(int i=0; i<(n); ++i)
using namespace std;
using ll =long long;
using P = pair<int,int>;

int main(){
    int n,ans=0;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n);

    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];
    rep(i,n-1) cin >> c[i];

    rep(i,n){
        ans+=b[a[i]-1];
        if(a[i+1] == a[i]+1 && i+1<n)
            ans+=c[a[i]-1];
    }

    cout << ans <<endl;
}
