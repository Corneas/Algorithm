#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int a = 0;
	int b = 0;
	int n = 0;
	int temp = 0;
	int answer = 0;

	cin >> a >> b >> n;

	temp = a;
	for (int i = 0; i < n; ++i) {
		temp %= b;
		temp *= 10;
	}
	answer = temp / b;

	cout << answer;

}