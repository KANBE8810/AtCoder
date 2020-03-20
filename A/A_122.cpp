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
    if(n=="A") cout << "T" << endl;
    if(n=="T") cout << "A" << endl;
    if(n=="C") cout << "G" << endl;
    if(n=="G") cout << "C" << endl;
    return 0;
}

