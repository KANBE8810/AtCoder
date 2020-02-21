#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<utility>
#include<iomanip>
#include<map>
#define rep(i,n) for(int i=0; i<(n); ++i)
using namespace std;
using ll =long long;
using P = pair<int,int>;

int main(){
    cin.tie(0);
    int a,b,c,ans=0;
    cin >> a >> b >> c;

    ans=a-b;
    c-=ans;

    if(c<0){
        cout << 0 << endl;
        return 0;
    }
    cout << c << endl;
    return 0;
}
