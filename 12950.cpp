#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;

    for (int i = 0; i < arr1.size(); i++) { // arr1�� ũ�⸸ŭ �ݺ�
        vector<int> v;                      // v���� ����(2��°�� ��� v�� �ٽ� ���������� �ʱ�ȭ)
        for (int j = 0; j < arr1[0].size(); j++) { // arr1 0��°�� ũ�⸸ŭ �ݺ�
            v.push_back(arr1[i][j] + arr2[i][j]); // arr1�� i��° ��� j��° ���� arr1�� i��° ��� j��° ��
        }
        answer.push_back(v); // answer��� 2���� ���Ϳ� v�� �־���
    }

    return answer;
}