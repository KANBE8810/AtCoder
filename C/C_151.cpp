#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<utility>
using namespace std;

int main(){
    long long N,M,ac=0,wa=0;
    cin >> N >> M;
    vector<pair<long long, string>> S(M);
    vector<long long> A(N,0);
    vector<long long> W(N,0);

    for(long long i=0; i<M; i++){
        cin >> S[i].first >> S[i].second;
    }
    for(long long i=0; i<M; i++){
        if(S[i].second != "AC" && A[S[i].first-1] == 0)
            W[S[i].first-1]++;
        if(S[i].second == "AC" && A[S[i].first-1] == 0){
            wa+=W[S[i].first-1];
            ac++;
            A[S[i].first-1]=1;
        }
    }
    cout << ac << " " << wa << endl;
}
