#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N;
    string S;
    cin >> N >> S;

    for(int i=0; i<S.size(); i++){
        S[i] += N;
        if(S[i]>90)
            S[i] -= 26;
    }

    for(int i=0; i<S.size(); i++){
        cout << S[i];
    }
}
