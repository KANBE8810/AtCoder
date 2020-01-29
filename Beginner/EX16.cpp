#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> data(5);

    for(int i=0; i<5; i++){
        cin >> data.at(i);
    }

    for(int i=1; i<6; i++){
        if(data[i] == data[i-1]){
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
}


