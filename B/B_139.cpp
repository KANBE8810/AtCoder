#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<utility>
#include<map>
#define rep(i,n) for(int i=0; i<(n); ++i)
using namespace std;
using ll =long long;
using P = pair<int,int>;

int main(){
    int a,b,cnt=0,m=1;
    cin >> a >> b;

    while(m<b){
        m = m-1+a;
        cnt++;
    }
    cout << cnt << endl;

    return 0;
}
