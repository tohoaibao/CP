/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 05.11.2020 08:45:07 UTC+7
 * Last Modified Date: 05.11.2020 08:46:37 UTC+7
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
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sum += x;
    }
    cout << (sum % n == 0 ? n : n - 1) << '\n';
    return 0;
}

