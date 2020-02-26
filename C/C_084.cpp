#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<utility>
#include<iomanip>
#include<map>
#include<cmath>
#include<cstdio>
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll =long long;
using P = pair<int,int>;

int main(){

    double N,Y;
    cin >> N >> Y;
    vector<double> M(3,0);
    M[0]=10000; M[1]=5000; M[2]=1000;

    for(int x=0; x <= N; x++){
        for(int y=0; y <= (N-x); y++){
            for(int z=N-x-y; z <= (N-x-y); z++){
                if(M[0]*z + M[1]*y + M[2]*x == Y && x+y+z==N){
                    cout << z << " " << y << " " << x << endl; 
                    return 0;
                }
            }
        }
    }
    cout << "-1 -1 -1" << endl;
    return 0;
}
