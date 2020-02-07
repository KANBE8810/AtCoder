#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    long long A,B,K=0,ans=0;
    cin >> A >> B;

    if(A>=B)
        K=A;
    else
        K=B;
    for(K; K>1; K--){
        if(A%K==0 && B%K==0)
            break;
    }
    
    K = K*A/K*B/K;

    cout << K << endl;
}
