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
    int k;
    vector<int> an(5);
    rep(i,5) cin >> an[i];
    cin >>k;
    sort(an.begin(),an.end());
    if(abs(an[0]-an[4]) > k){
        cout << ":(" << endl;
        return 0;
    }
    cout << "Yay!" << endl;
    return 0;
}

