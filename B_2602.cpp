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

	// ���� üũ �ݺ�
	for (int j = 0; j < 5; ++j) {

		// ��ǻ��1�� ��ǻ��2�� ����Ǿ� �ְų� ��ǻ��2�� ��ǻ��1�� ����Ǿ� ���� ��� ����(true)
		for (int i = 0; i < connected; ++i) {
			if (computers[v[i].first] && !computers[v[i].second]) {
				computers[v[i].second] = true;
			}
			else if (computers[v[i].second] && !computers[v[i].first]) {
				computers[v[i].first] = true;
			}
		}

		// �������� ��ǻ��1�� ��ǻ��2�� ����Ǿ� �ְų� ��ǻ��2�� ��ǻ��1�� ����Ǿ� ���� ��� ����(true)
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
		// ���� true�� ��� ���̷����� ������ ��ǻ��
		if (computers[i + 1]) {
			answer++;
		}
	}

	cout << answer - 1;
}