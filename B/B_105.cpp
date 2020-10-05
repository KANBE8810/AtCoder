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
    int n;
    cin >> n;
    int memo =n;
    int N = n/4;
    int m = n/7;
    rep(i,N){
        n-=4;
        if(n%7==0){
            cout << "Yes" << endl;
            return 0;
        }

    }
    rep(i,m){
        memo-=7;
        if(memo%4==0){
            cout << "Yes" << endl;
            return 0;
        }

    }
    cout << "No" << endl;
    return 0;
}
