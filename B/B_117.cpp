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
    int n; cin >> n;
    vector<int> hen(n);
    rep(i,n) cin >> hen[i];
    sort(hen.begin(),hen.end());
    int sum=0;
    rep(i,n-1) sum += hen[i];
    if(sum>hen[n-1])
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
