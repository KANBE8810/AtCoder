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
    int n,ans=0;
    cin >> n;
    for(int j=1;j<=n;j++){
        int cnt=0;
        for(int i=1;i<=j;i++){
            if(j%i==0)
                cnt++;
        }
        if(cnt==8 && j%2!=0)
            ans++;
    }
    cout << ans << endl;
    return 0;
}
