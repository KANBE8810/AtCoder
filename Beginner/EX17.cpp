#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int N, S;
    int a=0;
    cin >> N >> S;
    vector<int> A(N), P(N);

    for(int i=0; i<N; i++) {
        cin >> A[i];
    }

    for(int i=0; i<N; i++) {
        cin >> P[i];
    }

    for(int i=0; i<N; i++) {
        for(int k=0; k<N; k++) {
            if(S == A[i] + P[k])
                a++;
        }
    }

    cout << a <<endl;
}
