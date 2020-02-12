#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include <utility>
#define rep(i,n) for(int i=0; i<(n); ++i)
using namespace std;
using ll =long long;
using P = pair<int,int>;

int main(){
    int n,k,ct=0;
    cin >> n >> k;

    vector<int> h(n);
    rep(i,n) {
        cin >> h[i];
        if(h[i] >= k)
            ct++;
    }

    cout << ct << endl;
}
