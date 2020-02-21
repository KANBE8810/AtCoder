#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<utility>
#include<iomanip>
#include<map>
#define rep(i,n) for(int i=0; i<(n); ++i)
using namespace std;
using ll =long long;
using P = pair<int,int>;

int main(){
    cin.tie(0);
    int n,k,a;
    cin >> n >> k;

    a = -n+1;
    for(int i=0;i<n-a; i++){
        cout << k+a+i << " ";
    }
    return 0;
}
