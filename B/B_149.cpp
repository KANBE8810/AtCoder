#include <iostream>
using namespace std;

int main(){
    long long K, A, B;
    cin >> A >> B >> K;

    if(K < A+B) {
        if(A < K)
            cout << "0" << " " << A+B-K << endl;
        else
            cout << A-K << " " << B << endl;   
    } else 
        cout << "0" << " " << "0" << endl;
}

