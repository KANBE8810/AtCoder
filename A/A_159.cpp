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
    int n,m,cnt=0;
    cin >> n >>m;
    cnt = (n*(n-1))/2;
    cnt += (m*(m-1))/2;
cout << cnt << endl;
    return 0;
}
