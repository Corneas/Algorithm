#include <iostream>
#include <vector>

using namespace std;

int main(void) {

	long long P[101] = { 1,1,1,2,2 };

	int t;
	vector<int> v;

	cin >> t;
	
	int max = 0;
	int num = 0;

	for (int i = 0; i < t; ++i) {
		cin >> num;
		if (num > max) {
			max = num;
		}

		v.push_back(num);
	}

	for (int i = 5; i <= max; ++i) {
		P[i] = P[i - 1] + P[i - 5];
	}

	for (int i = 0; i < v.size(); ++i) {
		cout << P[v[i] - 1] << endl;
	}

}