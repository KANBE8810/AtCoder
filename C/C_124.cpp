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
    cin >> n;
    char a = n[0];
    int cnt=0;
    for(int i=1;i<n.size();i++){
        if(a==n[i]){
            if(a==0){
                a=1;
                cnt++;
            }
        }

    }
    return 0;
}
