#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<utility>
using namespace std;

int main(){
    string A, B,X;
    cin >> A >> B;
    int a,b;
    cin >> a >>b;
    cin >> X;


    if(X==A)
        a--;
    if(X==B)
        b--;

    cout << a << " " << b;

}
