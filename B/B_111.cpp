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
    int n,ans;
    cin >> n;
    if(n<=999)
        ans =999;
    if(n<=888)
        ans =888;
    if(n<=777)
        ans =777;
    if(n<=666)
        ans =666;
    if(n<=555)
        ans =555;
    if(n<=444)
        ans =444;
    if(n<=333)
        ans =333;
    if(n<=222)
        ans =222;
    if(n<=111)
        ans =111;
    cout << ans << endl;
    return 0;
}

