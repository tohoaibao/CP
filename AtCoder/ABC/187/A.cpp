/**
 * File              : A.cpp
 * Author            : Bao To Hoai
 * Date              : 18.02.2021 13:25:37 UTC+7
 * Last Modified Date: 18.02.2021 13:27:02 UTC+7
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
    string a, b;
    cin >> a >> b;
    int s1 = 0, s2 = 0;
    for (char c : a) {
        s1 += c - '0';
    }
    for (char c: b) {
        s2 += c - '0';
    }
    cout << max(s1, s2) << '\n';
    return 0;
}

