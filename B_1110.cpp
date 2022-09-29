#include <iostream>

using namespace std;

int main(void) {

	int n = 0;
	int temp = 0;
	int a = 0;
	int b = 0;
	int result = 0;
	int number = 0;
	int cycle = 0;

	cin >> n;
	temp = n;
	cycle++;

	a = temp % 10;		
	temp /= 10;
	if (temp + a < 10) {
		b = temp + a;
	}
	else {
		b = (temp + a) % 10;
	}		
	result = a * 10 + b;

	while (result != n) {
		temp = result;

		a = temp % 10;
		temp /= 10;
		if (temp + a < 10) {
			b = temp + a;
		}
		else {
			b = (temp + a) % 10;
		}
		result = a * 10 + b;
		++cycle;
	}

	cout << cycle;

}