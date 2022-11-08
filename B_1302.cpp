#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main(void) {

	int n;
	string s;
	vector<int> v;
	cin >> n;

	int max = 0;
	string answer;

	map<string, int> m;
	
	for (int i = 0; i < n; ++i) {
		cin >> s;
		m.insert(make_pair(s, 0));
		if (m.find(s) != m.end()) {
			m.find(s)->second++;
		}
		s.clear();
	}

	for (auto a : m) {
		if (a.second > max) {
			max = a.second;
			answer = a.first;
		}
	}

	cout << answer;
}