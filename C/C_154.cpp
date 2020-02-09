#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<utility>
using namespace std;

int main(){
    long long N;
    cin >> N;
    vector<long long> S(N);

    for(long long i=0; i<N; i++){
        cin >> S[i];
    }

    sort(S.begin(),S.end());

    for(long long i=1; i<N; i++){
        if(S[i] == S[i-1]){
            cout << "NO"<< endl;
            return 0;
        }
    }

    cout << "YES" << endl;
}

