#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int pDictionary = 0;
	int search = 0;

	cin >> pDictionary >> search;

	unordered_map<string, int> map;
	unordered_map<int, string> map2;

	for (int i = 0; i < pDictionary; ++i) {
		string name;
		cin >> name;
		map[name] = i + 1;
		map2[i + 1] = name;
	}

	for (int i = 0; i < search; ++i) {

		string name;
		cin >> name;

		if (name[0] >= 65 && name[0] <= 90) {
			cout << map[name] << '\n';
		}
		else {
			cout << map2[stoi(name)] << '\n';
		}

	}



}