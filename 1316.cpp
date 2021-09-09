//
// Created by 김명지 on 2021-09-07.
//
#include <iostream>
#include <vector>

using namespace std;

vector<bool> alphabet;

int main() {

    int n; // 입력 받을 단어의 개수
    cin >> n;

    int cnt = 0;
    string words;
    while (n--) {

        cin >> words;
        alphabet.assign(26, false);
        cnt++;
        alphabet[words[0] - 'a'] = true;
        for (int i = 1; i < words.length(); i++) {
            // 연속으로 같은 알파벳이 나온 경우
            if (words[i] == words[i - 1])
                continue;
            // 전의 알파벳과 같지 않고 이미 나온 알파벳인 경우 (그룹 단어가 아닌 경우)
            if (alphabet[words[i] - 'a']) {
                cnt--;
                break;
            }
            // 처음 나온 알파벳인 경우
            alphabet[words[i] - 'a'] = true;
        }
    }
    // 출력
    cout << cnt;
}
