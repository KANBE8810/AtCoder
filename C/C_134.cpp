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

template<typename T>
void remove(vector<T>& vector, unsigned int index)
{
    vector.erase(vector.begin() + index);
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n)
        cin >> a[i];
    vector<int> b=a;
    sort(b.begin(),b.end());
    rep(i,n){
        if(a[i]!=b[n-1])
            cout << b[n-1] << endl;
        else
            cout << b[n-2] << endl;
    }
    return 0;
}

