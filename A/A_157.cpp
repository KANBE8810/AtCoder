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
    if(n%2==0){
        cout << n/2 <<endl;
    } else 
        cout << n/2+1 << endl;
    return 0;
}
