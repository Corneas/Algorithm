#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {

	string s;
	int i = 0;

	int a[100];
	fill_n(a, 100, 0);

	while (true) {

		getline(cin, s);

		for (int l = 0; l < s.length(); ++l) {
			s[l] = tolower(s[l]);
			if (s[l] == 'a' || s[l] == 'e' || s[l] == 'i' || s[l] == 'o' || s[l] == 'u') {
				a[i]++;
			}
		}

		if (s[0] == '#') {
			break;
		}

		++i;
		s = "";
	}

	for (int j = 0; j < i; ++j) {
		cout << a[j] << endl;
	}
}