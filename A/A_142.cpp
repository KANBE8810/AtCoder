#include<iostream>
using namespace std;

int main(){
    int N;
    double ks, ans;
    cin >> N;

    if(N%2==0){
        ans = 0.5;
    }
    else {
        ks=N/2+1;
        ans =ks/N;
    }
    cout << ans << endl;
}
