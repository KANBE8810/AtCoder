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
    string s,t;
    cin >> s >>t;
    if(s.size()==t.size()-1){
        rep(i,s.size()){
            if(s[i]!=t[i]){
                cout << "No";
                return 0;
            }
        }
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}
