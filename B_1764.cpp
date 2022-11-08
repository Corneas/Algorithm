#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(void) {

	int n;
	int n2;
	int answerCount = 0;

	map<string, string> answer;
	map<string, string> map;

	cin >> n >> n2;

	for (int i = 0; i < n; ++i) {
		string name;
		cin >> name;
		map[name] = name;
	}
	
	for (int i = 0; i < n2; ++i) {
		string name;
		cin >> name;
		if (map.find(name) != map.end()) {
			answerCount++;
			answer[name] = name;
		}
	}

	cout << answerCount << endl;

	for (auto a : answer) {
		cout << a.first << endl;
	}

}