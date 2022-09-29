#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string s;
	string temp;
	int tcase = 0;

	cin >> tcase;
	cin >> s;
	temp = s;

	for (int i = 1; i < tcase; ++i) {
		cin >> s;
		for (int j = 0; j < s.length(); ++j) {
			if (temp[j] != s[j]) {
				temp[j] = '?';
			}
		}

	}

	cout << temp;

}