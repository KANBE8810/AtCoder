#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    long long N, MIN=0,co=0;
    cin >> N;
    vector<long long> P(N);

    for(int i=0; i<N; i++)
        cin >> P[i];

    MIN = P[0];

    for(int i=1; i<N; i++){
        MIN = min(P[i], MIN);
        if(MIN < P[i])
            co++;
    }

    cout << N-co << endl;
}
