#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    long long N,K,sum=0;
    cin >> N >> K;
    vector<int> HP(N);

    for(int i=0; i<N; i++){
        cin >> HP[i];
    }

    sort(HP.begin(),HP.end());

    for(int i=0; i<N-K; i++){
        sum+=HP[i];
    }

    cout << sum << endl;
}
