#include <string>
#include <vector>

using namespace std;

#include <iostream>
string solution(string number, int k) {

    for (int i = 0; i < number.length(); ++i) {
        if (k <= 0) {
            break;
        }

        if (i == 0) {
            if (number[i] < number[i + 1]) {
                number.erase(number.begin() + i);
                --k;
                --i;
            }
            continue;
        }

        if (number[i] > number[i - 1]) {

            number.erase(number.begin() + (i - 1));
            --k;
            i -= 2;
        }
    }

    if (k > 0) {

        for (int i = number.length() - 1; i >= 0; --i) {
            if (k <= 0) {
                break;
            }

            if (i == number.length() - 1) {
                if (number[i] < number[i - 1]) {
                    number.erase(number.begin() + i);
                    --k;
                    --i;
                }
                continue;
            }

            if (number[i] > number[i + 1]) {

                number.erase(number.begin() + (i + 1));
                --k;
                i += 2;
            }
        }

    }


    return number;
}


int main(void) {

    string num;
    int k;

    cin >> num >> k;

    cout << endl;
    cout << solution(num, k);

}