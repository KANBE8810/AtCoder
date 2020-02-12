#include<iostream>
#include<vector>
using namespace std;

int main(){
    string T;
    cin >> T;

    for(int i=0; i<T.size(); i++){
        if(i%2==0 && T.at(i)=='L'){
            cout << "No" << endl;
            return 0;
        }
        if(i%2!=0 && T.at(i)=='R'){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
