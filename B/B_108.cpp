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
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int x=c-a, y=d-b;
    cout << c-y << " " << d+x << " " << a-y << " " << b+x << endl;
    return 0;
}
