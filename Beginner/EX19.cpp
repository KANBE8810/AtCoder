#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void saiten(vector<vector<int>> &a, int &correct_count, int &wrong_count) {
    vector<vector<int>> qq(9, vector<int>(9));
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < 10; j++) {
            qq[i-1][j-1] = i*j;
        }
    }

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if(qq[i][j] != a[i][j]){
                a[i][j] = qq[i][j];
                wrong_count++;
            }
        }
    }

    correct_count= 81 - wrong_count;
}

int main() {
    vector<vector<int>> A(9, vector<int>(9));
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> A[i][j];
        }
    }

    int correct_count = 0; 
    int wrong_count = 0;

    saiten(A, correct_count, wrong_count);

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << A[i][j];
            if (j < 8) cout << " ";
            else cout << endl;
        }
    }

    cout << correct_count << endl;
    cout << wrong_count << endl;
}
