/**
 * File              : A.cpp
 * Author            : Bao To Hoai
 * Date              : 17.02.2021 16:44:32 UTC+7
 * Last Modified Date: 17.02.2021 16:59:58 UTC+7
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
    int a, b, c;
    cin >> a >> b >> c;
    bool f = c == 0;
    if (a == 0 && f) {
        cout << "Aoki\n";
        exit(0);
    }
    if (b == 0 && !f) {
        cout << "Takahashi\n";
        exit(0);
    }
    while (a != 0 && b != 0) {
        if (f) a--;
        else b--;
        f = !f;
    }
    cout << (f ? "Takahashi" : "Aoki") << '\n';
    return 0;
}

