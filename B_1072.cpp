#include <iostream>

using namespace std;

int main(void) {

	//cout << fixed;
	//cout.precision(0);

	long long X;
	long long Y;
	long long Z;
	long long temp;
	int mid = 0;
	int playCount = 0;

	cin >> X >> Y;

	Z = (Y * 100) / X;

	temp = Z;

	if (Z >= 99) {
		cout << "-1";
		return 0;
	}

	int low = 0;
	int high = 1000000000;
	
	while (low <= high) {

		// ÀÌºÐÅ½»ö
		mid = (low + high) / 2;

		temp = (100 * (Y + mid)) / (X + mid);

		if (Z >= temp) {
			playCount = mid + 1;
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}

		cout << "low : " << low << endl;
		cout << "high : " << high << endl;
	}

	cout << playCount;
	return 0;

}