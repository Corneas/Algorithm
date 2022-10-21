#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {

	int answer = 0;
	vector<int> v;

	int sum = 0;
	int n;
	int c;
	cin >> c >> sum;

	for (int i = 0; i < c; ++i) {
		cin >> n;
		v.push_back(n);
	}

	int left = 0;
	int right = 0;
	int iSum = v[0];    

    while (right < c) {
        if (iSum < sum) {
            right++;
            if (right < c)
                sum += v[right];
        }
        else if (iSum > sum) {
            iSum -= v[left];
            left++;
        }
        else if (iSum == sum) {
            iSum -= v[left];
            left++;
            right++;
            if (right < c)
                iSum += v[right];
            answer++;
        }
    }

	cout << answer;
}