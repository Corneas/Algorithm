#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;

    //점 S(lux, luy)에서 점 E(rdx, rdy)로 드래그를 할 때, "드래그 한 거리"는 |rdx - lux| + |rdy - luy|로 정의합니다.

    int x = wallpaper[0].length();
    int y = wallpaper.size();

    int minDis = 2147483647;
    int maxDis = 0;

    int minLine = 2147483647;
    int maxLine = 0;

    for (int i = 0; i < wallpaper.size(); ++i) {
        for (int j = 0; j < wallpaper[i].length(); ++j) {
            if (wallpaper[i][j] == '#') {
                minLine = min(minLine, i);
                maxLine = max(maxLine, i + 1);

                minDis = min(minDis, j);
                maxDis = max(maxDis, j + 1);
            }
        }
    }

    answer.push_back(minLine);
    answer.push_back(minDis);
    answer.push_back(maxLine);
    answer.push_back(maxDis);

    return answer;
}