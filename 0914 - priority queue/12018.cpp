//
// Created by 김명지 on 2021-09-20.
//
#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int point_arr[101];

int main() {
    ios::sync_with_stdio(0),
    cin.tie(0),
    cout.tie(0);

    int subject_num, point, ans = 0;
    int student_num, limit;
    priority_queue<int> pq;

    cin >> subject_num >> point;
    while (subject_num--) {
        cin >> student_num >> limit;
        for (int i = 0; i < student_num; i++) cin >> point_arr[i];

        if (student_num < limit) {
            pq.push(-1); continue;
        }

        sort(point_arr, point_arr + student_num, greater<int>());
        pq.push(-point_arr[limit - 1]);
    }

    while (!pq.empty()) {
        if ((point += pq.top()) < 0) break;
        ans++; pq.pop();
    }
    cout << ans;

    return 0;
}