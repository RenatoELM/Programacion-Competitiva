#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void print(vector<int> A, int n) {
    for (int i = 0; i < n; i++) {
        if (i+1<n && A[i] != A[i + 1]) {
            cout << A[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int c;
    int num;
    int n = 10;
    vector<int> A;
    for (c = 1; c <= n; c++) {
        num = rand() % (10);
        A.push_back(num);
        //cout << A[c] << endl;
    }

    sort(A.begin(), A.end());
    
  
    print(A, 10);


}