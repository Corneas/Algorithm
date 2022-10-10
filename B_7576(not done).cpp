#include <iostream>
#include <vector>
#include <queue>

const int MAX = 1000;

using namespace std;

int h;
int v;
int farm[MAX][MAX];
bool visited[MAX][MAX];

int dx[4] = { 0, -1, 0, 1 };
int dy[4] = { 1, 0, -1, 0 };

vector<pair<int, int>> vec;

int tomato = 0;
int numTomato = 0;

void CheckTomato(int x, int y);

int main(void) {
	int day = 0;
	int c = 0;
	cin >> h >> v;

	for (int y = 0; y < h; ++y) {
		for (int x = 0; x < v; ++x) {
			cin >> farm[y][x];
			visited[y][x] = false;
			
			if (farm[y][x] == 0) {
				++numTomato;
			}
			else if (farm[y][x] == 1) {
				vec.push_back(make_pair(x,y));
			}
		}
	}


	while (c < vec.size()) {
		int x = vec[c].first;
		int y = vec[c].second;
		c++;

		if (farm[y][x] > 0 && !visited[y][x]) {
			CheckTomato(x, y);
		}

		day = farm[y][x];
	}

	if (tomato == numTomato) {
		cout << day - 1;
	}
	else {
		cout << -1;
	}
}

void CheckTomato(int x, int y) {
	visited[y][x] = true;

	for (int i = 0; i < 4; ++i) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx < 0 || ny < 0 || ny >= h || nx >= v) {
			continue;
		}

		if (!visited[ny][nx] && farm[ny][nx] == 0) {
			tomato++;
			farm[ny][nx] = farm[y][x] + 1;
			vec.push_back(make_pair(nx, ny));
		}
	}
}