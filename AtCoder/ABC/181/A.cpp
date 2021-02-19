/**
 * File              : A.cpp
 * Author            : Bao To Hoai
 * Date              : 19.02.2021 11:18:17 UTC+7
 * Last Modified Date: 19.02.2021 11:18:46 UTC+7
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
    cout << (n % 2 == 0 ? "White" : "Black") << '\n';
    return 0;
}

