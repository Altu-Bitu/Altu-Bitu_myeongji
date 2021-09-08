//
// Created by 김명지 on 2021-09-07.
//
#include <iostream>
#include <algorithm> // sort 함수를 사용하려고
#include <vector>

using namespace std;

vector<int> A, B;

int main(void) {
    int n;
    cin >> n;

    A.assign(n,0);
    B.assign(n,0);

    for (int i = 0; i < n; i++)
        cin >> A[i];
    for (int i = 0; i < n; i++)
        cin >> B[i];

    // A는 오름차순으로 정렬
    sort(A.begin(), A.end());
    // B는 내림차순으로 정렬
    sort(B.begin(), B.end(), greater<>());

    int S = 0;

    for (int i = 0; i < n; i++)
        S += A[i] * B[i];

    cout << S;

}
