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
//    // 필요한 보트 개수
//    int answer = 0;
//
//    // 내림차순 정렬
//    sort(people.rbegin(), people.rend());
//
//    while (!people.empty()) {
//
//        // people의 가장 큰 값이 limit의 절반과 같거나 작을경우 남은 people의 개수의 절반만큼 보트 탑승
//        if (people.front() <= limit / 2) {
//            answer += ceil((people.size() + 1) / 2);
//            break;
//        }
//
//        // point : 가장 무거운사람과 함께 타는 보트가 가장 가벼운사람과 타지 못하면 그 누구도 같이 탈 수 없음
//        
//        // people의 가장 무거운 사람과 가장 가벼운 사람의 무게의 합이 limit보다 작을경우
//        if (people.front() + people.back() <= limit) {
//
//            // 가장 가벼운 사람 보트 탑승
//            people.erase(people.end() - 1);
//        }
//        ++answer;
//
//        // 가장 무거운 사람 보트 탑승
//        people.erase(people.begin());
//    }
//
//    return answer;
//}

// 풀이 아이디어
// 1. people을 내림차순으로 정렬
// 2. people의 가장 큰 값(무게)이 limit의 절반과 같거나 같다면, 남은 사람들끼리 짝을 지어도 무조건 보트에 탑승이 가능하므로 남은 사람의 절반만큼 보트 추가
// 3. people에서 가장 가벼운 사람과 가장 무거운 사람이 무게의 합이 limit보다 작을 경우, 둘이 함께 보트탑승
// 4. 만약 3번의 조건이 해당되지 않는다면, 가장 무거운 사람은 그 누구와 함게 보트를 탈 수 없으므로 혼자서 보트 탑승

// 현재 처한 상황
// 프로그래머스 시간제한 : 약 10초
// 시간초과가 어째서 뜨는가