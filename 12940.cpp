#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
	vector<int> answer;

	int i = 0;
	int j = 0;
	int k = 0;

	i = n;
	j = m;

	while (j != 0) {
		k = i % j;
		i = j;
		j = k;
	}

	answer.push_back(i);
	answer.push_back(n * m / i);

	return answer;

}