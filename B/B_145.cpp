#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, flag=0;
    string S;
    cin >> N >> S;

    if(N <= 1) {
        cout << "No" << endl;
        return 0;
    }

    if(N%2 != 0){
        cout << "No" << endl;
        return 0;
    }
    else 
        for(int i=0; i<N/2; i++){
            if(S[i] != S[N/2+i])
                flag++;
        }

    if(flag != 0)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;

}
