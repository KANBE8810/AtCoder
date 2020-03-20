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
    string x;
    cin >> x;
    int n[4];
    for(int i=0; i<4; i++) {
        n[i] = (int)(x[i] - '0');
    }
    int a = n[0]*10 + n[1];
    int b = n[2]*10 + n[3];
    if(a <= 12 && b <= 12 && a != 0 && b != 0){
        cout << "AMBIGUOUS" << endl;
        return 0;
    } else if(a == 0 && b <= 12 && b != 0){
        cout << "YYMM" << endl;
        return 0;
    } else if(a > 12 && b <= 12 && b != 0){
        cout << "YYMM" << endl;
        return 0;
    } else if(a <= 12 && b == 0 && a != 0){
        cout << "MMYY" << endl;
        return 0;
    } else if(a <= 12 && b > 12 && a != 0){
        cout << "MMYY" << endl;
        return 0;
    } else
        cout << "NA" << endl;
    return 0;
}
