#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;
    string T,S;
    cin >> T >> S;

    for(int i=0; i<N; i++){
        cout << T[i] << S[i];
    }

}
