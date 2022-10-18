#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int N[31] = { 0 };

	// 공식 : 
	// while(오른쪽 사이트 개수) - (왼쪽 사이트 개수 - 1) == 1)
	// N[0] + N[1] + ... N[(오른쪽 사이트 개수) - (왼쪽 사이트 개수 - 1)];
	// ?

	for (int i = 0; i < 31; ++i) {
		N[i] == i;
	}
	
	int n = 0;
	cin >> n;

	int l;
	int r;

	for (int i = 0; i < n; ++i) {
		cin >> l >> r;
	}

	for (int i = 0; i < l - r; ++i) {

	}

}