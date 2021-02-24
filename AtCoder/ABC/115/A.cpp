/**
 * File              : A.cpp
 * Author            : Bao To Hoai
 * Date              : 23.02.2021 16:56:47 UTC+7
 * Last Modified Date: 23.02.2021 17:01:07 UTC+7
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
    int d;
    cin >> d;
    if (d == 25) {
        cout << "Christmas\n";
    } else if (d == 24) {
        cout << "Christmas Eve\n";
    } else if (d == 23) {
        cout << "Christmas Eve Eve\n";
    } else {
        cout << "Christmas Eve Eve Eve\n";
    }
    return 0;
}

