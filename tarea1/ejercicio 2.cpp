#include <vector>
#include <iostream>

using namespace std;
typedef long long ll;

int main()
{
    vector<int> pi;
    pi = { 1,4,1,5,9,2,6,5,3,5,8,9,7,9,3,2,3,8,4,6 };
    int n;
    cin >> n;
    cout << "3.";
    for (int i = 0; i < n; i++) {
        int a = pi[i];
        if (i == n - 1) {
            if (pi[i + 1] >= 5) a++;
        }
        cout << a;
    }
}
