#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool computers[101] = { 0 };

int main(void) {

	int answer = 0;
	vector<pair<int, int>> v;

	computers[1] = true;

	int computerCount = 0;
	int connected = 0;

	cin >> computerCount;
	cin >> connected;

	int con1;
	int con2;

	for (int i = 0; i < connected; ++i) {
		cin >> con1 >> con2;
		v.push_back(make_pair(con1, con2));

		//if (computers[con1] && !computers[con2]) {
		//	computers[con2] = true;
		//}
	}

	sort(v.begin(), v.end());

	// 감염 체크 반복
	for (int j = 0; j < 5; ++j) {

		// 컴퓨터1이 컴퓨터2에 연결되어 있거나 컴퓨터2가 컴퓨터1에 연결되어 있을 경우 감염(true)
		for (int i = 0; i < connected; ++i) {
			if (computers[v[i].first] && !computers[v[i].second]) {
				computers[v[i].second] = true;
			}
			else if (computers[v[i].second] && !computers[v[i].first]) {
				computers[v[i].first] = true;
			}
		}

		// 역순으로 컴퓨터1이 컴퓨터2에 연결되어 있거나 컴퓨터2가 컴퓨터1에 연결되어 있을 경우 감염(true)
		for (int i = connected - 1; i > 0; --i) {
			if (computers[v[i].second] && !computers[v[i].first]) {
				computers[v[i].first] = true;
			}
			else if (computers[v[i].first] && !computers[v[i].second]) {
				computers[v[i].second] = true;
			}
		}
	}

	for (int i = 0; i < computerCount; ++i) {
		// 만약 true일 경우 바이러스에 감염된 컴퓨터
		if (computers[i + 1]) {
			answer++;
		}
	}

	cout << answer - 1;
}