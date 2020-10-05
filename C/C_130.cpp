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
    long long int w,h,x,y;
    cin >> w >> h >> x >> y;
    if(x*2==w && y*2==h)
        cout << w*h/2.0 << " " << 1 << endl;
    else
        cout << w*h/2.0 << " " << 0 << endl;

    return 0;
}
