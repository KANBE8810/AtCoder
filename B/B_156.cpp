#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<utility>
#include<map>
#define rep(i,n) for(int i=0; i<(n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    double n,r,c=1;
    cin >> n >> r;
    while(1){
        n/=r;
        if(n<1){
            cout << c;
            return 0;
        }
        c++;
    }
    return 0;
}

