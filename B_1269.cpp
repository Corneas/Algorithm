#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;

int main(void) {

    map<int, int> A;
    map<int, int> B;

    int a = 0;
    int b = 0;

    cin >> a >> b;

    int num;
    for (int i = 0; i < a; ++i) {
        cin >> num;
        A[i] = num;
    }

    for (int i = 0; i < b; ++i) {
        cin >> num;
        B[i] = num;
    }

    int temp = a;

    for (int i = 0; i < b; ++i) {
        if (A.find(B[i]) != A.end()) {
            --a;
        }
    }

    for (int i = 0; i < temp; ++i) {
        if (B.find(A[i]) != B.end()) {
            --b;
        }
    }

    cout << a + b;

}