#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<utility>
#include<map>
#include<iomanip>
#define rep(i,n) for(int i=0; i<(n); ++i)
using namespace std;
using ll =long long;
using P = pair<int,int>;

int main(){
    cin.tie(0);
    int n;
    double ans=0;
    cin >> n;
    vector<double> A(n);

    rep(i,n) cin >> A[i];

    cout << fixed;

    rep(i,n){
        ans+=1/A[i];
    }

    cout << setprecision(10) << 1/ans << endl;

    return 0;
}
