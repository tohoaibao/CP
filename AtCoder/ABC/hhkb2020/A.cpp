/**
 * File              : A.cpp
 * Author            : Bao To Hoai
 * Date              : 19.02.2021 15:04:51 UTC+7
 * Last Modified Date: 19.02.2021 15:08:07 UTC+7
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
    char s, t;
    cin >> s >> t;
    if (s == 'Y') {
        putchar(toupper(t));
    } else {
        putchar(t);
    }
    return 0;
}

