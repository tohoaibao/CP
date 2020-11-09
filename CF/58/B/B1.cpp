/**
 * File              : B1.cpp
 * Author            : Bao To Hoai
 * Date              : 06.11.2020 13:29:55 UTC+7
 * Last Modified Date: 06.11.2020 13:30:37 UTC+7
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
    int n;
    cin >> n;
    for (int i = n; i > 0; i--) {
        if (n % i == 0) {
            cout << i << " ";
            n = i;
        }
    }
    return 0;
}

