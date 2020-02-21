#include<iostream>
#include<vector>
using namespace std;

int main(){
    int ct=0;
    string a,b;

    cin >> a >> b;

    for(int i=0; i<3; i++){
        if(b[i]==a[i])
            ct++;
    }

    cout << ct << endl;
}
