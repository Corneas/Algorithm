#include <iostream>

using namespace std;

int dy[4] = { -1, 0, 1, 0 };
int dx[4] = { 0, 1, 0, -1 };
int m, n, k, y, x, ret, ny, nx, t;
int a[51][51];
bool visited[51][51];

void dfs(int y, int x) {
	visited[y][x] = 1;
	for (int i = 0; i < 4; ++i) {
		ny = y + dy[i];
		nx = x + dx[i];
		if (visited[ny][nx]) continue;
		if (a[ny][nx] && !visited[ny][nx]) {
			dfs(ny, nx);
		}
	}
}

int main(void) {
	cin >> t;
	while (t--) {
		fill_n(a[0], 51 * 51, 0);
		fill(&visited[0][0], &visited[0][0] + 51 * 51, 0);
		ret = 0;
		cin >> m >> n >> k;
		for (int i = 0; i < k; ++i) {
			cin >> x >> y;
			a[y][x] = 1;
		}
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				if (a[i][j] && !visited[i][j]) {
					dfs(i, j);
					ret++;
				}
			}
		}

		cout << ret << endl;
	}
}