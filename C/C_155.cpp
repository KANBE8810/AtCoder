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
    int n;
    cin >> n;
    map<string,int> mp;
    rep(i,n){
        string s;
        cin >> s;
        mp[s]++;
    }
    int mx = 0;
    for(auto p: mp) mx = max(mx, p.second);
    for(auto p: mp){
        if(p.second != mx) continue;
        cout << p.first << endl;
    }
    return 0;
}

