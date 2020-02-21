#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include <utility>
#define rep(i,n) for(int i=0; i<(n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    int a,b,c;
    cin >> a >> b >> c;

    if(a==b && b==c )
        cout <<"No"<<endl;
    else if(a!=b && a!=c && b!=c)
        cout <<"No"<<endl;
    else
        cout << "Yes" << endl;
    return 0;
}

