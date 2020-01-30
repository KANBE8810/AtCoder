#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    if(a >= b){
        for(int i =0; i<a; i++){
            cout << b;
        }
    }

    if(b > a){
        for(int i =0; i<b; i++){
            cout << a;
        }
    }

}
