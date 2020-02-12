#include<iostream>
using namespace std;

int main(){
    int n,c=0;
    cin >> n;

    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            for(int k=0; k<n; ++k){
                c++;
            }
        }
    }

    cout << c << endl;

    return 0;
}
