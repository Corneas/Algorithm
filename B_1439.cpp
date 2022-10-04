#include <iostream>
#include <string>
#include <vector>

using namespace std;

int ChangeNumber(int n, string& s) {

	int change = 0;

	for (int i = 0; i < s.length(); ++i) {
		if (s[i] == n + '0') {
			if (s[i + 1] != n + '0') {
				change++;
			}
		}
	}

	return change;
}

int main(void) {

	string s;
	cin >> s;

	int num0 = 0;
	int num1 = 0;
	int answer = 0;

	num0 = ChangeNumber(1, s);
	num1 = ChangeNumber(0, s);

	answer = num0 < num1 ? num0 : num1;

	cout << answer;
}