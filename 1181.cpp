#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>

using namespace std;

bool isbigger(string a, string b)
{
	if (a.length() != b.length())
		return a.length() < b.length();
	else
		return a < b;
}

int main(void) {

	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	
	string s[20000];
	//vector<string> v;
	//set<string> st;
	//string temp;
	int tcase = 0;

	cin >> tcase;

	for (int i = 0; i < tcase; ++i) {
		cin >> s[i];
		//st.insert(s[i]);
	}

	sort(s, s + tcase, [](string a, string b) -> bool
		{
			if (a.length() == b.length())
				return a < b;
			else
				return a.length() < b.length();
		}
	);

	for (int i = 0; i < tcase; ++i) {
		if (s[i] == s[i + 1]) {
			continue;
		}
		cout << s[i] << "\n";
	}

	//set<string>::iterator iter;
	//for (auto iter = st.begin(); iter != st.end(); iter++) {
	//	//cout << *iter << endl;
	//	v.push_back(*iter);
	//}

	//cout << endl;

	//for (int i = 0; i < v.size() - 1; ++i) {
	//	//cout << v[i] << endl;
	//}

	//cout << endl;

	//for (int i = 0; i < v.size() - 1; ++i) {
	//	//cout << v[i] << endl;
	//	if (v[i].length() > v[i + 1].length()) {
	//		//cout << i << " ";
	//		//cout << v[i] << " ";
	//		//cout << v[i + 1] << endl;
	//		temp = v[i];
	//		v[i] = v[i + 1];
	//		v[i + 1] = temp;
	//		i = -1;
	//	}
	//}

	//cout << endl;

	//for (int i = 0; i < v.size() - 1; ++i) {
	//	//cout << v[i] << endl;
	//	if (v[i].length() > v[i + 1].length()) {
	//		cout << i << " ";
	//		cout << v[i] << " ";
	//		cout << v[i + 1] << endl;
	//		temp = v[i];
	//		v[i] = v[i + 1];
	//		v[i + 1] = temp;
	//		i = 0;
	//	}
	//}

	//cout << endl;

	//for (int i = 0; i < v.size(); ++i) {
	//	cout << v[i] << "\n";
	//}

	//for (int i = 0; i < set.size(); ++i) {
	//	cout << set[i] << endl;
	//}

	//sort(v.begin(), v.end());

	//sort(v.begin(), v.end(), [](string a, string b) -> bool {
	//	if (a.length() != b.length())
	//		return a.length() < b.length();
	//	else
	//		return a < b;
	//});

	//for (int i = 0; i < v.size() - 1; ++i) {
	//	if (v[i] == v[i + 1]) {
	//		v.erase(v.begin() + i, v.begin() + i + 1);
	//	}
	//}

	//for (int i = 0; i < v.size(); ++i) {
	//	cout << v[i] << endl;
	//}
}