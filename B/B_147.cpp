#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int a=0;
    string S;
    cin >> S;
    int size = S.size();

    if(size %2 == 0){
        for(int i=0; i<size; i++){
            if(S[i] != S[size-i-1]){
                S[i] = S[size-i-1];
                a++;
            }
        }
    } 
    if(size %2 ==1){
        for(int i=0; i<size; i++){
            if(i == size / 2){
                i++;
                break;
            }
            if(S[i] != S[size-i-1]){
                S[i] = S[size-i-1];
                a++;
            }
        }
    }

        cout << a << endl;
}
