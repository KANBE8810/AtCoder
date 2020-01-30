#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> win(M), defeat(M);
    vector<vector<char>> table(N,vector<char>(N,'-'));

    for(int i=0; i<M; i++) {
        cin >> win[i] >> defeat[i];
    }

    for(int j=0; j<M; j++) {
        table[win[j]-1][defeat[j]-1] = 'o';
        table[defeat[j]-1][win[j]-1] = 'x';
    }

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            cout << table[i][j];
            if(j==N-1)
                cout << endl;
            else 
                cout << " ";
        }
    }
}
