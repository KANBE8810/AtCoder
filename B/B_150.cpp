#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    int count=0;
    cin >> N;

    string S;
    cin >> S;

    for(int i=0; i<N-2; i++){
        if(S[i]=='A' && S[i+1]=='B' && S[i+2]=='C')
            count++;
    }

    cout << count << endl;
}
