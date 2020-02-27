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
    sort(n.begin(),n.end());
    if(n[0]==n[1] && n[2]==n[3] && n[0]!=n[2]){
        cout << "Yes" << endl;
        return 0;
    }
    
    cout << "No" << endl;
    return 0;
}
