#include<iostream>
#include <iomanip>
#include <limits>
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
        ans =(double)ks/(double)N;
    }
    cout << setprecision(10) << ans << endl;
}
