#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {

	string s;
	cin >> s;
	int word[26];
	int max = 0;
	char result = ' ';

	fill_n(word, 26, 0);
	
	for (int i = 0; i < s.length(); ++i) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			s[i] += 32;
		}
		word[s[i] - 97]++;
	}

	for (int i = 0; i < 26; ++i) {

		if (word[i] > max) {
			max = word[i];
			result = (char)(i + 'A');
		}
		else if (word[i] == max) {
			result = '?';
		}

	}

	cout << result;
}