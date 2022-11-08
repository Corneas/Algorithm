#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <unordered_map>

using namespace std;

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	int n2;

	unordered_map<string, int> m;

	cin >> n >> n2;

	string* temp = new string[n];

	for (int i = 0; i < n; ++i) {
		string name;
		cin >> name;
		for (int i = 1; i < name.length(); ++i) {
			name[i] = tolower(name[i]);
		}

		temp[i] = name;
		m[name] = i + 1;
	}

	for (int i = 0; i < n2; ++i) {
		string s;
		cin >> s;
		if (s[0] >= 65 && s[0] <= 90) {
			cout << m.find(s)->second << '\n';
		}
		else {
			cout << temp[stoi(s) - 1] << '\n';
		}
	}

}