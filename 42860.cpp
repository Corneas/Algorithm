#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string name) {
    int answer = 0;

    int len = name.length();

    // 조이스틱의 방향을 반대로 바꿨을 때의 위치
    int back = len - 1;

    for (int i = 0; i < len; ++i) {
        if (name[i] - 'A' < 14) {
            answer += name[i] - 'A';
        }
        else {
            answer += 'Z' - name[i] + 1;
        }

        // 현재 위치의 다음으로부터 A가 나올때까지의 거리
        int index = i + 1;
        while (index < len && name[index] == 'A') {
            index++;
        }

        // 현재 위치
        int a = i;
        // 원점에서 방향을 바꾼 후 A까지의 거리
        int b = len - index;

        // 원점 -> i -> 원점 -> index
        // a -> a -> b
        // 원점 -> index -> 원점 -> i
        // b -> b -> a

        back = min(back, min(2 * a + b, a + 2 * b));
    }

    answer += back;
    return answer;
}