//
// Created by 김명지 on 2021-09-08.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

vector<string> serial;

int getSum(string a) {
    int n = a.length(), sum = 0;
    for (int i = 0; i < n; i++) {
        // 숫자일 때만
        if (a[i] - '0' <= 9 && a[i] - '0' >= 0) {
            sum += a[i] - '0';
        }
    }
    return sum;
}

bool compare(string a, string b) {
    // 길이가 다를 때 - 짧은 것 먼저
    if (a.length() != b.length()) {
        return a.length() < b.length();
    }
    // 길이가 같을 때 - 합 비교로 넘어감
    else {
        // 합이 다를 때
        if (getSum(a) != getSum(b))
            return getSum(a) < getSum(b);

        // 합이 같을 때 - 사전순으로
        else
            return a < b;
    }

}

int main() {
    int n;
    cin >> n;
    string str;
    for (int i = 0; i < n; i++) {
        cin >> str;
        serial.push_back(str);
    }

    sort(serial.begin(), serial.end(), compare);

    // 출력
    for (int i = 0; i < n; i++)
        cout << serial[i] << "\n";
}