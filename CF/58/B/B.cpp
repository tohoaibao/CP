/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 06.11.2020 13:23:32 UTC+7
 * Last Modified Date: 06.11.2020 13:26:50 UTC+7
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
    while (n != 1) {
        for (int i = 2; i <= n; i++) {
            if (n % i == 0) {
                cout << n << " ";
                n = n / i;
                break;
            }
        }
    }
    cout << "1\n";
    return 0;
}

