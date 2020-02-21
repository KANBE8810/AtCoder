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
    int a,b,am,bm;
    cin >> a >> b;

    if((a+b)%2==0){
        cout << (a+b)/2 << endl;
        return 0;
    }else{
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }

}
