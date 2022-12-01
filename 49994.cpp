#include <string>
#include <iostream>
#include <vector>

using namespace std;

bool xy[12][12] = { {false, false} };

int solution(string dirs) {
    int answer = 0;
    
    int px = 5;
    int py = 5;
    int lx = px;
    int ly = py;
    int nx = px;
    int ny = py;

    for (int i = 0; i < dirs.length(); ++i) {

        if (px < 0 || px > 10 || py < 0 || py > 10) {
            continue;
        }

        if (dirs[i] == 'U') {
            ny = py + 1;
            if (ny != ly) {
                if (xy[ny][nx]) {
                    if (!xy[py][px]) {
                        answer++;
                    }
                }
                else {
                    answer++;
                }
            }
        }
        else if (dirs[i] == 'D') {
            ny = py - 1;
            if (ny != ly) {
                if (xy[ny][nx]) {
                    if (!xy[py][px]) {
                        answer++;
                    }
                }
                else {
                    answer++;
                }
            }
        }
        else if (dirs[i] == 'L') {
            nx = px - 1;
            if (nx != lx) {
                if (xy[ny][nx]) {
                    if (!xy[py][px]) {
                        answer++;
                    }
                }
                else {
                    answer++;
                }
            }
        }
        else if (dirs[i] == 'R') {
            nx = px + 1;
            if (nx != lx) {
                if (xy[ny][nx]) {
                    if (!xy[py][px]) {
                        answer++;
                    }
                }
                else {
                    answer++;
                }
            }
        }

        xy[py][px] = true;
        lx = px;
        ly = py;
        px = nx;
        py = ny;

        cout << "현재좌표 : (" << px - 5 << ", " << py - 5 << ")" << endl;
        cout << i << "번째 : " << answer << "회" << endl;

    }


    return answer;
}

int main(void) {

    string s;
    cin >> s;

    cout << solution(s);
}