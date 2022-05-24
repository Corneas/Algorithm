#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;

    for (int i = 0; i < arr1.size(); i++) { // arr1의 크기만큼 반복
        vector<int> v;                      // v벡터 선언(2번째일 경우 v를 다시 선언함으로 초기화)
        for (int j = 0; j < arr1[0].size(); j++) { // arr1 0번째의 크기만큼 반복
            v.push_back(arr1[i][j] + arr2[i][j]); // arr1의 i번째 행과 j번째 열과 arr1의 i번째 행과 j번째 열
        }
        answer.push_back(v); // answer라는 2차원 벡터에 v를 넣어줌
    }

    return answer;
}