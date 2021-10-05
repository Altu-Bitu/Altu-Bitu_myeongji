//
// Created by 김명지 on 2021-09-13.
//
#include <iostream>
#include <set>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    set<string> v;
    set<string> result;

    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        v.insert(s);
    }

    int cnt = 0;

    for (int i = 0; i < m; ++i) {
        string s;
        cin >> s;
        if (v.find(s) != v.end()) {
            result.insert(s);
            cnt++;
        }

    }
    cout << cnt << '\n';

    for (string s: result)
        cout << s << '\n';

    return 0;
}