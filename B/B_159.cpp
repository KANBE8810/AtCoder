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
    int man= (n.size()+1)/2;
    for(int i=0; i<man/2;i++){
        if(n[i] != n[(man-2-i)]){
            cout << "No" << endl;
            return 0;
        }
        if(n[(man+i)] != n[n.size()-1-i]){
            cout << "No" << endl;
            return 0;
        }
    }
    for(int i=0;i<(n.size()+1)/2;i++){
        if(n[i] != n[n.size()-1-i]){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
