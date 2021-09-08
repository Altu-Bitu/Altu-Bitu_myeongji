//
// Created by 김명지 on 2021-09-07.
//
#include <iostream>
#include <vector>

using namespace std;

vector<bool> alphabet;

bool wordCheck(string words) {

    // 알파벳에 해당하는 위치를 index 0~25에 맞게 할당하기 위해
    alphabet.assign(26, false);
    for (int i = 0; i < words.length(); i++) {

        if (alphabet[words[i] - 'a']) { // string 또한 배열처럼 index접근이 가능하다.
            return false;
        }

        else { // alphabet 배열이 false인 경우
            char tmp = words[i]; // 알파벳을 임시로 tmp에 저장
            alphabet[words[i] - 'a'] = true;

            while (1) { // 무한 루프
                if (tmp != words[++i]) {
                    i--;
                    break;
                }
            } // end of while
        } // end of else
    } // end of for
    return true;
}

int main() {

    int n; // 입력 받을 단어의 개수
    cin >> n;

    int cnt = 0;

    for (int i = 0; i < n; i++) {
        string words;
        cin >> words;
        if (wordCheck(words))
            cnt++;
    }
    // 출력
    cout << cnt;
}