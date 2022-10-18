    #include <string>
    #include <vector>
    #include <math.h>
    #include <iostream>

    using namespace std;

    vector<int> solution(int brown, int yellow) {
        vector<int> answer;
        vector<int> v;

        int size = brown + yellow;
        int m = 0;
        int n = 0;


        for (int i = 1; i <= size; ++i) {
            if (size % i == 0) {
                v.push_back(i);
                cout << i << endl;
            }
        }

        if (v.size() % 2 != 0) {
            for (int i = 0; i < 2; ++i) {
                answer.push_back(sqrt(size));
            }
        }
        else {
            for (int i = 0; i < v.size() / 2; ++i) {
                for (int j = v.size(); j > 0; --j) {
                    if ((v[j] - 2) * (v[i] - 2) == yellow) {
                        answer.push_back(v[j]);
                        answer.push_back(v[i]);
                        break;
                    }
                }
            }
        }

        return answer;
    }