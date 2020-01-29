#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int N;
    int Asum=0, Bsum=0, Csum=0;
    vector<int> A(100);
    vector<int> B(100);
    vector<int> C(100);

    cin >> N;

    for(int i=0; i<N; i++){
        cin >> A[i];
        Asum += A[i];
    }

    for(int i=0; i<N; i++){
        cin >> B[i];
        Bsum += B[i];
    }

    for(int i=0; i<N; i++){
        cin >> C[i];
        Csum += C[i];
    }

    cout << Asum * Bsum * Csum <<endl;
}
