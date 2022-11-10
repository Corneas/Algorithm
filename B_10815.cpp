#include <iostream>
#include <set>

using namespace std;

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	set<int> sCard;

	int len;
	
	cin >> len;

	for (int i = 0; i < len; ++i) {
		int n;
		cin >> n;
		sCard.insert(n);
	}

	int len2;
	cin >> len2;

	for (int i = 0; i < len2; ++i) {
		int n;
		cin >> n;
		if (sCard.find(n) != sCard.end()) {
			cout << "1 ";
		}
		else {
			cout << "0 ";
		}
	}


}