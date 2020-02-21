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
    ll a,ans;
    cin >> a;

    if(a==100000){
        ans=9+900+90000; 
    } else if(10000<=a && a<100000){
        ans=9+900+a-9999;
    } else if(1000<=a && a<10000){
        ans=9+900;
    } else if(100<=a && a<1000){
        ans=9+a-99;
    } else if(10<=a && a<100){
        ans=9;
    } else if(a<10){
        ans=a;
    }

    cout << ans << endl;
    return 0;
}
