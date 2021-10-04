//
// Created by 김명지 on 2021-10-04.
//
#include <iostream>
#include <algorithm>
#include <cstring> //memset

using namespace std;

const int MAX = 10000 + 1;
int coinNum, total; //동전 갯수, 총합
int coinValue[101], cache[MAX];

int minCoin(void) {

    memset(cache, 0, sizeof(cache));
    for (int i = 1; i <= total; i++)
        cache[i] = MAX; //우선 최대치로 초기화

    for (int i = 1; i <= coinNum; i++)
        for (int j = coinValue[i]; j <= total; j++)
            cache[j] = min(cache[j], cache[j - coinValue[i]] + 1);
    return cache[total] == MAX ? -1 : cache[total]; //총합을 만들 수 없는 경우 -1
}

int main(void) {
    cin >> coinNum >> total;
    if (coinNum < 1 || coinNum > 100 || total < 1 || total >= MAX)
        exit(-1);
    for (int i = 1; i <= coinNum; i++)
        cin >> coinValue[i];
    cout << minCoin() << '\n';
    return 0;
}
