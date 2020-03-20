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
    int H,W,h,w;
    cin >> H >> W >> h >> w;
    h-=H;
    w-=W;

    cout << h*w << endl;

    return 0;
}
