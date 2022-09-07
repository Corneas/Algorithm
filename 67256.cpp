#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";

    int num_pos[2][1];
    int hand_pos[2][2] = { {3, 0}, {3, 2} };    

    for (int i = 0; i < numbers.size(); ++i) {

        if (numbers[i] == 0) {
            num_pos[0][0] = 3;
            num_pos[1][0] = 1;
        }
        else {
            num_pos[0][0] = ((numbers[i] - 1) / 3);
            num_pos[1][0] = ((numbers[i] - 1) % 3);
        }

        //left
        if (numbers[i] % 3 == 1) {
            answer += "L";
            hand_pos[0][0] = num_pos[0][0];
            hand_pos[0][1] = num_pos[1][0];
        }
        else if (numbers[i] % 3 == 0 && numbers[i] != 0) {
            answer += "R";
            hand_pos[1][0] = num_pos[0][0];
            hand_pos[1][1] = num_pos[1][0];
        }

        else if (abs(hand_pos[0][0] - num_pos[0][0]) + abs(hand_pos[0][1] - num_pos[1][0]) 
            < abs(hand_pos[1][0] - num_pos[0][0]) + abs(hand_pos[1][1] - num_pos[1][0])) {
            answer += "L";
            hand_pos[0][0] = num_pos[0][0];
            hand_pos[0][1] = num_pos[1][0];
        }
        else if (abs(hand_pos[0][0] - num_pos[0][0]) + abs(hand_pos[0][1] - num_pos[1][0]) 
            > abs(hand_pos[1][0] - num_pos[0][0]) + abs(hand_pos[1][1] - num_pos[1][0])) {
            answer += "R";
            hand_pos[1][0] = num_pos[0][0];
            hand_pos[1][1] = num_pos[1][0];
        }
        else {
            if (hand == "left") {
                answer += "L";
                hand_pos[0][0] = num_pos[0][0];
                hand_pos[0][1] = num_pos[1][0];
            }
            else {
                answer += "R";
                hand_pos[1][0] = num_pos[0][0];
                hand_pos[1][1] = num_pos[1][0];
            }
        }
    }

    return answer;
}

int main(void) {

    vector<int> numbers; 
    string hand = "right";
    string answer = "";
    //7, 0, 8, 2, 8, 3, 1, 5, 7, 6, 2

    numbers.push_back(7);
    numbers.push_back(0);
    numbers.push_back(8);
    numbers.push_back(2);
    numbers.push_back(8);
    numbers.push_back(3);
    numbers.push_back(1);
    numbers.push_back(5);
    numbers.push_back(7);
    numbers.push_back(6);
    numbers.push_back(2);

    int num_pos[2][1];
    int hand_pos[2][2] = { {3, 0}, {3, 2} };

    for (int i = 0; i < numbers.size(); ++i) {

        if (numbers[i] == 0) {
            num_pos[0][0] = 3;
            num_pos[1][0] = 1;
        }
        else {
            num_pos[0][0] = ((numbers[i] - 1) / 3);
            num_pos[1][0] = ((numbers[i] - 1) % 3);
        }

        cout << numbers[i] << endl;
        cout << "이동 전 Left : {" << hand_pos[0][0] << ", " << hand_pos[0][1] << "}" << endl;
        cout << "이동 전 Right : {" << hand_pos[1][0] << ", " << hand_pos[1][1] << "}" << endl;

        //left
        if (numbers[i] == 1) {
            answer += "L";
            hand_pos[0][0] = num_pos[0][0];
            hand_pos[0][1] = num_pos[1][0];
        }
        else if (numbers[i] == 4) {
            answer += "L";
            hand_pos[0][0] = num_pos[0][0];
            hand_pos[0][1] = num_pos[1][0];
        }
        else if (numbers[i] == 7) {
            answer += "L";
            hand_pos[0][0] = num_pos[0][0];
            hand_pos[0][1] = num_pos[1][0];
        }

        //right
        else if (numbers[i] == 3) {
            answer += "R";
            hand_pos[1][0] = num_pos[0][0];
            hand_pos[1][1] = num_pos[1][0];
        }
        else if (numbers[i] == 6) {
            answer += "R";
            hand_pos[1][0] = num_pos[0][0];
            hand_pos[1][1] = num_pos[1][0];
        }
        else if (numbers[i] == 9) {
            answer += "R";
            hand_pos[1][0] = num_pos[0][0];
            hand_pos[1][1] = num_pos[1][0];
        }

        else if (abs(hand_pos[0][0] - num_pos[0][0]) + abs(hand_pos[0][1] - num_pos[1][0]) < abs(hand_pos[1][0] - num_pos[0][0]) + abs(hand_pos[1][1] - num_pos[1][0])) {
            answer += "L";
            cout << "왼손 거리 : " << abs(hand_pos[0][0] - num_pos[0][0]) + abs(hand_pos[0][1] - num_pos[1][0]) << endl;
            cout << "오른손 거리 : " << abs(hand_pos[1][0] - num_pos[0][0]) + abs(hand_pos[1][1] - num_pos[1][0]) << endl;
            hand_pos[0][0] = num_pos[0][0];
            hand_pos[0][1] = num_pos[1][0];
        }
        else if (abs(hand_pos[0][0] - num_pos[0][0]) + abs(hand_pos[0][1] - num_pos[1][0]) > abs(hand_pos[1][0] - num_pos[0][0]) + abs(hand_pos[1][1] - num_pos[1][0])) {
            answer += "R";
            cout << "왼손 거리 : " << abs(hand_pos[0][0] - num_pos[0][0]) + abs(hand_pos[0][1] - num_pos[1][0]) << endl;
            cout << "오른손 거리 : " << abs(hand_pos[1][0] - num_pos[0][0]) + abs(hand_pos[1][1] - num_pos[1][0]) << endl;
            hand_pos[1][0] = num_pos[0][0];
            hand_pos[1][1] = num_pos[1][0];
        }
        else {
            if (hand == "left") {
                answer += "left";
                hand_pos[0][0] = num_pos[0][0];
                hand_pos[0][1] = num_pos[1][0];
            }
            else {
                answer += "right";
                hand_pos[1][0] = num_pos[0][0];
                hand_pos[1][1] = num_pos[1][0];
            }
        }

        cout << "num_pos : " << "{" << num_pos[0][0] << ", " << num_pos[0][1] << "}" << endl;
        cout << "이동 후 Left : {" << hand_pos[0][0] << ", " << hand_pos[0][1] << "}" << endl;
        cout << "이동 후 Right : {" << hand_pos[1][0] << ", " << hand_pos[1][1] << "}" << endl;
        cout << answer[i] << endl << endl;
    }

    for (int i = 0; i < answer.size(); ++i) {
        cout << answer[i];
    }
}