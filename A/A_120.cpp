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
    int a,b,c;
    cin >> a >> b >> c;
    if(b/a>c)
        cout << c << endl;
    else
        cout << b/a << endl;
    return 0;
}
