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
    long double a,b,c;
    cin >> a >> b >> c;
    long double eps = 1.0E-14;
    if(sqrt(a)+sqrt(b)+eps<sqrt(c))
        cout << "Yes" << endl;
    else 
        cout << "No" << endl;
    return 0;
}
