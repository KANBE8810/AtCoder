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
    int a=0,b=0;
    cin >> n;
    vector<int> card(n);
    rep(i,n) cin >> card[i];
    sort(card.begin(),card.end());
    if(n%2==0){
        for(int i=n-1;i>-1;i--){
            if(i%2==0 or i==0){
                b+=card[i];
            } else {
                a+=card[i];
            }
        }
    } else {
        for(int i=n-1;i>-1;i--){
            if(i%2==0 or i==0){
                a+=card[i];
            } else {
                b+=card[i];
            }
        }
    }
    cout << a-b;
    return 0;
}
