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
    int n,flag=0;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin>>a[i];

    rep(i,n){
        if(a[i]%2==0 && a[i]%3!=0 && a[i]%5!=0)
            flag++;
    }

    if(flag==0)
        cout <<"APPROVED"<< endl;
    else
        cout << "DENIED"<< endl;
    return 0;
}

