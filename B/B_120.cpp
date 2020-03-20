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
    int a,b,k;
    cin >> a >> b >> k;
    int i=1,ct=0;
    vector<int> ans{1};
    if(a==1 || b==1){
        cout << 1 << endl;
        return 0;
    }
    do{
        i++;
        if(a%i==0 && b%i==0){
            ct++;
            ans.push_back(i);
        }
    }while(i!=a && i!=b);
    cout <<  ans[ct-k+1] << endl;
    return 0;
}
