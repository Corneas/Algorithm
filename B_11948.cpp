#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {

	int totalScore = 0;

	int phy = 0;
	int che = 0;
	int bio = 0;
	int geos = 0;

	int his = 0;
	int geog = 0;

	vector<int> v1;
	vector<int> v2;

	cin >> phy >> che >> bio >> geos >> his >> geog;

	v1.push_back(phy);
	v1.push_back(che);
	v1.push_back(bio);
	v1.push_back(geos);

	v2.push_back(his);
	v2.push_back(geog);

	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());

	for (int i = 1; i < v1.size(); ++i) {
		totalScore += v1[i];
	}
	totalScore += v2[1];
	cout << totalScore;
}