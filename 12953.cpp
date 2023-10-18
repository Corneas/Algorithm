#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int answer = 1;
    int index = 0;

    vector<int> measure;

    for (int i = 0; i < arr.size(); ++i) {

        if (arr[i] < 4) {
            measure.push_back(arr[i]);
            continue;
        }

        for (int j = 2; j * j <= arr[i]; ++j) {
            if (arr[i] % j == 0) {
                measure.push_back(j);
                break;
            }
        }

    }

    while (true) {

        for (int i = 0; i < arr.size(); ++i) {
            if (i == arr.size() - 1 && answer % arr[i] == 0) {
                return answer;
            }

            if (answer % arr[i] != 0) {
                break;
            }
        }

        answer *= arr[index % 3];
        index++;
    }
    
    return answer;
}