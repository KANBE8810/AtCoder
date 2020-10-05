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
    int n,t;
    cin >> n >> t;
    vector<P> N(n);
    P ans;
    ans.first=0;
    ans.second=9999;
    rep(i,n)
        cin >> N[i].second >> N[i].first ;
    sort(N.begin(),N.end());
    rep(i,n){
        if(N[i].first <= t && N[i].second < ans.second){
            ans.first=N[i].first;
            ans.second=N[i].second;
        }
    }
    if(ans.first==0)
        cout << "TLE";
    else
        cout << ans.second << endl;
    return 0;
}
