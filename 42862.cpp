#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;

    int students[31] = { 0 };

    for (int i = 0; i < n; ++i) {
        students[i] = 1;
    }

    for (int i = 0; i < reserve.size(); ++i) {
        students[reserve[i] - 1] += 1;
    }
    for (int i = 0; i < lost.size(); ++i) {
        students[lost[i] - 1] -= 1; // �Ҿ������ 0 
    }

    // ù��° �л� ó��
    if (students[0] == 0) {
        if (students[1] > 1) {
            students[0] = 1;
            students[1] = 1;
        }
    }

    // �ջ���� ���� ���� üũ
    for (int i = 1; i < n; ++i) {
        if (students[i] == 0) {
            if (students[i - 1] > 1) {
                students[i] = 1;
                students[i - 1] = 1;
            }
            else if (students[i + 1] > 1) {
                students[i] = 1;
                students[i + 1] = 1;
            }
        }
    }

    // �޻���� ���� ���� üũ
    for (int i = 1; i < n; ++i) {
        if (students[i] == 0) {
            if (students[i + 1] > 1) {
                students[i] = 1;
                students[i + 1] = 1;
            }
            else if (students[i - 1] > 1) {
                students[i] = 1;
                students[i - 1] = 1;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        if (students[i] > 0) {
            answer++;
        }
    }

    return answer;
}