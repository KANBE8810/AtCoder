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
    vector<int> time(5);
    rep(i,5) cin >> time[i];
    vector<int> si = time;
    rep(i,5){
        si[i]%=10;
    }
    rep(i,5){
        if(time[i]%10!=0)
            time[i]+=(10-si[i]);
    }
    sort(si.begin(),si.end());
    // rep(i,5) cout << time[i] << endl;
    if(si[0] != 0){
        cout << si[0]+time[0]+time[1]+time[2]+time[3]+time[4]-10 << endl;
        return 0;
    } else{
        rep(i,5){
            if(si[i]!=0){
                cout << si[i]+time[0]+time[1]+time[2]+time[3]+time[4]-10 << endl;
                return 0;
            }
        }
        cout << time[0]+time[1]+time[2]+time[3]+time[4] << endl;
        return 0;

    }
}
