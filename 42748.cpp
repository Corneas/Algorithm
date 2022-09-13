#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> v1;
    int first = 0;
    int end = 0;
    
    v1.clear();

    for (int i = 0; i < commands.size(); ++i) {
        first = commands[i][0] - 1;
        end = commands[i][1] - 1;

        for (int j = first; j <= end; ++j) {
            v1.push_back(array[j]);
        }

        sort(v1.begin(), v1.end());
        answer.push_back(v1[commands[i][2] - 1]);
        v1.clear();
    }

    return answer;
}

