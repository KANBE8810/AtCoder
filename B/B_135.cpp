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
    cin.tie(0);
    int n,c=0;
    cin >> n;
    vector<int> a(n),b(n);

    rep(i,n) {
        cin >> a[i];
        b[i]=a[i];
    }

    sort(b.begin(),b.end());

    rep(i,n){
        if(a[i]!=b[i])
            c++;
    }

    if(c<=2){
        cout << "YES" << endl;
        return 0;
    } else{
        cout << "NO" << endl;
    }

    return 0;
}
