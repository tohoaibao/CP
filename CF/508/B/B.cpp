/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 10.11.2020 15:18:05 UTC+7
 * Last Modified Date: 10.11.2020 15:45:50 UTC+7
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    int last = s.back() - '0';
    for (int i = 0; i < sz(s) - 1; i++) {
        int num = s[i] - '0';
        if (num % 2 == 0 && num < last) {
            swap(s[i], s[sz(s) - 1]);
            cout << s << '\n';
            return 0;
        }
    }
    for (int i = sz(s) - 2; i >= 0; i--) {
        int num = s[i] - '0';
        if (num % 2 == 0 && num > last) {
            swap(s[i], s[sz(s) - 1]);
            cout << s << '\n';
            return 0;
        }
    }
    puts("-1");
    return 0;
}

