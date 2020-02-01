#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*int count_report_num(vector<vector<int>> &children, int x) {
  for(int c : childeren[x]){

  }
  }*/

int main(){
    int N;
    cin >> N;

    vector<int> p(N);  
    p[0] = -1;  

    for (int i = 1; i < N; i++) {
        cin >> p[i];
    }

    vector<vector<int>> children(N); 

    for (int i = 1; i < N; i++) {
        int parent = p[i]; 
        children[parent].push_back(i); 
    }

    for (int i = 0; i < N; i++) {
        for(int j=0; j<N; j++){
            cout << children[i][j] << endl;
        }
    }
    /*  for (int i = 0; i < N; i++) {
        cout << count_report_num(children, i) << endl;
        }*/
}
