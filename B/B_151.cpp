#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N, K, M, T =0, H;
    cin >> N >> K >> M;
    vector<int> score(N);

    for(int i=0; i<N-1; i++){
        cin >> score[i];
        T += score[i];
    }

    H = M*N -T;

    if(H <= K){
        if(H < 0){
            cout << 0 << endl;
        } else
            cout << H << endl;
    } else
        cout << -1 << endl;
}
