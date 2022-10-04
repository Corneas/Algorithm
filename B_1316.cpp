#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void) {
	string word;
	int count;
	int answer = 0;
	int words = 0;

	cin >> count;

	for (int c = 0; c < count; ++c) {
		cin >> word;
		words = 0;
		vector<int> v(26);

		if (word.length() == 1) {
			answer++;
			continue;
		}

		for (int i = 0; i < word.length(); ++i) {
			if (i != word.length() && word[i] == word[i + 1]) {
				continue;
			}
			else {
				v[word[i] - 'a']++;
			}
		}

		word = "";

		for (auto i : v) {
			if (i >= 2) {
				words++;
			}
		}

		if (words > 0) {
			continue;
		}
		else {
			answer++;
		}
	}

	cout << answer;
}