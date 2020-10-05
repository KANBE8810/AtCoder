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

string divide[4]={"dream","dreamer","erase","eraser"};

int main(){
    string n;
    cin >> n;
    reverse(n.begin(),n.end());
    rep(i,4) reverse(divide[i].begin(),divide[i].end());
    bool can=true;
    for(int i=0;i<n.size();){
        bool can2=false;
        for(int j=0;j<4;j++){
            string d=divide[j];
            if(n.substr(i,d.size())==d){
                can2=true;
                i+=d.size();
            }
        }
        if(!can2){
            can=false;
            break;
        }
    }
    if(can)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
