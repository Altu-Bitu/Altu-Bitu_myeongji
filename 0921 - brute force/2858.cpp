//
// Created by 김명지 on 2021-09-27.
//
#include<iostream>
using namespace std;
int main() {
    int r, b, w, l;
    cin >> r >> b;

    r += b;
    for (l = r; l >= 1; l--) {
        w = r / l;
        //가장자리를 뺀 타일을 곱하면 b가 나옴
        if ((l - 2) * (w - 2) == b)
            break;
    }
    cout << l << ' ' << w;
}
