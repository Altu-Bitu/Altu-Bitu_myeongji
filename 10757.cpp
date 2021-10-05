//
// Created by 김명지 on 2021-09-13.
//
#include <iostream>
#include <string>

using namespace std;

int main() {
    string n1, n2, res, ans; // 수가 크기 때문에, 문자열로 입력받음
    cin >> n1 >> n2;
    int car = 0;  // 올림수
    int one_size = n1.size();  // 첫번째 수의 자릿수
    int two_size = n2.size();  // 두번째 수의 자릿수
    while (one_size > 0 || two_size > 0) {
        int nn1 = 0;  // 첫번째 수의 자릿수 중 하나(일의 자리부터 시작)
        if (one_size > 0) {
            nn1 = n1[--one_size] - '0';  // 문자 0 을 빼주면 함수를 쓰지 않고도 문자를 숫자로 바꾸기 가능
        }
        int nn2 = 0;
        if (two_size > 0) {
            nn2 = n2[--two_size] - '0';
        }
        int cur = nn1 + nn2 + car;
        car = cur / 10; // 올림수 변경
        cur %= 10;
        char ccar = cur + '0';  // 문자로 변환
        res += ccar;
    }
    if (car > 0) // 올림수가 마지막까지 남아있다면
    {
        res += car + '0';
    }
    for (int i = res.length() - 1; i >= 0; i--)  // 출력
    {
        cout << res[i];
    }
}