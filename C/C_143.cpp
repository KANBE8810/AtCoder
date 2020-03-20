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
    ll n;
    string sr;
    cin >> n >> sr;
    char aaa = sr[0];
    vector<char> ans(100000);
    ans[0]=sr[0];
    ll ct=1;
    for(ll i=1;i<n;i++){
        if(aaa!=sr[i]){
            ans[ct]=sr[i];
            ct++;
            aaa=sr[i];
        }
    }
    cout << ct << endl;
    return 0;
}
