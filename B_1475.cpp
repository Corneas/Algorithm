#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void) {
	int roomNumber;
	vector<float> v;
	string s;
	int max = 0;
	cin >> roomNumber;

	for (int i = 0; i < 10; ++i) {
		v.push_back(0);
	}

	s = to_string(roomNumber);

	for (int i = 0; i < s.length(); ++i) {
		v[s[i] - '0']++;
	}

	v[6] = (v[6] + v[9]) / 2 + 0.5;

	for (int i = 0; i < 9; ++i) {
		if (v[i] > max) {
			max = v[i];
		}
	}

	cout << max;
}