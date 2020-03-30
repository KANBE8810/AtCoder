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
    int n,cnt=1;
    cin >> n;
    map<int,int> m;
    m[n]++;
    while(1){
        if(n%2==0)
            n/=2;
        else
            n=3*n+1;
        m[n]++;
        cnt++;
        if(m[n]==2){
            cout << cnt << endl;
            break;
        }

    }

    return 0;
}
