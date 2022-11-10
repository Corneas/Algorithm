#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_set>

using namespace std;

#pragma region map
//int main(void) {
//
//	int n;
//	int n2;
//	// ������ ������ ����� ����
//	int answerCount = 0;
//
//	map<string, string> answer;
//	map<string, string> map;
//
//	cin >> n >> n2;
//
//	for (int i = 0; i < n; ++i) {
//		string name;
//		cin >> name;
//		// map�� �赵���� ��� ����
//		map[name] = name;
//	}
//
//	for (int i = 0; i < n2; ++i) {
//		string name;
//		cin >> name;
//		// �������� ����� �赵���� ����� �ִٸ� answer�� ����
//		if (map.find(name) != map.end()) {
//			answerCount++;
//			answer[name] = name;
//		}
//	}
//
//	cout << answerCount << endl;
//
//	for (auto a : answer) {
//		cout << a.first << endl;
//	}
//
//}
#pragma endregion

#pragma region set

//int main(void) {
//
//	int n;
//	int n2;
//	int answerCount = 0;
//
//	cin >> n >> n2;
//
//	set<string> s;
//	set<string> answer;
//
//	for (int i = 0; i < n; ++i) {
//		string name;
//		cin >> name;
//		s.insert(name);
//	}
//
//	for (int i = 0; i < n2; ++i) {
//		string name;
//		cin >> name;
//		if (s.find(name) != s.end()) {
//			answerCount++;
//			answer.insert(name);
//		}
//	}
//
//	cout << answerCount << endl;
//
//	for (auto a : answer) {
//		cout << a << endl;
//	}
//
//}

#pragma endregion

#pragma region unordered_set

int main(void) {

	int n;
	int n2;
	int answerCount = 0;

	cin >> n >> n2;

	unordered_set<string> s;
	unordered_set<string> answer;

	for (int i = 0; i < n; ++i) {
		string name;
		cin >> name;
		s.insert(name);
	}

	for (int i = 0; i < n2; ++i) {
		string name;
		cin >> name;
		if (s.find(name) != s.end()) {
			answerCount++;
			answer.insert(name);
		}
	}

	cout << answerCount << endl;

	for (auto a : answer) {
		cout << a << endl;
	}

}

#pragma endregion
