#include <iostream>
#include <string>

using namespace std;

void Polyomino(int& countX, string& answer) {

	if (countX % 4 == 0) {
		for (int j = 0; j < countX; ++j) {
			answer += 'A';
		}
	}
	else {
		while (countX > 2) {
			answer += "AAAA";
			countX -= 4;
		}

		answer += "BB";
	}

	countX = 0;

	return;
}

int main(void) {

	string s;
	string answer;

	cin >> s;
	int countX = 0;

	countX = 0;

	for (int i = 0; i < s.length(); ++i) {
		if (s[i] == 'X') {
			countX++;
		}
		else {
			if (countX % 2 != 0 && countX != 0) {
				cout << -1;
				return 0;
			}
			Polyomino(countX, answer);
			answer += '.';
		}
	}

	if (answer.length() != s.length()) {
		if (countX % 2 != 0 && countX != 0) {
			cout << -1;
			return 0;
		}
		Polyomino(countX, answer);
	}

	cout << answer;
}