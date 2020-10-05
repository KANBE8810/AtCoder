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
    int n;
    cin >> n;
    vector<int> a(n);
    int ans=0;
    int cnt=1;
    rep(i,n){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    ans=a[0];
    for(int i=1;i<n;i++){
        if(ans>a[i]){
            ans=a[i];
            cnt++;
        }
    }
    cout << cnt <<endl;
    return 0;
}
