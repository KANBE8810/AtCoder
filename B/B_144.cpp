#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N, flag=0;
    vector<int> box(9);
    cin >> N;

    for(int i=1; i<10; i++){
        if(N/i < 10 && N%i == 0){
            cout << "Yes" <<endl;
            return 0;
        }
    }
    cout << "No" << endl;
}
