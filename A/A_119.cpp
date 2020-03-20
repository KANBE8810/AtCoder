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
    int y,m,d;
    char c1,c2;
    cin >> y >> c1 >> m >> c2 >> d;
    cout << (m <= 4 ? "Heisei":"TBD") << endl;
    return 0;
}
