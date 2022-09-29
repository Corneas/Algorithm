#include <iostream>

using namespace std;

int main(void) {
	int L = 0;
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;

	cin >> L >> A >> B >> C >> D;

	while (A > 0 || B > 0) {
		if (A - C <= 0) {
			A = 0;
		}
		else {
			A -= C;
		}

		if (B - D <= 0) {
			B = 0;
		}
		else {
			B -= D;
		}

		L--;
	}

	cout << L;
}