//
// Created by 김명지 on 2021-09-23.
//
#include <iostream>

using namespace std;

long long int gcd, lcm, tmp;
long long int resA = 0, resB = 0;

int main() {

    //입력
    cin >> gcd >> lcm;

    //tmp = 최소공배수 / 최대공약수
    tmp = lcm / gcd;

    //tmp의 약수 두 수 구하고, 서로소인지 판별
    for (long long int i = 1; i * i <= tmp; i++) {
        if (tmp % i == 0) {
            //약수 두 수
            long long int tmpA = i;
            long long int tmpB = tmp / i;

            //약수 두 수가 서로소인지 판별
            bool isAble = true;
            long long int cnt = 0;
            for (long long int j = 1; j <= tmpA; j++) {
                if (tmpA % j == 0 && tmpB % j == 0) {
                    cnt++;
                }
                //약수의 개수가 1개보다 많은 경우 불가능
                if (cnt > 1) {
                    isAble = false;
                    break;
                }
            }

            //가능한 경우 중 가장 마지막에 저장되는 값이 합이 가장 작게된다
            if (isAble) {
                resA = tmpA * gcd;
                resB = tmpB * gcd;
            }
        }
    }
    //출력
    cout << resA << " " << resB;
}