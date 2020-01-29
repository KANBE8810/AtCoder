#include <cassert>
#include <iostream>
#include <string>
#include <functional>
#include <algorithm>
using namespace std;

int main() {
    int A,B,C;
    int Max,Min;
    cin >> A >> B >> C;
    
    Min = min(A,B);
    Max = max(A,B);
    Min = min(C, Min);
    Max = max(C, Max);

    cout << Max -Min << endl;
}

