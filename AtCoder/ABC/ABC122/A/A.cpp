/**
 * File              : A.cpp
 * Author            : Bao To Hoai
 * Date              : 13.12.2020 19:18:00 UTC+7
 * Last Modified Date: 13.12.2020 19:25:07 UTC+7
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
    char c;
    cin >> c;
    if (c == 'A') {
        putchar('T');
    } else if (c == 'T') {
        putchar('A');
    } else if (c == 'C') {
        putchar('G');
    } else if (c == 'G') {
        putchar('C');
    } else {
        assert(false);
    }
    return 0;
}

