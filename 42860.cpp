#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string name) {
    int answer = 0;

    int len = name.length();

    // ���̽�ƽ�� ������ �ݴ�� �ٲ��� ���� ��ġ
    int back = len - 1;

    for (int i = 0; i < len; ++i) {
        if (name[i] - 'A' < 14) {
            answer += name[i] - 'A';
        }
        else {
            answer += 'Z' - name[i] + 1;
        }

        // ���� ��ġ�� �������κ��� A�� ���ö������� �Ÿ�
        int index = i + 1;
        while (index < len && name[index] == 'A') {
            index++;
        }

        // ���� ��ġ
        int a = i;
        // �������� ������ �ٲ� �� A������ �Ÿ�
        int b = len - index;

        // ���� -> i -> ���� -> index
        // a -> a -> b
        // ���� -> index -> ���� -> i
        // b -> b -> a

        back = min(back, min(2 * a + b, a + 2 * b));
    }

    answer += back;
    return answer;
}