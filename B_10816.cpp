#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

//int main(void) {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	map<int, int> sCard;
//
//	int len, len2;
//
//	cin >> len;
//	
//	for (int i = 0; i < len; ++i) {
//		int n;
//		cin >> n;
//		sCard[n]++;
//	}
//
//	cin >> len2;
//
//	for (int i = 0; i < len2; ++i) {
//		int n;
//		cin >> n;
//		if (sCard.find(n) != sCard.end()) {
//			cout << sCard.find(n)->second << " ";
//		}
//		else {
//			cout << "0 ";
//		}
//	}
//}

int main(void) {


	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int len;
	int len2;
	vector<int> v;
	vector<int> vCard;

	cin >> len;

	int card;
	for (int i = 0; i < len; ++i) {
		cin >> card;
		v.push_back(card);
	}

	sort(v.begin(), v.end());
	cin >> len2;
	for (int i = 0; i < len2; ++i) {
		cin >> card;
		cout << upper_bound(v.begin(), v.end(), card) - lower_bound(v.begin(), v.end(), card) << " ";
	}
}