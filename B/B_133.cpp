#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <utility>
#include <iomanip>
#include <map>
#include <cmath>
#include <cstdio>
#define rep(i,n) for(int i=0; i<(n); ++i)
using namespace std;
using ll =long long;
using P = pair<int,int>;

int main(){
    cin.tie(0);
    int n,m,c=0;
    cin >> n >> m;
    int d[n][m];

    rep(i,n){
        for(int j=0; j<m; j++){
            cin >> d[i][j];
        }
    }
    rep(i,n){
        for(int k=i+1;k<n;k++){
            int r=0;
            for(int j=0;j<m;j++)
                r += pow(d[i][j] - d[k][j], 2);
            float ans = sqrt(r);
            if(ceil(ans)==floor(ans)) c++;
        }
    }
    cout << c << endl;
    return 0;
}
