#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N,j=0,sum=0;
    cin >> N;
    vector<int> aj(N);

    for(int i=0; i<N; i++)
        cin >> aj[i];

    for(int i=0; i<N; i++){
        for(j; j<N; j++){
            if(i!=j)
            sum+=aj[i]*aj[j];
        }
        j=i+1;
    }
    cout << sum <<endl;
}
