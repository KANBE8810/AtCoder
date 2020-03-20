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

int N;
int x[10],y[10];

double dist(int i, int j) {
    double dx = x[i] - x[j];
    double dy = y[i] - y[j];
    return pow(dx * dx + dy * dy, 0.5);
}

void solve(){
    cin >> N;
    for(int i=1; i<=N; i++) cin >> x[i] >> y[i];
    double sum = 0.0;    
    vector<int> cs(N);
    rep(i,N)  cs[i]=i+1;
    do{
        rep(i,N-1) sum += dist(cs[i],cs[i+1]);
    } while(next_permutation(cs.begin(), cs.end()));
    int aaa = 1;
    for(int i = 2; i <= N; i++) aaa *= i;
    cout << fixed << setprecision(10) << sum / aaa << endl;
    return;
}

int main(){
    solve();
    return 0;
}
