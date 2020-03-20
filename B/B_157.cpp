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
    vector<vector<int>> data(3, vector<int>(3));
    vector<vector<int>> ans(3, vector<int>(3));
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> data[i][j];
        }
    }
    int n;
    cin >> n;
    vector<int> A(n);
    rep(i,n) cin >> A[i];

    rep(i,n){
        for(int k=0;k<3;k++){
            for(int j=0;j<3;j++){
                if(A[i] == data[k][j]){
                    ans[k][j]=1;
                }
            }
        }
    }

    for(int i=0;i<3;i++){
        if(ans[i][0] == 1 &&ans[i][1]==1 && ans[i][2] ==1){
            cout << "Yes"<< endl;
            return 0;
        }
        if(ans[0][i] == 1 &&ans[1][i]==1 && ans[2][i] ==1){
            cout << "Yes"<< endl;
            return 0;
        }
        if(i==0 && ans[0][0] == 1 && ans[1][1] == 1 && ans[2][2]==1){
            cout << "Yes"<< endl;
            return 0;
        }
        if(i==2 && ans[2][0] == 1 && ans[1][1] == 1 && ans[0][2]==1){
            cout << "Yes"<< endl;
            return 0;
        }
    }
    cout << "No"<< endl;

    return 0;
}
