#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    int sum=0;
    int ans=0;
    cin >> N;
    vector<int> S(1000);
    vector<int> A(1000);

    for(int i=0; i<N; i++){
        cin >> S[i];
        sum += S[i];
    }

    ans = sum / N;

    for(int i=0; i<N; i++){
        A[i] = S[i] - ans;
        if(A[i] < 0)
            A[i] = A[i] * -1;
        cout << A[i] <<endl;
    }
}
