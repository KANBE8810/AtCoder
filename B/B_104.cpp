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
    int cnt=0,CNT=0;
    string n;
    string ans="AC";
    cin >> n;
    if(n[0]!='A')
        ans="WA";
    for(int i=2;i<n.length()-1;i++){
        if(n[i]=='C')
            CNT++;
    }
    for(int i=1;i<n.length();i++){
        if('a'<=n[i] && 'z'>=n[i])
            cnt++;
        else if (n[i]=='C' && 2<=i && i<n.length()-1)
            cnt++;
    }
    if(cnt!=n.length()-1 || CNT!=1)
        ans="WA";
    cout << ans << endl;
    return 0;
}
