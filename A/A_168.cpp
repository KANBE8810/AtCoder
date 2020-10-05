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
    int n,ans=0;
    cin >> n;
    if(n<10){
        ans= n;
    } else if(n<100){
        ans=n%10;
    } else if(n<1000){
        ans=n%100;
        ans%=10;
    }
    if(ans==3){
        cout << "bon";
    } else if(ans==0||ans==1||ans==6||ans==8){
        cout << "pon";
    } else {
        cout <<"hon";
    }
    return 0;
}
