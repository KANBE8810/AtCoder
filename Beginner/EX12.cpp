#include <bits/stdc++.h>
using namespace std;

int main() {
    int p=0, m=0;
    int sum=0;
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++){
        if(s.at(i) == '+')
            p++;
        if(s.at(i) == '-')
            m++;
    }

    sum = 1 + p - m;

    cout << sum << endl;
}
