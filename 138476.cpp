#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    int count = 0;

    unordered_map<int, int> m;
    int max = 0;
    int second = 0;

    for (int i : tangerine) {
        m[i]++;
    }

    for (int i = 0; i < m.size(); ++i) {
        if (m[i] > max) {
            second = max;
            max = m[i];
        }
    }

    for (auto item : m) {
        if (count >= k) {
            return answer;
        }

        if (item.second == max) {
            answer++;
            count += item.second;
            item.second = 0;
        }
    }

    while (count < k) {
        max--;
        for (auto item : m) {
            if (count >= k) {
                return answer;
            }

            if (item.second == max) {
                answer++;
                count += item.second;
                item.second = 0;
            }
        }
    }

    return answer;
}