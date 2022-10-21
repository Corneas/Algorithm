#include <vector>
#include <algorithm>
#include <iostream>
#include <math.h>
#include <deque>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    deque<int> dq;

    for (int i = 0; i < people.size(); ++i) {
        dq.push_back(people[i]);
    }

    sort(dq.rbegin(), dq.rend());

    while (!dq.empty()) {

        if (dq.front() <= limit / 2) {
            answer += ceil((dq.size() + 1) / 2);
            break;
        }

        if (dq.front() + dq.back() <= limit) {
            dq.pop_back();
        }
        ++answer;
        dq.pop_front();
    }

    return answer;
}
//
//int solution(vector<int> people, int limit) {
//
//    // �ʿ��� ��Ʈ ����
//    int answer = 0;
//
//    // �������� ����
//    sort(people.rbegin(), people.rend());
//
//    while (!people.empty()) {
//
//        // people�� ���� ū ���� limit�� ���ݰ� ���ų� ������� ���� people�� ������ ���ݸ�ŭ ��Ʈ ž��
//        if (people.front() <= limit / 2) {
//            answer += ceil((people.size() + 1) / 2);
//            break;
//        }
//
//        // point : ���� ���ſ����� �Բ� Ÿ�� ��Ʈ�� ���� ���������� Ÿ�� ���ϸ� �� ������ ���� Ż �� ����
//        
//        // people�� ���� ���ſ� ����� ���� ������ ����� ������ ���� limit���� �������
//        if (people.front() + people.back() <= limit) {
//
//            // ���� ������ ��� ��Ʈ ž��
//            people.erase(people.end() - 1);
//        }
//        ++answer;
//
//        // ���� ���ſ� ��� ��Ʈ ž��
//        people.erase(people.begin());
//    }
//
//    return answer;
//}

// Ǯ�� ���̵��
// 1. people�� ������������ ����
// 2. people�� ���� ū ��(����)�� limit�� ���ݰ� ���ų� ���ٸ�, ���� ����鳢�� ¦�� ��� ������ ��Ʈ�� ž���� �����ϹǷ� ���� ����� ���ݸ�ŭ ��Ʈ �߰�
// 3. people���� ���� ������ ����� ���� ���ſ� ����� ������ ���� limit���� ���� ���, ���� �Բ� ��Ʈž��
// 4. ���� 3���� ������ �ش���� �ʴ´ٸ�, ���� ���ſ� ����� �� ������ �԰� ��Ʈ�� Ż �� �����Ƿ� ȥ�ڼ� ��Ʈ ž��

// ���� ó�� ��Ȳ
// ���α׷��ӽ� �ð����� : �� 10��
// �ð��ʰ��� ��°�� �ߴ°�