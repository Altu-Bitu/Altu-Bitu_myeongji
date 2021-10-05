//
// Created by 김명지 on 2021-09-08.
//
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<pair<int, int>> arr;
    arr.assign(n, {});
    // 입력
    // sort함수는 first, second 순으로 오름차순 정렬을 하기 때문에 second, first 순으로 정렬 하기 위해 y,x로 바꾸어 입력받았다.
    for (int i=0; i < n; i++) {
        cin >> arr[i].second >> arr[i].first;
    }

    sort(arr.begin(), arr.end());
    // 출력
    for (int i=0; i < n; i++) {
        cout << arr[i].second << " " << arr[i].first << "\n";
    }
}