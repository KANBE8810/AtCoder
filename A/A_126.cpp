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
    int n,m;
    cin >> n >> m;
    vector<char> a(n);
    rep(i,n) cin >> a[i];
    rep(i,n){
        if(i==m-1){
            char A = a[i];
            if('A' <= A && A <= 'Z')
                cout << (char)(A+32);
            else
                cout << (char)(A-32);
        }else
            cout << a[i];
    }
    return 0;
}

