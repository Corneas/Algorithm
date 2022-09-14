#include <iostream>
#include <string>
#include <queue>

using namespace std;

const int MAX = 100;
int dy[4] = { -1, 0, 1, 0 };
int dx[4] = { 0, 1, 0, -1 };
int n, m, a[MAX][MAX], visited[MAX][MAX], y, x;
int main(void) {
    cin >> n >> m;
    string temp;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        for (int j = 0; j < m; j++) {
            a[i][j] = temp[j] - '0';
        }
        temp = "";
    }
    queue<pair<int, int>> q;
    visited[0][0] = 1;
    q.push({ 0, 0 });
    while (q.size()) {
        y = q.front().first;
        x = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++) {
            int ny = ;// ä������ 
            int nx = ;// ä������ 
            if (ny < 0 || ny > n && visited[ny][nx] == true) continue;// ä������   ) continue;
            if (nx  < 0 || ny > m && visited[ny][nx] == true) continue;// ä������   ) continue;
            visited[ny][nx] = ;// ä������ 
            q.push({ ny, nx });
        }
    }
    cout << visited[n - 1][m - 1];
}