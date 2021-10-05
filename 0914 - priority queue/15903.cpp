//
// Created by 김명지 on 2021-09-20.
//
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    long long arr[1000];
    int n,m;
    long long ret = 0;

    cin >> n >> m;
    for(int i = 0; i < n; i++) cin >> arr[i];

    for(int i = 0; i < m; i++){
        sort(arr,arr+n);
        long long tmp = arr[1] + arr[0];
        arr[0] = tmp; arr[1] = tmp;
    }

    for(int i = 0; i < n; i++) ret+=arr[i];
    cout << ret;
}

