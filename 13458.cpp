//
// Created by 김명지 on 2021-09-07.
//
#include <iostream>
#include <vector>

using namespace std;

vector<int> A;

int main() {
    int n, B, C;
    long long sup = 0;

    cin >> n;
    A.assign(n, 0);

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    cin >> B; cin >> C;
    for (int i = 0; i < n; i++) {
        A[i] -= B; // 총감독관은 1시험장당 1명씩만 들어감.
        sup++;

        // 부감독관의 수 (남은 응시생이 있어야 들어갈 수 있다.)
        if (A[i] > 0) { // 응시생이 남은 경우
            sup += A[i] / C;

            if (A[i] % C > 0) // 남은 응시생이 있는 경우
                sup++;
        }
    }
    // 출력
    cout << sup;
}
