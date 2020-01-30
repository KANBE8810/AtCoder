#include <iostream>
#include <vector>
using namespace std;

int main() {
    int H, N;
    cin >> H >> N;
    vector<int> S(N);

    for(int i=0; i<N; i++){
        cin >> S[i];
    }

    for(int i=0; i<N; i++){
        H -= S[i];
    }

    if(H <= 0){
        cout << "Yes" << endl;
    } else
        cout << "No" << endl;
}
