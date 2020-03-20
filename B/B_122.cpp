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
    string n;
    int ct=0,ans=0;
    cin >> n;
    rep(i,n.size()){
        if(n[i] == 'A' || n[i] == 'C'|| n[i] == 'G'|| n[i] == 'T'){
            ct++;
        } else{
            ans=max(ans,ct);
            ct=0;
        }
    }
    cout << max(ans,ct) << endl;
    return 0;
}
