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
    string w;
    cin >> w;
    if(w.size()>n){
        rep(i,n){
            cout << w[i];
        }
        cout << "...";
    } else {
        cout << w;
    }

    return 0;
}
