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
    string n,t;
    bool ans=false;
    cin >> n >> t;
    rep(i,n.size()){
        if(n==t)
            ans=true;
        n =n.back()+n.substr(0,n.size()-1);
    }
    if(ans)
        cout << "Yes" << endl;
    else
            cout << "No" << endl;
    return 0;
}
