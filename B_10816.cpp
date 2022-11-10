#include <iostream>
#include <map>

using namespace std;

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	map<int, int> sCard;

	int len, len2;

	cin >> len;
	
	for (int i = 0; i < len; ++i) {
		int n;
		cin >> n;
		sCard[n]++;
	}

	cin >> len2;

	for (int i = 0; i < len2; ++i) {
		int n;
		cin >> n;
		if (sCard.find(n) != sCard.end()) {
			cout << sCard.find(n)->second << " ";
		}
		else {
			cout << "0 ";
		}
	}
}