#include <iostream>
#include <map>

using namespace std;

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	map<int, int> sCard;

	int len;

	cin >> len;

	for (int i = 0; i < len; ++i) {
		int n;
		cin >> n;
		if (sCard.find(n) != sCard.end()) {
			sCard.find(n)->second++;
		}
		else {
			sCard[n] = 1;
		}
	}

	int len2;
	cin >> len2;

	for (int i = 0; i < len2; ++i) {
		int n;
		cin >> n;
		if (sCard.find(n) != sCard.end()) {
			cout << sCard.find(n)->second;
		}
		else {
			cout << "0";
		}

		cout << " ";
	}


}